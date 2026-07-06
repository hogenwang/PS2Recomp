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

// Function: sub_0013DE30
// Address: 0x13de30 - 0x13df70
void sub_0013DE30_0x13de30(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013DE30_0x13de30");
#endif

    switch (ctx->pc) {
        case 0x13de58u: goto label_13de58;
        case 0x13de90u: goto label_13de90;
        default: break;
    }

    ctx->pc = 0x13de30u;

    // 0x13de30: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13de30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13de34: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x13de34u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x13de38: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13de38u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13de3c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13de3cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13de40: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13de40u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13de44: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13de44u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13de48: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13de48u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13de4c: 0x8c8400dc  lw          $a0, 0xDC($a0)
    ctx->pc = 0x13de4cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x13de50: 0xc062804  jal         func_18A010
    ctx->pc = 0x13DE50u;
    SET_GPR_U32(ctx, 31, 0x13DE58u);
    ctx->pc = 0x13DE54u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DE50u;
    // 0x13de54: 0xa0882d  daddu       $s1, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A010u, 0x13DE50u, 0x13DE58u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DE58u;
label_13de58:
    // 0x13de58: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x13de58u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13de5c: 0x56600003  bnel        $s3, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13DE5Cu;
    {
        const bool branch_taken_0x13de5c = (GPR_U64(ctx, 19) != GPR_U64(ctx, 0));
        if (branch_taken_0x13de5c) {
            ctx->pc = 0x13DE60u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13DE5Cu;
            // 0x13de60: 0x8e420490  lw          $v0, 0x490($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1168)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13DE6Cu;
            goto label_13de6c;
        }
    }
    ctx->pc = 0x13DE64u;
    // 0x13de64: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x13DE64u;
    {
        const bool branch_taken_0x13de64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DE68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DE64u;
        // 0x13de68: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13de64) {
            ctx->pc = 0x13DF54u;
            goto label_13df54;
        }
    }
    ctx->pc = 0x13DE6Cu;
label_13de6c:
    // 0x13de6c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x13de6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x13de70: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x13DE70u;
    {
        const bool branch_taken_0x13de70 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13de70) {
            ctx->pc = 0x13DE74u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13DE70u;
            // 0x13de74: 0x24100008  addiu       $s0, $zero, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13DE7Cu;
            goto label_13de7c;
        }
    }
    ctx->pc = 0x13DE78u;
    // 0x13de78: 0x24100009  addiu       $s0, $zero, 0x9
    ctx->pc = 0x13de78u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_13de7c:
    // 0x13de7c: 0x964500ea  lhu         $a1, 0xEA($s2)
    ctx->pc = 0x13de7cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 234)));
    // 0x13de80: 0x924600f7  lbu         $a2, 0xF7($s2)
    ctx->pc = 0x13de80u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 247)));
    // 0x13de84: 0x8e4400dc  lw          $a0, 0xDC($s2)
    ctx->pc = 0x13de84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x13de88: 0xc063720  jal         func_18DC80
    ctx->pc = 0x13DE88u;
    SET_GPR_U32(ctx, 31, 0x13DE90u);
    ctx->pc = 0x13DE8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DE88u;
    // 0x13de8c: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC80u, 0x13DE88u, 0x13DE90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DE90u;
label_13de90:
    // 0x13de90: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13DE90u;
    {
        const bool branch_taken_0x13de90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13de90) {
            ctx->pc = 0x13DE94u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13DE90u;
            // 0x13de94: 0x966500ea  lhu         $a1, 0xEA($s3) (Delay Slot)
            SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 234)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13DEA0u;
            goto label_13dea0;
        }
    }
    ctx->pc = 0x13DE98u;
    // 0x13de98: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x13DE98u;
    {
        const bool branch_taken_0x13de98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DE9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DE98u;
        // 0x13de9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13de98) {
            ctx->pc = 0x13DF54u;
            goto label_13df54;
        }
    }
    ctx->pc = 0x13DEA0u;
