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

// Function: sub_001F9FB8
// Address: 0x1f9fb8 - 0x1fa070
void sub_001F9FB8_0x1f9fb8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F9FB8_0x1f9fb8");
#endif

    switch (ctx->pc) {
        case 0x1f9ff4u: goto label_1f9ff4;
        case 0x1fa034u: goto label_1fa034;
        default: break;
    }

    ctx->pc = 0x1f9fb8u;

    // 0x1f9fb8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f9fb8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f9fbc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f9fbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f9fc0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f9fc0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f9fc4: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f9fc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f9fc8: 0x261108a0  addiu       $s1, $s0, 0x8A0
    ctx->pc = 0x1f9fc8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 16), 2208));
    // 0x1f9fcc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f9fccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f9fd0: 0x26120d0c  addiu       $s2, $s0, 0xD0C
    ctx->pc = 0x1f9fd0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 16), 3340));
    // 0x1f9fd4: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f9fd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f9fd8: 0x26130ad0  addiu       $s3, $s0, 0xAD0
    ctx->pc = 0x1f9fd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 16), 2768));
    // 0x1f9fdc: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f9fdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f9fe0: 0x2604000c  addiu       $a0, $s0, 0xC
    ctx->pc = 0x1f9fe0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    // 0x1f9fe4: 0xae000000  sw          $zero, 0x0($s0)
    ctx->pc = 0x1f9fe4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 0));
    // 0x1f9fe8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x1f9fe8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
    // 0x1f9fec: 0xc07b288  jal         func_1ECA20
    ctx->pc = 0x1F9FECu;
    SET_GPR_U32(ctx, 31, 0x1F9FF4u);
    ctx->pc = 0x1F9FF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F9FECu;
    // 0x1f9ff0: 0xae000008  sw          $zero, 0x8($s0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ECA20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ECA20u, 0x1F9FECu, 0x1F9FF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F9FF4u;
label_1f9ff4:
    // 0x1f9ff4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1f9ff4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x1f9ff8: 0xae20002c  sw          $zero, 0x2C($s1)
    ctx->pc = 0x1f9ff8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 0));
    // 0x1f9ffc: 0x3c057fff  lui         $a1, 0x7FFF
    ctx->pc = 0x1f9ffcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)32767 << 16));
    // 0x1fa000: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1fa000u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x1fa004: 0x26040adc  addiu       $a0, $s0, 0xADC
    ctx->pc = 0x1fa004u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 2780));
    // 0x1fa008: 0xae200008  sw          $zero, 0x8($s1)
    ctx->pc = 0x1fa008u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 0));
    // 0x1fa00c: 0x34a5ffff  ori         $a1, $a1, 0xFFFF
    ctx->pc = 0x1fa00cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)65535);
    // 0x1fa010: 0xae20000c  sw          $zero, 0xC($s1)
    ctx->pc = 0x1fa010u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
    // 0x1fa014: 0xae200010  sw          $zero, 0x10($s1)
    ctx->pc = 0x1fa014u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 0));
    // 0x1fa018: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x1fa018u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x1fa01c: 0xfe200018  sd          $zero, 0x18($s1)
    ctx->pc = 0x1fa01cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 24), GPR_U64(ctx, 0));
    // 0x1fa020: 0xae600008  sw          $zero, 0x8($s3)
    ctx->pc = 0x1fa020u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 0));
    // 0x1fa024: 0xfe200020  sd          $zero, 0x20($s1)
    ctx->pc = 0x1fa024u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 32), GPR_U64(ctx, 0));
    // 0x1fa028: 0xae600000  sw          $zero, 0x0($s3)
    ctx->pc = 0x1fa028u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 0), GPR_U32(ctx, 0));
    // 0x1fa02c: 0xc07edc4  jal         func_1FB710
    ctx->pc = 0x1FA02Cu;
    SET_GPR_U32(ctx, 31, 0x1FA034u);
    ctx->pc = 0x1FA030u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1FA02Cu;
    // 0x1fa030: 0xae600004  sw          $zero, 0x4($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 4), GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FB710u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FB710u, 0x1FA02Cu, 0x1FA034u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1FA034u;
label_1fa034:
    // 0x1fa034: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1fa034u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1fa038: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1fa038u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1fa03c: 0xae400004  sw          $zero, 0x4($s2)
    ctx->pc = 0x1fa03cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 0));
    // 0x1fa040: 0xae420008  sw          $v0, 0x8($s2)
    ctx->pc = 0x1fa040u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 2));
    // 0x1fa044: 0xae40000c  sw          $zero, 0xC($s2)
    ctx->pc = 0x1fa044u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 0));
    // 0x1fa048: 0xae400010  sw          $zero, 0x10($s2)
    ctx->pc = 0x1fa048u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 0));
    // 0x1fa04c: 0xae400014  sw          $zero, 0x14($s2)
    ctx->pc = 0x1fa04cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 0));
    // 0x1fa050: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1fa050u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1fa054: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1fa054u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1fa058: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1fa058u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1fa05c: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1fa05cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1fa060: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1fa060u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1fa064: 0x3e00008  jr          $ra
    ctx->pc = 0x1FA064u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1FA068u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1FA064u;
        // 0x1fa068: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1FA064u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1FA06Cu;
    // 0x1fa06c: 0x0  nop
    ctx->pc = 0x1fa06cu;
    // NOP
    if (ctx->pc == 0x1fa06cu) { ctx->pc = 0x1fa070u; }
}
