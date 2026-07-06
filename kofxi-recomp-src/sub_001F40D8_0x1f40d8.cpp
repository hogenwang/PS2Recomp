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

// Function: sub_001F40D8
// Address: 0x1f40d8 - 0x1f4238
void sub_001F40D8_0x1f40d8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F40D8_0x1f40d8");
#endif

    switch (ctx->pc) {
        case 0x1f40fcu: goto label_1f40fc;
        case 0x1f4124u: goto label_1f4124;
        case 0x1f41acu: goto label_1f41ac;
        case 0x1f41b8u: goto label_1f41b8;
        default: break;
    }

    ctx->pc = 0x1f40d8u;

    // 0x1f40d8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x1f40d8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x1f40dc: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x1f40dcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
    // 0x1f40e0: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x1f40e0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f40e4: 0xffb10038  sd          $s1, 0x38($sp)
    ctx->pc = 0x1f40e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 17));
    // 0x1f40e8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1f40e8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f40ec: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x1f40ecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x1f40f0: 0x3a0302d  daddu       $a2, $sp, $zero
    ctx->pc = 0x1f40f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f40f4: 0xc07aa2a  jal         func_1EA8A8
    ctx->pc = 0x1F40F4u;
    SET_GPR_U32(ctx, 31, 0x1F40FCu);
    ctx->pc = 0x1F40F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F40F4u;
    // 0x1f40f8: 0x8e252020  lw          $a1, 0x2020($s1) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8224)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1EA8A8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1EA8A8u, 0x1F40F4u, 0x1F40FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F40FCu;
label_1f40fc:
    // 0x1f40fc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F40FCu;
    {
        const bool branch_taken_0x1f40fc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4100u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F40FCu;
        // 0x1f4100: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f40fc) {
            ctx->pc = 0x1F4110u;
            goto label_1f4110;
        }
    }
    ctx->pc = 0x1F4104u;
    // 0x1f4104: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x1F4104u;
    {
        const bool branch_taken_0x1f4104 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4108u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4104u;
        // 0x1f4108: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4104) {
            ctx->pc = 0x1F4220u;
            goto label_1f4220;
        }
    }
    ctx->pc = 0x1F410Cu;
    // 0x1f410c: 0x0  nop
    ctx->pc = 0x1f410cu;
    // NOP
label_1f4110:
    // 0x1f4110: 0x10600043  beqz        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x1F4110u;
    {
        const bool branch_taken_0x1f4110 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4114u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4110u;
        // 0x1f4114: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4110) {
            ctx->pc = 0x1F4220u;
            goto label_1f4220;
        }
    }
    ctx->pc = 0x1F4118u;
    // 0x1f4118: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x1f4118u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f411c: 0xc07c392  jal         func_1F0E48
    ctx->pc = 0x1F411Cu;
    SET_GPR_U32(ctx, 31, 0x1F4124u);
    ctx->pc = 0x1F4120u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F411Cu;
    // 0x1f4120: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F0E48u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F0E48u, 0x1F411Cu, 0x1F4124u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F4124u;
label_1f4124:
    // 0x1f4124: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1f4124u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4128: 0x14800009  bnez        $a0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F4128u;
    {
        const bool branch_taken_0x1f4128 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F412Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4128u;
        // 0x1f412c: 0x8fa30000  lw          $v1, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4128) {
            ctx->pc = 0x1F4150u;
            goto label_1f4150;
        }
    }
    ctx->pc = 0x1F4130u;
    // 0x1f4130: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1f4130u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1f4134: 0x8fa3000c  lw          $v1, 0xC($sp)
    ctx->pc = 0x1f4134u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1f4138: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f4138u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1f413c: 0x2450fffd  addiu       $s0, $v0, -0x3
    ctx->pc = 0x1f413cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967293));
    // 0x1f4140: 0x6010018  bgez        $s0, . + 4 + (0x18 << 2)
    ctx->pc = 0x1F4140u;
    {
        const bool branch_taken_0x1f4140 = (GPR_S32(ctx, 16) >= 0);
        ctx->pc = 0x1F4144u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4140u;
        // 0x1f4144: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4140) {
            ctx->pc = 0x1F41A4u;
            goto label_1f41a4;
        }
    }
    ctx->pc = 0x1F4148u;
    // 0x1f4148: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x1F4148u;
    {
        const bool branch_taken_0x1f4148 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F414Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4148u;
        // 0x1f414c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4148) {
            ctx->pc = 0x1F41A4u;
            goto label_1f41a4;
        }
    }
    ctx->pc = 0x1F4150u;
