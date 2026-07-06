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

// Function: sub_001F4D90
// Address: 0x1f4d90 - 0x1f4eb8
void sub_001F4D90_0x1f4d90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F4D90_0x1f4d90");
#endif

    switch (ctx->pc) {
        case 0x1f4dc8u: goto label_1f4dc8;
        case 0x1f4e00u: goto label_1f4e00;
        case 0x1f4e10u: goto label_1f4e10;
        case 0x1f4e50u: goto label_1f4e50;
        case 0x1f4e94u: goto label_1f4e94;
        default: break;
    }

    ctx->pc = 0x1f4d90u;

    // 0x1f4d90: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1f4d90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1f4d94: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x1f4d94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f4d98: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1f4d98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1f4d9c: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f4d9cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4da0: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1f4da0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1f4da4: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x1f4da4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4da8: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1f4da8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1f4dac: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1f4dacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1f4db0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1f4db0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1f4db4: 0x8e020058  lw          $v0, 0x58($s0)
    ctx->pc = 0x1f4db4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x1f4db8: 0x14430013  bne         $v0, $v1, . + 4 + (0x13 << 2)
    ctx->pc = 0x1F4DB8u;
    {
        const bool branch_taken_0x1f4db8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x1F4DBCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4DB8u;
        // 0x1f4dbc: 0x8e132018  lw          $s3, 0x2018($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8216)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4db8) {
            ctx->pc = 0x1F4E08u;
            goto label_1f4e08;
        }
    }
    ctx->pc = 0x1F4DC0u;
    // 0x1f4dc0: 0xc07d47a  jal         func_1F51E8
    ctx->pc = 0x1F4DC0u;
    SET_GPR_U32(ctx, 31, 0x1F4DC8u);
    ctx->pc = 0x1F4DC4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4DC0u;
    // 0x1f4dc4: 0xc0282d  daddu       $a1, $a2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F51E8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F51E8u, 0x1F4DC0u, 0x1F4DC8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4DC8u;
label_1f4dc8:
    // 0x1f4dc8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f4dc8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4dcc: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f4dccu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f4dd0: 0x16200009  bnez        $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F4DD0u;
    {
        const bool branch_taken_0x1f4dd0 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4DD4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4DD0u;
        // 0x1f4dd4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4dd0) {
            ctx->pc = 0x1F4DF8u;
            goto label_1f4df8;
        }
    }
    ctx->pc = 0x1F4DD8u;
    // 0x1f4dd8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f4dd8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4ddc: 0x34a50f1f  ori         $a1, $a1, 0xF1F
    ctx->pc = 0x1f4ddcu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3871);
    // 0x1f4de0: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f4de0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f4de4: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f4de4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f4de8: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f4de8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4dec: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f4decu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f4df0: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1F4DF0u;
    ctx->pc = 0x1F4DF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4DF0u;
    // 0x1f4df4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1F4DF8u;
label_1f4df8:
    // 0x1f4df8: 0xc07d48a  jal         func_1F5228
    ctx->pc = 0x1F4DF8u;
    SET_GPR_U32(ctx, 31, 0x1F4E00u);
    ctx->pc = 0x1F4DFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4DF8u;
    // 0x1f4dfc: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5228u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5228u, 0x1F4DF8u, 0x1F4E00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4E00u;
label_1f4e00:
    // 0x1f4e00: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x1F4E00u;
    {
        const bool branch_taken_0x1f4e00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4E04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4E00u;
        // 0x1f4e04: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4e00) {
            ctx->pc = 0x1F4E88u;
            goto label_1f4e88;
        }
    }
    ctx->pc = 0x1F4E08u;
label_1f4e08:
    // 0x1f4e08: 0xc07d3ae  jal         func_1F4EB8
    ctx->pc = 0x1F4E08u;
    SET_GPR_U32(ctx, 31, 0x1F4E10u);
    ctx->pc = 0x1F4EB8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4EB8u, 0x1F4E08u, 0x1F4E10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4E10u;
