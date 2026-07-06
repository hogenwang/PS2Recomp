#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002945D0
// Address: 0x2945d0 - 0x294628
void sub_002945D0_0x2945d0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002945D0_0x2945d0");
#endif

    switch (ctx->pc) {
        case 0x2945d0u: goto label_2945d0;
        case 0x2945d4u: goto label_2945d4;
        case 0x2945d8u: goto label_2945d8;
        case 0x2945dcu: goto label_2945dc;
        case 0x2945e0u: goto label_2945e0;
        case 0x2945e4u: goto label_2945e4;
        case 0x2945e8u: goto label_2945e8;
        case 0x2945ecu: goto label_2945ec;
        case 0x2945f0u: goto label_2945f0;
        case 0x2945f4u: goto label_2945f4;
        case 0x2945f8u: goto label_2945f8;
        case 0x2945fcu: goto label_2945fc;
        case 0x294600u: goto label_294600;
        case 0x294604u: goto label_294604;
        case 0x294608u: goto label_294608;
        case 0x29460cu: goto label_29460c;
        case 0x294610u: goto label_294610;
        case 0x294614u: goto label_294614;
        case 0x294618u: goto label_294618;
        case 0x29461cu: goto label_29461c;
        case 0x294620u: goto label_294620;
        case 0x294624u: goto label_294624;
        default: break;
    }

    ctx->pc = 0x2945d0u;

label_2945d0:
    // 0x2945d0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x2945d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
label_2945d4:
    // 0x2945d4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2945d4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_2945d8:
    // 0x2945d8: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x2945d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
label_2945dc:
    // 0x2945dc: 0xc0a3dd0  jal         func_28F740
label_2945e0:
    if (ctx->pc == 0x2945E0u) {
        ctx->pc = 0x2945E0u;
            // 0x2945e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x2945E4u;
        goto label_2945e4;
    }
    ctx->pc = 0x2945DCu;
    SET_GPR_U32(ctx, 31, 0x2945E4u);
    ctx->pc = 0x2945E0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2945DCu;
            // 0x2945e0: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28F740u;
    if (runtime->hasFunction(0x28F740u)) {
        auto targetFn = runtime->lookupFunction(0x28F740u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2945E4u; }
        if (ctx->pc != 0x2945E4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028F740_0x28f740(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2945E4u; }
        if (ctx->pc != 0x2945E4u) { return; }
    }
    ctx->pc = 0x2945E4u;
label_2945e4:
    // 0x2945e4: 0x8c420028  lw          $v0, 0x28($v0)
    ctx->pc = 0x2945e4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 40)));
label_2945e8:
    // 0x2945e8: 0x14400008  bnez        $v0, . + 4 + (0x8 << 2)
label_2945ec:
    if (ctx->pc == 0x2945ECu) {
        ctx->pc = 0x2945ECu;
            // 0x2945ec: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->pc = 0x2945F0u;
        goto label_2945f0;
    }
    ctx->pc = 0x2945E8u;
    {
        const bool branch_taken_0x2945e8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x2945ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2945E8u;
            // 0x2945ec: 0x2404000a  addiu       $a0, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2945e8) {
            ctx->pc = 0x29460Cu;
            goto label_29460c;
        }
    }
    ctx->pc = 0x2945F0u;
label_2945f0:
    // 0x2945f0: 0x2405006b  addiu       $a1, $zero, 0x6B
    ctx->pc = 0x2945f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 107));
label_2945f4:
    // 0x2945f4: 0x2406000e  addiu       $a2, $zero, 0xE
    ctx->pc = 0x2945f4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 14));
label_2945f8:
    // 0x2945f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2945f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_2945fc:
    // 0x2945fc: 0xc0a5648  jal         func_295920
label_294600:
    if (ctx->pc == 0x294600u) {
        ctx->pc = 0x294600u;
            // 0x294600: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x294604u;
        goto label_294604;
    }
    ctx->pc = 0x2945FCu;
    SET_GPR_U32(ctx, 31, 0x294604u);
    ctx->pc = 0x294600u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2945FCu;
            // 0x294600: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294604u; }
        if (ctx->pc != 0x294604u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x294604u; }
        if (ctx->pc != 0x294604u) { return; }
    }
    ctx->pc = 0x294604u;
label_294604:
    // 0x294604: 0x10000003  b           . + 4 + (0x3 << 2)
label_294608:
    if (ctx->pc == 0x294608u) {
        ctx->pc = 0x294608u;
            // 0x294608: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->pc = 0x29460Cu;
        goto label_29460c;
    }
    ctx->pc = 0x294604u;
    {
        const bool branch_taken_0x294604 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x294608u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x294604u;
            // 0x294608: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x294604) {
            ctx->pc = 0x294614u;
            goto label_294614;
        }
    }
    ctx->pc = 0x29460Cu;
label_29460c:
    // 0x29460c: 0x40f809  jalr        $v0
label_294610:
    if (ctx->pc == 0x294610u) {
        ctx->pc = 0x294610u;
            // 0x294610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x294614u;
        goto label_294614;
    }
    ctx->pc = 0x29460Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x294614u);
        ctx->pc = 0x294610u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29460Cu;
            // 0x294610: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x294614u;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x294614u; }
            if (ctx->pc != 0x294614u) { return; }
        }
        }
    }
    ctx->pc = 0x294614u;
label_294614:
    // 0x294614: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x294614u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_294618:
    // 0x294618: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x294618u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_29461c:
    // 0x29461c: 0x3e00008  jr          $ra
label_294620:
    if (ctx->pc == 0x294620u) {
        ctx->pc = 0x294620u;
            // 0x294620: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x294624u;
        goto label_294624;
    }
    ctx->pc = 0x29461Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x294620u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29461Cu;
            // 0x294620: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x294624u;
label_294624:
    // 0x294624: 0x0  nop
    ctx->pc = 0x294624u;
    // NOP
    ctx->pc = 0x294628u;
}
