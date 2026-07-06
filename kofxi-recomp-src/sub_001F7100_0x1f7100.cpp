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

// Function: sub_001F7100
// Address: 0x1f7100 - 0x1f7190
void sub_001F7100_0x1f7100(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F7100_0x1f7100");
#endif

    switch (ctx->pc) {
        case 0x1f711cu: goto label_1f711c;
        case 0x1f7170u: goto label_1f7170;
        default: break;
    }

    ctx->pc = 0x1f7100u;

    // 0x1f7100: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f7100u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f7104: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f7104u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f7108: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f7108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f710c: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f710cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f7110: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x1f7110u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x1f7114: 0xc07b648  jal         func_1ED920
    ctx->pc = 0x1F7114u;
    SET_GPR_U32(ctx, 31, 0x1F711Cu);
    ctx->pc = 0x1F7118u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7114u;
    // 0x1f7118: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED920u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1ED920u, 0x1F7114u, 0x1F711Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F711Cu;
label_1f711c:
    // 0x1f711c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f711cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f7120: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f7120u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7124: 0x34a50142  ori         $a1, $a1, 0x142
    ctx->pc = 0x1f7124u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)322);
    // 0x1f7128: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F7128u;
    {
        const bool branch_taken_0x1f7128 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F712Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7128u;
        // 0x1f712c: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7128) {
            ctx->pc = 0x1F7148u;
            goto label_1f7148;
        }
    }
    ctx->pc = 0x1F7130u;
    // 0x1f7130: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f7130u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f7134: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f7134u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f7138: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f7138u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f713c: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1F713Cu;
    ctx->pc = 0x1F7140u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F713Cu;
    // 0x1f7140: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1F7144u;
    // 0x1f7144: 0x0  nop
    ctx->pc = 0x1f7144u;
    // NOP
label_1f7148:
    // 0x1f7148: 0x8e040050  lw          $a0, 0x50($s0)
    ctx->pc = 0x1f7148u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x1f714c: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f714cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f7150: 0x16200003  bnez        $s1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1F7150u;
    {
        const bool branch_taken_0x1f7150 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F7154u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7150u;
        // 0x1f7154: 0x64300b  movn        $a2, $v1, $a0 (Delay Slot)
        if (GPR_U64(ctx, 4) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7150) {
            ctx->pc = 0x1F7160u;
            goto label_1f7160;
        }
    }
    ctx->pc = 0x1F7158u;
    // 0x1f7158: 0x10800007  beqz        $a0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F7158u;
    {
        const bool branch_taken_0x1f7158 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F715Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7158u;
        // 0x1f715c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f7158) {
            ctx->pc = 0x1F7178u;
            goto label_1f7178;
        }
    }
    ctx->pc = 0x1F7160u;
label_1f7160:
    // 0x1f7160: 0xae110050  sw          $s1, 0x50($s0)
    ctx->pc = 0x1f7160u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 80), GPR_U32(ctx, 17));
    // 0x1f7164: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x1f7164u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f7168: 0xc07dc64  jal         func_1F7190
    ctx->pc = 0x1F7168u;
    SET_GPR_U32(ctx, 31, 0x1F7170u);
    ctx->pc = 0x1F716Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F7168u;
    // 0x1f716c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F7190u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F7190u, 0x1F7168u, 0x1F7170u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F7170u;
label_1f7170:
    // 0x1f7170: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f7170u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f7174: 0xae030044  sw          $v1, 0x44($s0)
    ctx->pc = 0x1f7174u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 68), GPR_U32(ctx, 3));
label_1f7178:
    // 0x1f7178: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f7178u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f717c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f717cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f7180: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x1f7180u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f7184: 0x3e00008  jr          $ra
    ctx->pc = 0x1F7184u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F7188u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F7184u;
        // 0x1f7188: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F7184u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F718Cu;
    // 0x1f718c: 0x0  nop
    ctx->pc = 0x1f718cu;
    // NOP
    if (ctx->pc == 0x1f718cu) { ctx->pc = 0x1f7190u; }
}