label_1f4150:
    // 0x1f4150: 0x83102b  sltu        $v0, $a0, $v1
    ctx->pc = 0x1f4150u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 3)) ? 1 : 0);
    // 0x1f4154: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1F4154u;
    {
        const bool branch_taken_0x1f4154 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F4158u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4154u;
        // 0x1f4158: 0x8fa60008  lw          $a2, 0x8($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4154) {
            ctx->pc = 0x1F4174u;
            goto label_1f4174;
        }
    }
    ctx->pc = 0x1F415Cu;
    // 0x1f415c: 0x8fa20004  lw          $v0, 0x4($sp)
    ctx->pc = 0x1f415cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1f4160: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x1f4160u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x1f4164: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1f4164u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1f4168: 0x1440000d  bnez        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F4168u;
    {
        const bool branch_taken_0x1f4168 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F416Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4168u;
        // 0x1f416c: 0x838023  subu        $s0, $a0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4168) {
            ctx->pc = 0x1F41A0u;
            goto label_1f41a0;
        }
    }
    ctx->pc = 0x1F4170u;
    // 0x1f4170: 0x8fa60008  lw          $a2, 0x8($sp)
    ctx->pc = 0x1f4170u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
label_1f4174:
    // 0x1f4174: 0x86102b  sltu        $v0, $a0, $a2
    ctx->pc = 0x1f4174u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x1f4178: 0x14400009  bnez        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x1F4178u;
    {
        const bool branch_taken_0x1f4178 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F417Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F4178u;
        // 0x1f417c: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f4178) {
            ctx->pc = 0x1F41A0u;
            goto label_1f41a0;
        }
    }
    ctx->pc = 0x1F4180u;
    // 0x1f4180: 0x8fa2000c  lw          $v0, 0xC($sp)
    ctx->pc = 0x1f4180u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 12)));
    // 0x1f4184: 0xc21021  addu        $v0, $a2, $v0
    ctx->pc = 0x1f4184u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1f4188: 0x82102b  sltu        $v0, $a0, $v0
    ctx->pc = 0x1f4188u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 4) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x1f418c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x1F418Cu;
    {
        const bool branch_taken_0x1f418c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f418c) {
            ctx->pc = 0x1F4190u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F418Cu;
            // 0x1f4190: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F41A4u;
            goto label_1f41a4;
        }
    }
    ctx->pc = 0x1F4194u;
    // 0x1f4194: 0x8fa30004  lw          $v1, 0x4($sp)
    ctx->pc = 0x1f4194u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
    // 0x1f4198: 0x861023  subu        $v0, $a0, $a2
    ctx->pc = 0x1f4198u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x1f419c: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x1f419cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f41a0:
    // 0x1f41a0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x1f41a0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1f41a4:
    // 0x1f41a4: 0xc07d08e  jal         func_1F4238
    ctx->pc = 0x1F41A4u;
    SET_GPR_U32(ctx, 31, 0x1F41ACu);
    ctx->pc = 0x1F41A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1F41A4u;
    // 0x1f41a8: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1F4238u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1F4238u, 0x1F41A4u, 0x1F41ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1F41ACu;
label_1f41ac:
    // 0x1f41ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1f41acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f41b0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x1f41b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f41b4: 0x2a050004  slti        $a1, $s0, 0x4
    ctx->pc = 0x1f41b4u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)4) ? 1 : 0);
