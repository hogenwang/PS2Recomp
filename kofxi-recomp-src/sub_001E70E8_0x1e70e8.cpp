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

// Function: sub_001E70E8
// Address: 0x1e70e8 - 0x1e71a0
void sub_001E70E8_0x1e70e8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001E70E8_0x1e70e8");
#endif

    switch (ctx->pc) {
        case 0x1e7114u: goto label_1e7114;
        case 0x1e7124u: goto label_1e7124;
        case 0x1e7138u: goto label_1e7138;
        case 0x1e7150u: goto label_1e7150;
        case 0x1e7160u: goto label_1e7160;
        case 0x1e7174u: goto label_1e7174;
        default: break;
    }

    ctx->pc = 0x1e70e8u;

    // 0x1e70e8: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1e70e8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1e70ec: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1e70ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1e70f0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1e70f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1e70f4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1e70f4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1e70f8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1e70f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1e70fc: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1e70fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1e7100: 0x82020071  lb          $v0, 0x71($s0)
    ctx->pc = 0x1e7100u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 113)));
    // 0x1e7104: 0x1443000d  bne         $v0, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x1E7104u;
    {
        const bool branch_taken_0x1e7104 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1E7108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7104u;
        // 0x1e7108: 0x8e11003c  lw          $s1, 0x3C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 60)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1e7104) {
            ctx->pc = 0x1E713Cu;
            goto label_1e713c;
        }
    }
    ctx->pc = 0x1E710Cu;
    // 0x1e710c: 0xc071938  jal         func_1C64E0
    ctx->pc = 0x1E710Cu;
    SET_GPR_U32(ctx, 31, 0x1E7114u);
    ctx->pc = 0x1E7110u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E710Cu;
    // 0x1e7110: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C64E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C64E0u, 0x1E710Cu, 0x1E7114u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7114u;
label_1e7114:
    // 0x1e7114: 0x5440000a  bnel        $v0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x1E7114u;
    {
        const bool branch_taken_0x1e7114 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7114) {
            ctx->pc = 0x1E7118u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E7114u;
            // 0x1e7118: 0x96020070  lhu         $v0, 0x70($s0) (Delay Slot)
            SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 112)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E7140u;
            goto label_1e7140;
        }
    }
    ctx->pc = 0x1E711Cu;
    // 0x1e711c: 0xc07e55a  jal         func_1F9568
    ctx->pc = 0x1E711Cu;
    SET_GPR_U32(ctx, 31, 0x1E7124u);
    ctx->pc = 0x1E7120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E711Cu;
    // 0x1e7120: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F9568u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F9568u, 0x1E711Cu, 0x1E7124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7124u;
label_1e7124:
    // 0x1e7124: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1E7124u;
    {
        const bool branch_taken_0x1e7124 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1e7124) {
            ctx->pc = 0x1E7128u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E7124u;
            // 0x1e7128: 0xa2000071  sb          $zero, 0x71($s0) (Delay Slot)
            WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E713Cu;
            goto label_1e713c;
        }
    }
    ctx->pc = 0x1E712Cu;
    // 0x1e712c: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x1e712cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x1e7130: 0xc079afa  jal         func_1E6BE8
    ctx->pc = 0x1E7130u;
    SET_GPR_U32(ctx, 31, 0x1E7138u);
    ctx->pc = 0x1E7134u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7130u;
    // 0x1e7134: 0x2484e550  addiu       $a0, $a0, -0x1AB0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294960464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E6BE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E6BE8u, 0x1E7130u, 0x1E7138u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7138u;
label_1e7138:
    // 0x1e7138: 0xa2000071  sb          $zero, 0x71($s0)
    ctx->pc = 0x1e7138u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 113), (uint8_t)GPR_U32(ctx, 0));
label_1e713c:
    // 0x1e713c: 0x96020070  lhu         $v0, 0x70($s0)
    ctx->pc = 0x1e713cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 16), 112)));
label_1e7140:
    // 0x1e7140: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x1E7140u;
    {
        const bool branch_taken_0x1e7140 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7140) {
            ctx->pc = 0x1E7144u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E7140u;
            // 0x1e7144: 0x8e020508  lw          $v0, 0x508($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E7164u;
            goto label_1e7164;
        }
    }
    ctx->pc = 0x1E7148u;
    // 0x1e7148: 0xc071938  jal         func_1C64E0
    ctx->pc = 0x1E7148u;
    SET_GPR_U32(ctx, 31, 0x1E7150u);
    ctx->pc = 0x1E714Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7148u;
    // 0x1e714c: 0x8e040048  lw          $a0, 0x48($s0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 72)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1C64E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1C64E0u, 0x1E7148u, 0x1E7150u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7150u;
label_1e7150:
    // 0x1e7150: 0x54400004  bnel        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E7150u;
    {
        const bool branch_taken_0x1e7150 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7150) {
            ctx->pc = 0x1E7154u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E7150u;
            // 0x1e7154: 0x8e020508  lw          $v0, 0x508($s0) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1288)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E7164u;
            goto label_1e7164;
        }
    }
    ctx->pc = 0x1E7158u;
    // 0x1e7158: 0xc07869c  jal         func_1E1A70
    ctx->pc = 0x1E7158u;
    SET_GPR_U32(ctx, 31, 0x1E7160u);
    ctx->pc = 0x1E715Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E7158u;
    // 0x1e715c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1E1A70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1E1A70u, 0x1E7158u, 0x1E7160u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7160u;
label_1e7160:
    // 0x1e7160: 0x8e020508  lw          $v0, 0x508($s0)
    ctx->pc = 0x1e7160u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1288)));
label_1e7164:
    // 0x1e7164: 0x54400009  bnel        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1E7164u;
    {
        const bool branch_taken_0x1e7164 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1e7164) {
            ctx->pc = 0x1E7168u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E7164u;
            // 0x1e7168: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E718Cu;
            goto label_1e718c;
        }
    }
    ctx->pc = 0x1E716Cu;
    // 0x1e716c: 0xc07eb30  jal         func_1FACC0
    ctx->pc = 0x1E716Cu;
    SET_GPR_U32(ctx, 31, 0x1E7174u);
    ctx->pc = 0x1E7170u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1E716Cu;
    // 0x1e7170: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1FACC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1FACC0u, 0x1E716Cu, 0x1E7174u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1E7174u;
label_1e7174:
    // 0x1e7174: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1e7174u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1e7178: 0x54430004  bnel        $v0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1E7178u;
    {
        const bool branch_taken_0x1e7178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1e7178) {
            ctx->pc = 0x1E717Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1E7178u;
            // 0x1e717c: 0xdfb00000  ld          $s0, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1E718Cu;
            goto label_1e718c;
        }
    }
    ctx->pc = 0x1E7180u;
    // 0x1e7180: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1e7180u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1e7184: 0xae020004  sw          $v0, 0x4($s0)
    ctx->pc = 0x1e7184u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 2));
    // 0x1e7188: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1e7188u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1e718c:
    // 0x1e718c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1e718cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1e7190: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1e7190u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1e7194: 0x3e00008  jr          $ra
    ctx->pc = 0x1E7194u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1E7198u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1E7194u;
        // 0x1e7198: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1E7194u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1E719Cu;
    // 0x1e719c: 0x0  nop
    ctx->pc = 0x1e719cu;
    // NOP
}