label_1f4e10:
    // 0x1f4e10: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x1f4e10u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f4e14: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x1f4e14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4e18: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f4e18u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f4e1c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x1f4e1cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x1f4e20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4e20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4e24: 0x10430008  beq         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1F4E24u;
    {
        const bool branch_taken_0x1f4e24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        ctx->pc = 0x1F4E28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4E24u;
        // 0x1f4e28: 0x34a50f0e  ori         $a1, $a1, 0xF0E (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3854);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4e24) {
            ctx->pc = 0x1F4E48u;
            goto label_1f4e48;
        }
    }
    ctx->pc = 0x1F4E2Cu;
    // 0x1f4e2c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f4e2cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4e30: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f4e30u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f4e34: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f4e34u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f4e38: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f4e38u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4e3c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f4e3cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f4e40: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1F4E40u;
    ctx->pc = 0x1F4E44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4E40u;
    // 0x1f4e44: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1F4E48u;
label_1f4e48:
    // 0x1f4e48: 0xc07d468  jal         func_1F51A0
    ctx->pc = 0x1F4E48u;
    SET_GPR_U32(ctx, 31, 0x1F4E50u);
    ctx->pc = 0x1F4E4Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4E48u;
    // 0x1f4e4c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F51A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F51A0u, 0x1F4E48u, 0x1F4E50u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4E50u;
label_1f4e50:
    // 0x1f4e50: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1f4e50u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4e54: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x1f4e54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4e58: 0x8e620070  lw          $v0, 0x70($s3)
    ctx->pc = 0x1f4e58u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 112)));
    // 0x1f4e5c: 0x3c05ff00  lui         $a1, 0xFF00
    ctx->pc = 0x1f4e5cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)65280 << 16));
    // 0x1f4e60: 0x10510009  beq         $v0, $s1, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F4E60u;
    {
        const bool branch_taken_0x1f4e60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x1F4E64u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4E60u;
        // 0x1f4e64: 0x34a50f0f  ori         $a1, $a1, 0xF0F (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)3855);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4e60) {
            ctx->pc = 0x1F4E88u;
            goto label_1f4e88;
        }
    }
    ctx->pc = 0x1F4E68u;
    // 0x1f4e68: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f4e68u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4e6c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f4e6cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f4e70: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f4e70u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f4e74: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f4e74u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4e78: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f4e78u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f4e7c: 0x807b5c0  j           func_1ED700
    ctx->pc = 0x1F4E7Cu;
    ctx->pc = 0x1F4E80u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4E7Cu;
    // 0x1f4e80: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1ED700u;
    sub_001ED700_0x1ed700(rdram, ctx, runtime); return;
    ctx->pc = 0x1F4E84u;
    // 0x1f4e84: 0x0  nop
    ctx->pc = 0x1f4e84u;
    // NOP
label_1f4e88:
    // 0x1f4e88: 0xae400000  sw          $zero, 0x0($s2)
    ctx->pc = 0x1f4e88u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 0));
    // 0x1f4e8c: 0xc07d502  jal         func_1F5408
    ctx->pc = 0x1F4E8Cu;
    SET_GPR_U32(ctx, 31, 0x1F4E94u);
    ctx->pc = 0x1F4E90u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F4E8Cu;
    // 0x1f4e90: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F5408u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F5408u, 0x1F4E8Cu, 0x1F4E94u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4E94u;
label_1f4e94:
    // 0x1f4e94: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1f4e94u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4e98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1f4e98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f4e9c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1f4e9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1f4ea0: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1f4ea0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f4ea4: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1f4ea4u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f4ea8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1f4ea8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1f4eac: 0x3e00008  jr          $ra
    ctx->pc = 0x1F4EACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4EB0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4EACu;
        // 0x1f4eb0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F4EACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4EB4u;
    // 0x1f4eb4: 0x0  nop
    ctx->pc = 0x1f4eb4u;
    // NOP
}