label_1f41b8:
    // 0x1f41b8: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x1f41b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x1f41bc: 0x205100b  movn        $v0, $s0, $a1
    ctx->pc = 0x1f41bcu;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 16));
    // 0x1f41c0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1f41c0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f41c4: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1F41C4u;
    {
        const bool branch_taken_0x1f41c4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F41C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F41C4u;
        // 0x1f41c8: 0x8fa20004  lw          $v0, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f41c4) {
            ctx->pc = 0x1F41FCu;
            goto label_1f41fc;
        }
    }
    ctx->pc = 0x1F41CCu;
    // 0x1f41cc: 0x821823  subu        $v1, $a0, $v0
    ctx->pc = 0x1f41ccu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x1f41d0: 0x82102a  slt         $v0, $a0, $v0
    ctx->pc = 0x1f41d0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 4) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1f41d4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F41D4u;
    {
        const bool branch_taken_0x1f41d4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1f41d4) {
            ctx->pc = 0x1F41D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1F41D4u;
            // 0x1f41d8: 0x8fa20008  lw          $v0, 0x8($sp) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1F41E8u;
            goto label_1f41e8;
        }
    }
    ctx->pc = 0x1F41DCu;
    // 0x1f41dc: 0x8fa20000  lw          $v0, 0x0($sp)
    ctx->pc = 0x1f41dcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1f41e0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1F41E0u;
    {
        const bool branch_taken_0x1f41e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F41E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F41E0u;
        // 0x1f41e4: 0x441021  addu        $v0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f41e0) {
            ctx->pc = 0x1F41ECu;
            goto label_1f41ec;
        }
    }
    ctx->pc = 0x1F41E8u;
label_1f41e8:
    // 0x1f41e8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1f41e8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_1f41ec:
    // 0x1f41ec: 0x80420000  lb          $v0, 0x0($v0)
    ctx->pc = 0x1f41ecu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x1f41f0: 0x1040fff1  beqz        $v0, . + 4 + (-0xF << 2)
    ctx->pc = 0x1F41F0u;
    {
        const bool branch_taken_0x1f41f0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F41F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F41F0u;
        // 0x1f41f4: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f41f0) {
            ctx->pc = 0x1F41B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f41b8;
        }
    }
    ctx->pc = 0x1F41F8u;
    // 0x1f41f8: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x1f41f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1f41fc:
    // 0x1f41fc: 0x10c00004  beqz        $a2, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F41FCu;
    {
        const bool branch_taken_0x1f41fc = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x1F4200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F41FCu;
        // 0x1f4200: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f41fc) {
            ctx->pc = 0x1F4210u;
            goto label_1f4210;
        }
    }
    ctx->pc = 0x1F4204u;
    // 0x1f4204: 0xde2209b0  ld          $v0, 0x9B0($s1)
    ctx->pc = 0x1f4204u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 2480)));
    // 0x1f4208: 0x44102d  daddu       $v0, $v0, $a0
    ctx->pc = 0x1f4208u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 4));
    // 0x1f420c: 0xfe2209b0  sd          $v0, 0x9B0($s1)
    ctx->pc = 0x1f420cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 2480), GPR_U64(ctx, 2));
label_1f4210:
    // 0x1f4210: 0xde2309a8  ld          $v1, 0x9A8($s1)
    ctx->pc = 0x1f4210u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 2472)));
    // 0x1f4214: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f4214u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f4218: 0x64182d  daddu       $v1, $v1, $a0
    ctx->pc = 0x1f4218u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 4));
    // 0x1f421c: 0xfe2309a8  sd          $v1, 0x9A8($s1)
    ctx->pc = 0x1f421cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 2472), GPR_U64(ctx, 3));
label_1f4220:
    // 0x1f4220: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x1f4220u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1f4224: 0xdfb10038  ld          $s1, 0x38($sp)
    ctx->pc = 0x1f4224u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x1f4228: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1f4228u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1f422c: 0x3e00008  jr          $ra
    ctx->pc = 0x1F422Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F4230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1F422Cu;
        // 0x1f4230: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1F422Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1F4234u;
    // 0x1f4234: 0x0  nop
    ctx->pc = 0x1f4234u;
    // NOP
}
