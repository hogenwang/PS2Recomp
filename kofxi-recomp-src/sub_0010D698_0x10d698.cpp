#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010D698
// Address: 0x10d698 - 0x10d730
void sub_0010D698_0x10d698(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D698_0x10d698");
#endif

    switch (ctx->pc) {
        case 0x10d6d0u: goto label_10d6d0;
        case 0x10d6e4u: goto label_10d6e4;
        default: break;
    }

    ctx->pc = 0x10d698u;

    // 0x10d698: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10d698u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10d69c: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10d69cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10d6a0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10d6a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10d6a4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x10d6a4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d6a8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10d6a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10d6ac: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x10d6acu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x10d6b0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10d6b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10d6b4: 0x40106000  mfc0        $s0, Status
    ctx->pc = 0x10d6b4u;
    SET_GPR_S32(ctx, 16, (int32_t)ctx->cop0_status);
    // 0x10d6b8: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10d6b8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10d6bc: 0x2028024  and         $s0, $s0, $v0
    ctx->pc = 0x10d6bcu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & GPR_U64(ctx, 2));
    // 0x10d6c0: 0x12000003  beqz        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x10D6C0u;
    {
        const bool branch_taken_0x10d6c0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x10d6c0) {
            ctx->pc = 0x10D6D0u;
            goto label_10d6d0;
        }
    }
    ctx->pc = 0x10D6C8u;
    // 0x10d6c8: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x10D6C8u;
    SET_GPR_U32(ctx, 31, 0x10D6D0u);
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x10D6C8u, 0x10D6D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D6D0u;
label_10d6d0:
    // 0x10d6d0: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x10d6d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x10d6d4: 0x3484ffc0  ori         $a0, $a0, 0xFFC0
    ctx->pc = 0x10d6d4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65472);
    // 0x10d6d8: 0x2242824  and         $a1, $s1, $a0
    ctx->pc = 0x10d6d8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & GPR_U64(ctx, 4));
    // 0x10d6dc: 0xc04357c  jal         func_10D5F0
    ctx->pc = 0x10D6DCu;
    SET_GPR_U32(ctx, 31, 0x10D6E4u);
    ctx->pc = 0x10D6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D6DCu;
    // 0x10d6e0: 0x2442024  and         $a0, $s2, $a0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & GPR_U64(ctx, 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D5F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D5F0u, 0x10D6DCu, 0x10D6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x10D6E4u;
label_10d6e4:
    // 0x10d6e4: 0x12000006  beqz        $s0, . + 4 + (0x6 << 2)
    ctx->pc = 0x10D6E4u;
    {
        const bool branch_taken_0x10d6e4 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D6E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D6E4u;
        // 0x10d6e8: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d6e4) {
            ctx->pc = 0x10D700u;
            goto label_10d700;
        }
    }
    ctx->pc = 0x10D6ECu;
    // 0x10d6ec: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10d6ecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d6f0: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10d6f0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d6f4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10d6f4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d6f8: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x10D6F8u;
    ctx->pc = 0x10D6FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D6F8u;
    // 0x10d6fc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    ctx->pc = 0x10D700u;
label_10d700:
    // 0x10d700: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10d700u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d704: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10d704u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d708: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10d708u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d70c: 0x3e00008  jr          $ra
    ctx->pc = 0x10D70Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D710u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x10D70Cu;
        // 0x10d710: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x10D70Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x10D714u;
    // 0x10d714: 0x0  nop
    ctx->pc = 0x10d714u;
    // NOP
    // 0x10d718: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x10d718u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x10d71c: 0x3442ffc0  ori         $v0, $v0, 0xFFC0
    ctx->pc = 0x10d71cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65472);
    // 0x10d720: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x10d720u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x10d724: 0x804357c  j           func_10D5F0
    ctx->pc = 0x10D724u;
    ctx->pc = 0x10D728u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x10D724u;
    // 0x10d728: 0x822024  and         $a0, $a0, $v0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & GPR_U64(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D5F0u;
    sub_0010D5F0_0x10d5f0(rdram, ctx, runtime); return;
    ctx->pc = 0x10D72Cu;
    // 0x10d72c: 0x0  nop
    ctx->pc = 0x10d72cu;
    // NOP
    if (ctx->pc == 0x10d72cu) { ctx->pc = 0x10d730u; }
}
