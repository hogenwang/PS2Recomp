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

// Function: sub_0031F9F0
// Address: 0x31f9f0 - 0x31fb40
void sub_0031F9F0_0x31f9f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0031F9F0_0x31f9f0");
#endif

    switch (ctx->pc) {
        case 0x31fa10u: goto label_31fa10;
        case 0x31fa1cu: goto label_31fa1c;
        default: break;
    }

    ctx->pc = 0x31f9f0u;

    // 0x31f9f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x31f9f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x31f9f4: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x31f9f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x31f9f8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x31f9f8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x31f9fc: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x31f9fcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x31fa00: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x31fa00u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fa04: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x31fa04u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x31fa08: 0x241002a0  addiu       $s0, $zero, 0x2A0
    ctx->pc = 0x31fa08u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    // 0x31fa0c: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x31fa0cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_31fa10:
    // 0x31fa10: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x31fa10u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x31fa14: 0xc062828  jal         func_18A0A0
    ctx->pc = 0x31FA14u;
    SET_GPR_U32(ctx, 31, 0x31FA1Cu);
    ctx->pc = 0x31FA18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x31FA14u;
    // 0x31fa18: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A0A0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A0A0u, 0x31FA14u, 0x31FA1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x31FA1Cu;
label_31fa1c:
    // 0x31fa1c: 0x10400010  beqz        $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x31FA1Cu;
    {
        const bool branch_taken_0x31fa1c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fa1c) {
            ctx->pc = 0x31FA60u;
            goto label_31fa60;
        }
    }
    ctx->pc = 0x31FA24u;
    // 0x31fa24: 0x9043008c  lbu         $v1, 0x8C($v0)
    ctx->pc = 0x31fa24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 140)));
    // 0x31fa28: 0x30630004  andi        $v1, $v1, 0x4
    ctx->pc = 0x31fa28u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)4);
    // 0x31fa2c: 0x1460000c  bnez        $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x31FA2Cu;
    {
        const bool branch_taken_0x31fa2c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31fa2c) {
            ctx->pc = 0x31FA60u;
            goto label_31fa60;
        }
    }
    ctx->pc = 0x31FA34u;
    // 0x31fa34: 0x8c430494  lw          $v1, 0x494($v0)
    ctx->pc = 0x31fa34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1172)));
    // 0x31fa38: 0x30630001  andi        $v1, $v1, 0x1
    ctx->pc = 0x31fa38u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x31fa3c: 0x14600008  bnez        $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x31FA3Cu;
    {
        const bool branch_taken_0x31fa3c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x31fa3c) {
            ctx->pc = 0x31FA60u;
            goto label_31fa60;
        }
    }
    ctx->pc = 0x31FA44u;
    // 0x31fa44: 0x84430002  lh          $v1, 0x2($v0)
    ctx->pc = 0x31fa44u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 2)));
    // 0x31fa48: 0x10143c  dsll32      $v0, $s0, 16
    ctx->pc = 0x31fa48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) << (32 + 16));
    // 0x31fa4c: 0x2143f  dsra32      $v0, $v0, 16
    ctx->pc = 0x31fa4cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 16));
    // 0x31fa50: 0x62082a  slt         $at, $v1, $v0
    ctx->pc = 0x31fa50u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x31fa54: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x31FA54u;
    {
        const bool branch_taken_0x31fa54 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fa54) {
            ctx->pc = 0x31FA60u;
            goto label_31fa60;
        }
    }
    ctx->pc = 0x31FA5Cu;
    // 0x31fa5c: 0x60802d  daddu       $s0, $v1, $zero
    ctx->pc = 0x31fa5cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
label_31fa60:
    // 0x31fa60: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x31fa60u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x31fa64: 0x2a220003  slti        $v0, $s1, 0x3
    ctx->pc = 0x31fa64u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x31fa68: 0x1440ffe9  bnez        $v0, . + 4 + (-0x17 << 2)
    ctx->pc = 0x31FA68u;
    {
        const bool branch_taken_0x31fa68 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31fa68) {
            ctx->pc = 0x31FA10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31fa10;
        }
    }
    ctx->pc = 0x31FA70u;
    // 0x31fa70: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x31fa70u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x31fa74: 0x2a420004  slti        $v0, $s2, 0x4
    ctx->pc = 0x31fa74u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x31fa78: 0x5440ffe5  bnel        $v0, $zero, . + 4 + (-0x1B << 2)
    ctx->pc = 0x31FA78u;
    {
        const bool branch_taken_0x31fa78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x31fa78) {
            ctx->pc = 0x31FA7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FA78u;
            // 0x31fa7c: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FA10u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_31fa10;
        }
    }
    ctx->pc = 0x31FA80u;
    // 0x31fa80: 0x10243c  dsll32      $a0, $s0, 16
    ctx->pc = 0x31fa80u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 16));
    // 0x31fa84: 0x4243f  dsra32      $a0, $a0, 16
    ctx->pc = 0x31fa84u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 16));
    // 0x31fa88: 0x288102a0  slti        $at, $a0, 0x2A0
    ctx->pc = 0x31fa88u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)672) ? 1 : 0);
    // 0x31fa8c: 0x10200017  beqz        $at, . + 4 + (0x17 << 2)
    ctx->pc = 0x31FA8Cu;
    {
        const bool branch_taken_0x31fa8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fa8c) {
            ctx->pc = 0x31FAECu;
            goto label_31faec;
        }
    }
    ctx->pc = 0x31FA94u;
    // 0x31fa94: 0x240302a0  addiu       $v1, $zero, 0x2A0
    ctx->pc = 0x31fa94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    // 0x31fa98: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x31fa98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x31fa9c: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x31fa9cu;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x31faa0: 0x9444f102  lhu         $a0, -0xEFE($v0)
    ctx->pc = 0x31faa0u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963458)));
    // 0x31faa4: 0x31083  sra         $v0, $v1, 2
    ctx->pc = 0x31faa4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 3), 2));
    // 0x31faa8: 0x4610003  bgez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x31FAA8u;
    {
        const bool branch_taken_0x31faa8 = (GPR_S32(ctx, 3) >= 0);
        ctx->pc = 0x31FAACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FAA8u;
        // 0x31faac: 0x2484fe20  addiu       $a0, $a0, -0x1E0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966816));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31faa8) {
            ctx->pc = 0x31FAB8u;
            goto label_31fab8;
        }
    }
    ctx->pc = 0x31FAB0u;
    // 0x31fab0: 0x24620003  addiu       $v0, $v1, 0x3
    ctx->pc = 0x31fab0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 3));
    // 0x31fab4: 0x21083  sra         $v0, $v0, 2
    ctx->pc = 0x31fab4u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 2));
