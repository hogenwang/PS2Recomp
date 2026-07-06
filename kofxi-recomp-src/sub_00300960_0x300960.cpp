#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00300960
// Address: 0x300960 - 0x3009e0
void sub_00300960_0x300960(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00300960_0x300960");
#endif

    switch (ctx->pc) {
        case 0x300978u: goto label_300978;
        case 0x3009d0u: goto label_3009d0;
        default: break;
    }

    ctx->pc = 0x300960u;

    // 0x300960: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x300960u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x300964: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x300964u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x300968: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x300968u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x30096c: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x30096cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x300970: 0xc0691d0  jal         func_1A4740
    ctx->pc = 0x300970u;
    SET_GPR_U32(ctx, 31, 0x300978u);
    ctx->pc = 0x300974u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x300970u;
            // 0x300974: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4740u;
    if (runtime->hasFunction(0x1A4740u)) {
        auto targetFn = runtime->lookupFunction(0x1A4740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300978u; }
        if (ctx->pc != 0x300978u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4740_0x1a4740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x300978u; }
        if (ctx->pc != 0x300978u) { return; }
    }
    ctx->pc = 0x300978u;
label_300978:
    // 0x300978: 0x56000006  bnel        $s0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x300978u;
    {
        const bool branch_taken_0x300978 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x300978) {
            ctx->pc = 0x30097Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x300978u;
            // 0x30097c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x300994u;
            goto label_300994;
        }
    }
    ctx->pc = 0x300980u;
    // 0x300980: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x300980u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x300984: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x300984u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x300988: 0x2463da30  addiu       $v1, $v1, -0x25D0
    ctx->pc = 0x300988u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957616));
    // 0x30098c: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x30098Cu;
    {
        const bool branch_taken_0x30098c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x300990u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x30098Cu;
            // 0x300990: 0xac43be80  sw          $v1, -0x4180($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950528), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x30098c) {
            ctx->pc = 0x3009B8u;
            goto label_3009b8;
        }
    }
    ctx->pc = 0x300994u;
label_300994:
    // 0x300994: 0x16020006  bne         $s0, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x300994u;
    {
        const bool branch_taken_0x300994 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x300994) {
            ctx->pc = 0x3009B0u;
            goto label_3009b0;
        }
    }
    ctx->pc = 0x30099Cu;
    // 0x30099c: 0x3c030030  lui         $v1, 0x30
    ctx->pc = 0x30099cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)48 << 16));
    // 0x3009a0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3009a0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3009a4: 0x2463da50  addiu       $v1, $v1, -0x25B0
    ctx->pc = 0x3009a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957648));
    // 0x3009a8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x3009A8u;
    {
        const bool branch_taken_0x3009a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x3009ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3009A8u;
            // 0x3009ac: 0xac43be80  sw          $v1, -0x4180($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294950528), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x3009a8) {
            ctx->pc = 0x3009B8u;
            goto label_3009b8;
        }
    }
    ctx->pc = 0x3009B0u;
label_3009b0:
    // 0x3009b0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3009b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3009b4: 0xac50be80  sw          $s0, -0x4180($v0)
    ctx->pc = 0x3009b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294950528), GPR_U32(ctx, 16));
label_3009b8:
    // 0x3009b8: 0x3c040030  lui         $a0, 0x30
    ctx->pc = 0x3009b8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)48 << 16));
    // 0x3009bc: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x3009bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x3009c0: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x3009c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x3009c4: 0x2484dae0  addiu       $a0, $a0, -0x2520
    ctx->pc = 0x3009c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957792));
    // 0x3009c8: 0xc082674  jal         func_2099D0
    ctx->pc = 0x3009C8u;
    SET_GPR_U32(ctx, 31, 0x3009D0u);
    ctx->pc = 0x3009CCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x3009C8u;
            // 0x3009cc: 0xa443be90  sh          $v1, -0x4170($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 4294950544), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (runtime->hasFunction(0x2099D0u)) {
        auto targetFn = runtime->lookupFunction(0x2099D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3009D0u; }
        if (ctx->pc != 0x3009D0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002099D0_0x2099d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x3009D0u; }
        if (ctx->pc != 0x3009D0u) { return; }
    }
    ctx->pc = 0x3009D0u;
label_3009d0:
    // 0x3009d0: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x3009d0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x3009d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x3009d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x3009d8: 0x3e00008  jr          $ra
    ctx->pc = 0x3009D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x3009DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x3009D8u;
            // 0x3009dc: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x3009E0u;
    ctx->pc = 0x3009e0u;
}
