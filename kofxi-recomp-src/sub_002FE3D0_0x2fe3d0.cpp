#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002FE3D0
// Address: 0x2fe3d0 - 0x2fe460
void sub_002FE3D0_0x2fe3d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002FE3D0_0x2fe3d0");
#endif

    switch (ctx->pc) {
        case 0x2fe3f0u: goto label_2fe3f0;
        case 0x2fe44cu: goto label_2fe44c;
        default: break;
    }

    ctx->pc = 0x2fe3d0u;

    // 0x2fe3d0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2fe3d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2fe3d4: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x2fe3d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x2fe3d8: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2fe3d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2fe3dc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x2fe3dcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x2fe3e0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x2fe3e0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x2fe3e4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2fe3e4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2fe3e8: 0xc0691d0  jal         func_1A4740
    ctx->pc = 0x2FE3E8u;
    SET_GPR_U32(ctx, 31, 0x2FE3F0u);
    ctx->pc = 0x2FE3ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE3E8u;
            // 0x2fe3ec: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4740u;
    if (runtime->hasFunction(0x1A4740u)) {
        auto targetFn = runtime->lookupFunction(0x1A4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE3F0u; }
        if (ctx->pc != 0x2FE3F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4740_0x1a4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE3F0u; }
        if (ctx->pc != 0x2FE3F0u) { return; }
    }
    ctx->pc = 0x2FE3F0u;
label_2fe3f0:
    // 0x2fe3f0: 0x12200004  beqz        $s1, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FE3F0u;
    {
        const bool branch_taken_0x2fe3f0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe3f0) {
            ctx->pc = 0x2FE404u;
            goto label_2fe404;
        }
    }
    ctx->pc = 0x2FE3F8u;
    // 0x2fe3f8: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fe3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fe3fc: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FE3FCu;
    {
        const bool branch_taken_0x2fe3fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE400u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE3FCu;
            // 0x2fe400: 0xac51be80  sw          $s1, -0x4180($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950528), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe3fc) {
            ctx->pc = 0x2FE414u;
            goto label_2fe414;
        }
    }
    ctx->pc = 0x2FE404u;
label_2fe404:
    // 0x2fe404: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x2fe404u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x2fe408: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fe408u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fe40c: 0x2463da10  addiu       $v1, $v1, -0x25F0
    ctx->pc = 0x2fe40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957584));
    // 0x2fe410: 0xac43be80  sw          $v1, -0x4180($v0)
    ctx->pc = 0x2fe410u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950528), GPR_U32(ctx, 3));
label_2fe414:
    // 0x2fe414: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x2FE414u;
    {
        const bool branch_taken_0x2fe414 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x2fe414) {
            ctx->pc = 0x2FE428u;
            goto label_2fe428;
        }
    }
    ctx->pc = 0x2FE41Cu;
    // 0x2fe41c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fe41cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fe420: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x2FE420u;
    {
        const bool branch_taken_0x2fe420 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2FE424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE420u;
            // 0x2fe424: 0xac50be84  sw          $s0, -0x417C($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950532), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2fe420) {
            ctx->pc = 0x2FE438u;
            goto label_2fe438;
        }
    }
    ctx->pc = 0x2FE428u;
label_2fe428:
    // 0x2fe428: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x2fe428u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x2fe42c: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fe42cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fe430: 0x2463da10  addiu       $v1, $v1, -0x25F0
    ctx->pc = 0x2fe430u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957584));
    // 0x2fe434: 0xac43be84  sw          $v1, -0x417C($v0)
    ctx->pc = 0x2fe434u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950532), GPR_U32(ctx, 3));
label_2fe438:
    // 0x2fe438: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x2fe438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x2fe43c: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x2fe43cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x2fe440: 0x2484dba0  addiu       $a0, $a0, -0x2460
    ctx->pc = 0x2fe440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957984));
    // 0x2fe444: 0xc082674  jal         func_2099D0
    ctx->pc = 0x2FE444u;
    SET_GPR_U32(ctx, 31, 0x2FE44Cu);
    ctx->pc = 0x2FE448u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE444u;
            // 0x2fe448: 0xa440be90  sh          $zero, -0x4170($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294950544), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE44Cu; }
        if (ctx->pc != 0x2FE44Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2FE44Cu; }
        if (ctx->pc != 0x2FE44Cu) { return; }
    }
    ctx->pc = 0x2FE44Cu;
label_2fe44c:
    // 0x2fe44c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2fe44cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2fe450: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x2fe450u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2fe454: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x2fe454u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2fe458: 0x3e00008  jr          $ra
    ctx->pc = 0x2FE458u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2FE45Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2FE458u;
            // 0x2fe45c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2FE460u;
    ctx->pc = 0x2fe460u;
}