label_13dea0:
    // 0x13dea0: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x13dea0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x13dea4: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x13dea4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x13dea8: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x13dea8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x13deac: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x13deacu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x13deb0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x13deb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13deb4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x13deb4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x13deb8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13deb8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13debc: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13debcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13dec0: 0x90430004  lbu         $v1, 0x4($v0)
    ctx->pc = 0x13dec0u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13dec4: 0x90420005  lbu         $v0, 0x5($v0)
    ctx->pc = 0x13dec4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x13dec8: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x13dec8u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x13decc: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x13DECCu;
    {
        const bool branch_taken_0x13decc = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DED0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DECCu;
        // 0x13ded0: 0x22840  sll         $a1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13decc) {
            ctx->pc = 0x13DEE4u;
            goto label_13dee4;
        }
    }
    ctx->pc = 0x13DED4u;
    // 0x13ded4: 0x54a00004  bnel        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x13DED4u;
    {
        const bool branch_taken_0x13ded4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ded4) {
            ctx->pc = 0x13DED8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13DED4u;
            // 0x13ded8: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13DEE8u;
            goto label_13dee8;
        }
    }
    ctx->pc = 0x13DEDCu;
    // 0x13dedc: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x13DEDCu;
    {
        const bool branch_taken_0x13dedc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DEE0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DEDCu;
        // 0x13dee0: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dedc) {
            ctx->pc = 0x13DF54u;
            goto label_13df54;
        }
    }
    ctx->pc = 0x13DEE4u;
label_13dee4:
    // 0x13dee4: 0x24020008  addiu       $v0, $zero, 0x8
    ctx->pc = 0x13dee4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_13dee8:
    // 0x13dee8: 0x5602000e  bnel        $s0, $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x13DEE8u;
    {
        const bool branch_taken_0x13dee8 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 2));
        if (branch_taken_0x13dee8) {
            ctx->pc = 0x13DEECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13DEE8u;
            // 0x13deec: 0x86440002  lh          $a0, 0x2($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13DF24u;
            goto label_13df24;
        }
    }
    ctx->pc = 0x13DEF0u;
    // 0x13def0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x13def0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x13def4: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x13def4u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x13def8: 0x8444f11a  lh          $a0, -0xEE6($v0)
    ctx->pc = 0x13def8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963482)));
    // 0x13defc: 0x861023  subu        $v0, $a0, $a2
    ctx->pc = 0x13defcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x13df00: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x13df00u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13df04: 0x54200013  bnel        $at, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x13DF04u;
    {
        const bool branch_taken_0x13df04 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13df04) {
            ctx->pc = 0x13DF08u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13DF04u;
            // 0x13df08: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13DF54u;
            goto label_13df54;
        }
    }
    ctx->pc = 0x13DF0Cu;
    // 0x13df0c: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x13df0cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13df10: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x13df10u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13df14: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x13DF14u;
    {
        const bool branch_taken_0x13df14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13df14) {
            ctx->pc = 0x13DF50u;
            goto label_13df50;
        }
    }
    ctx->pc = 0x13DF1Cu;
    // 0x13df1c: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x13DF1Cu;
    {
        const bool branch_taken_0x13df1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DF20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DF1Cu;
        // 0x13df20: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13df1c) {
            ctx->pc = 0x13DF54u;
            goto label_13df54;
        }
    }
    ctx->pc = 0x13DF24u;
label_13df24:
    // 0x13df24: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x13df24u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x13df28: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x13df28u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x13df2c: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x13df2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13df30: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x13DF30u;
    {
        const bool branch_taken_0x13df30 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13df30) {
            ctx->pc = 0x13DF50u;
            goto label_13df50;
        }
    }
    ctx->pc = 0x13DF38u;
    // 0x13df38: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x13df38u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13df3c: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x13df3cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13df40: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13DF40u;
    {
        const bool branch_taken_0x13df40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13df40) {
            ctx->pc = 0x13DF50u;
            goto label_13df50;
        }
    }
    ctx->pc = 0x13DF48u;
    // 0x13df48: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13DF48u;
    {
        const bool branch_taken_0x13df48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DF4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DF48u;
        // 0x13df4c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13df48) {
            ctx->pc = 0x13DF54u;
            goto label_13df54;
        }
    }
    ctx->pc = 0x13DF50u;
label_13df50:
    // 0x13df50: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13df50u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13df54:
    // 0x13df54: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13df54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13df58: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13df58u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13df5c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13df5cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13df60: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13df60u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13df64: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13df64u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13df68: 0x3e00008  jr          $ra
    ctx->pc = 0x13DF68u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DF6Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DF68u;
        // 0x13df6c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DF68u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13DF70u;
}
