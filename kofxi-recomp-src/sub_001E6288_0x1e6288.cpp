#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001E6288
// Address: 0x1e6288 - 0x1e62e0
void sub_001E6288_0x1e6288(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E6288_0x1e6288");
#endif

    switch (ctx->pc) {
        case 0x1e6288u: goto label_1e6288;
        case 0x1e628cu: goto label_1e628c;
        case 0x1e6290u: goto label_1e6290;
        case 0x1e6294u: goto label_1e6294;
        case 0x1e6298u: goto label_1e6298;
        case 0x1e629cu: goto label_1e629c;
        case 0x1e62a0u: goto label_1e62a0;
        case 0x1e62a4u: goto label_1e62a4;
        case 0x1e62a8u: goto label_1e62a8;
        case 0x1e62acu: goto label_1e62ac;
        case 0x1e62b0u: goto label_1e62b0;
        case 0x1e62b4u: goto label_1e62b4;
        case 0x1e62b8u: goto label_1e62b8;
        case 0x1e62bcu: goto label_1e62bc;
        case 0x1e62c0u: goto label_1e62c0;
        case 0x1e62c4u: goto label_1e62c4;
        case 0x1e62c8u: goto label_1e62c8;
        case 0x1e62ccu: goto label_1e62cc;
        case 0x1e62d0u: goto label_1e62d0;
        case 0x1e62d4u: goto label_1e62d4;
        case 0x1e62d8u: goto label_1e62d8;
        case 0x1e62dcu: goto label_1e62dc;
        default: break;
    }

    ctx->pc = 0x1e6288u;

label_1e6288:
    // 0x1e6288: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1e6288u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
label_1e628c:
    // 0x1e628c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e628cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1e6290:
    // 0x1e6290: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x1e6290u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
label_1e6294:
    // 0x1e6294: 0xc079a08  jal         func_1E6820
label_1e6298:
    if (ctx->pc == 0x1E6298u) {
        ctx->pc = 0x1E6298u;
            // 0x1e6298: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E629Cu;
        goto label_1e629c;
    }
    ctx->pc = 0x1E6294u;
    SET_GPR_U32(ctx, 31, 0x1E629Cu);
    ctx->pc = 0x1E6298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1E6294u;
            // 0x1e6298: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1E6820u;
    if (runtime->hasFunction(0x1E6820u)) {
        auto targetFn = runtime->lookupFunction(0x1E6820u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E629Cu; }
        if (ctx->pc != 0x1E629Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001E6820_0x1e6820(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1E629Cu; }
        if (ctx->pc != 0x1E629Cu) { return; }
    }
    ctx->pc = 0x1E629Cu;
label_1e629c:
    // 0x1e629c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e629cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1e62a0:
    // 0x1e62a0: 0x5443000c  bnel        $v0, $v1, . + 4 + (0xC << 2)
label_1e62a4:
    if (ctx->pc == 0x1E62A4u) {
        ctx->pc = 0x1E62A4u;
            // 0x1e62a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1E62A8u;
        goto label_1e62a8;
    }
    ctx->pc = 0x1E62A0u;
    {
        const bool branch_taken_0x1e62a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e62a0) {
            ctx->pc = 0x1E62A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E62A0u;
            // 0x1e62a4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E62D4u;
            goto label_1e62d4;
        }
    }
    ctx->pc = 0x1E62A8u;
label_1e62a8:
    // 0x1e62a8: 0x8e03001c  lw          $v1, 0x1C($s0)
    ctx->pc = 0x1e62a8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
label_1e62ac:
    // 0x1e62ac: 0x10600008  beqz        $v1, . + 4 + (0x8 << 2)
label_1e62b0:
    if (ctx->pc == 0x1E62B0u) {
        ctx->pc = 0x1E62B0u;
            // 0x1e62b0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->pc = 0x1E62B4u;
        goto label_1e62b4;
    }
    ctx->pc = 0x1E62ACu;
    {
        const bool branch_taken_0x1e62ac = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1E62B0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E62ACu;
            // 0x1e62b0: 0x8e040008  lw          $a0, 0x8($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e62ac) {
            ctx->pc = 0x1E62D0u;
            goto label_1e62d0;
        }
    }
    ctx->pc = 0x1E62B4u;
label_1e62b4:
    // 0x1e62b4: 0x50800007  beql        $a0, $zero, . + 4 + (0x7 << 2)
label_1e62b8:
    if (ctx->pc == 0x1E62B8u) {
        ctx->pc = 0x1E62B8u;
            // 0x1e62b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1E62BCu;
        goto label_1e62bc;
    }
    ctx->pc = 0x1E62B4u;
    {
        const bool branch_taken_0x1e62b4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e62b4) {
            ctx->pc = 0x1E62B8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E62B4u;
            // 0x1e62b8: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E62D4u;
            goto label_1e62d4;
        }
    }
    ctx->pc = 0x1E62BCu;
label_1e62bc:
    // 0x1e62bc: 0x8c820018  lw          $v0, 0x18($a0)
    ctx->pc = 0x1e62bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 24)));
label_1e62c0:
    // 0x1e62c0: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
label_1e62c4:
    if (ctx->pc == 0x1E62C4u) {
        ctx->pc = 0x1E62C4u;
            // 0x1e62c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->pc = 0x1E62C8u;
        goto label_1e62c8;
    }
    ctx->pc = 0x1E62C0u;
    {
        const bool branch_taken_0x1e62c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e62c0) {
            ctx->pc = 0x1E62C4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1E62C0u;
            // 0x1e62c4: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1E62D4u;
            goto label_1e62d4;
        }
    }
    ctx->pc = 0x1E62C8u;
label_1e62c8:
    // 0x1e62c8: 0x40f809  jalr        $v0
label_1e62cc:
    if (ctx->pc == 0x1E62CCu) {
        ctx->pc = 0x1E62CCu;
            // 0x1e62cc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x1E62D0u;
        goto label_1e62d0;
    }
    ctx->pc = 0x1E62C8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1E62D0u);
        ctx->pc = 0x1E62CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E62C8u;
            // 0x1e62cc: 0x60202d  daddu       $a0, $v1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x1E62D0u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x1E62D0u; }
            if (ctx->pc != 0x1E62D0u) { return; }
        }
        }
    }
    ctx->pc = 0x1E62D0u;
label_1e62d0:
    // 0x1e62d0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e62d0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e62d4:
    // 0x1e62d4: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x1e62d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1e62d8:
    // 0x1e62d8: 0x3e00008  jr          $ra
label_1e62dc:
    if (ctx->pc == 0x1E62DCu) {
        ctx->pc = 0x1E62DCu;
            // 0x1e62dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->pc = 0x1E62E0u;
        goto label_fallthrough_0x1e62d8;
    }
    ctx->pc = 0x1E62D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E62DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1E62D8u;
            // 0x1e62dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x1e62d8:
    ctx->pc = 0x1E62E0u;
    ctx->pc = 0x1e62e0u;
}