label_31fab8:
    // 0x31fab8: 0x821823  subu        $v1, $a0, $v0
    ctx->pc = 0x31fab8u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x31fabc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x31fabcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x31fac0: 0x8442db22  lh          $v0, -0x24DE($v0)
    ctx->pc = 0x31fac0u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957858)));
    // 0x31fac4: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x31fac4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31fac8: 0x28410011  slti        $at, $v0, 0x11
    ctx->pc = 0x31fac8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x31facc: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x31FACCu;
    {
        const bool branch_taken_0x31facc = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x31facc) {
            ctx->pc = 0x31FAD0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FACCu;
            // 0x31fad0: 0x2841fff0  slti        $at, $v0, -0x10 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967280) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FADCu;
            goto label_31fadc;
        }
    }
    ctx->pc = 0x31FAD4u;
    // 0x31fad4: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x31FAD4u;
    {
        const bool branch_taken_0x31fad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FAD8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FAD4u;
        // 0x31fad8: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fad4) {
            ctx->pc = 0x31FB1Cu;
            goto label_31fb1c;
        }
    }
    ctx->pc = 0x31FADCu;
label_31fadc:
    // 0x31fadc: 0x50200010  beql        $at, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x31FADCu;
    {
        const bool branch_taken_0x31fadc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fadc) {
            ctx->pc = 0x31FAE0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FADCu;
            // 0x31fae0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FB20u;
            goto label_31fb20;
        }
    }
    ctx->pc = 0x31FAE4u;
    // 0x31fae4: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x31FAE4u;
    {
        const bool branch_taken_0x31fae4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FAE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FAE4u;
        // 0x31fae8: 0x2402fff0  addiu       $v0, $zero, -0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fae4) {
            ctx->pc = 0x31FB1Cu;
            goto label_31fb1c;
        }
    }
    ctx->pc = 0x31FAECu;
label_31faec:
    // 0x31faec: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x31faecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x31faf0: 0x240302a0  addiu       $v1, $zero, 0x2A0
    ctx->pc = 0x31faf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 672));
    // 0x31faf4: 0x8442db22  lh          $v0, -0x24DE($v0)
    ctx->pc = 0x31faf4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294957858)));
    // 0x31faf8: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x31faf8u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x31fafc: 0x28410011  slti        $at, $v0, 0x11
    ctx->pc = 0x31fafcu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)17) ? 1 : 0);
    // 0x31fb00: 0x54200003  bnel        $at, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x31FB00u;
    {
        const bool branch_taken_0x31fb00 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x31fb00) {
            ctx->pc = 0x31FB04u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x31FB00u;
            // 0x31fb04: 0x2841fff0  slti        $at, $v0, -0x10 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967280) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x31FB10u;
            goto label_31fb10;
        }
    }
    ctx->pc = 0x31FB08u;
    // 0x31fb08: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x31FB08u;
    {
        const bool branch_taken_0x31fb08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x31FB0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FB08u;
        // 0x31fb0c: 0x24020010  addiu       $v0, $zero, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x31fb08) {
            ctx->pc = 0x31FB1Cu;
            goto label_31fb1c;
        }
    }
    ctx->pc = 0x31FB10u;
label_31fb10:
    // 0x31fb10: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x31FB10u;
    {
        const bool branch_taken_0x31fb10 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x31fb10) {
            ctx->pc = 0x31FB1Cu;
            goto label_31fb1c;
        }
    }
    ctx->pc = 0x31FB18u;
    // 0x31fb18: 0x2402fff0  addiu       $v0, $zero, -0x10
    ctx->pc = 0x31fb18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
label_31fb1c:
    // 0x31fb1c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x31fb1cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_31fb20:
    // 0x31fb20: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x31fb20u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x31fb24: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x31fb24u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x31fb28: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x31fb28u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x31fb2c: 0x3e00008  jr          $ra
    ctx->pc = 0x31FB2Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x31FB30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x31FB2Cu;
        // 0x31fb30: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x31FB2Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x31FB34u;
    // 0x31fb34: 0x0  nop
    ctx->pc = 0x31fb34u;
    // NOP
    // 0x31fb38: 0x0  nop
    ctx->pc = 0x31fb38u;
    // NOP
    // 0x31fb3c: 0x0  nop
    ctx->pc = 0x31fb3cu;
    // NOP
    if (ctx->pc == 0x31fb3cu) { ctx->pc = 0x31fb40u; }
}
