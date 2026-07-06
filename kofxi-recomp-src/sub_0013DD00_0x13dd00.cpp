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

// Function: sub_0013DD00
// Address: 0x13dd00 - 0x13de30
void sub_0013DD00_0x13dd00(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013DD00_0x13dd00");
#endif

    switch (ctx->pc) {
        case 0x13dd20u: goto label_13dd20;
        case 0x13dd3cu: goto label_13dd3c;
        case 0x13dd54u: goto label_13dd54;
        default: break;
    }

    ctx->pc = 0x13dd00u;

    // 0x13dd00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x13dd00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x13dd04: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x13dd04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x13dd08: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13dd08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13dd0c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13dd0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13dd10: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13dd10u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dd14: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13dd14u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13dd18: 0xc062804  jal         func_18A010
    ctx->pc = 0x13DD18u;
    SET_GPR_U32(ctx, 31, 0x13DD20u);
    ctx->pc = 0x13DD1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DD18u;
    // 0x13dd1c: 0x8c8400dc  lw          $a0, 0xDC($a0) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A010u, 0x13DD18u, 0x13DD20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DD20u;
label_13dd20:
    // 0x13dd20: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13dd20u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dd24: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13DD24u;
    {
        const bool branch_taken_0x13dd24 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x13dd24) {
            ctx->pc = 0x13DD28u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13DD24u;
            // 0x13dd28: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
            SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13DD34u;
            goto label_13dd34;
        }
    }
    ctx->pc = 0x13DD2Cu;
    // 0x13dd2c: 0x1000003a  b           . + 4 + (0x3A << 2)
    ctx->pc = 0x13DD2Cu;
    {
        const bool branch_taken_0x13dd2c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DD30u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DD2Cu;
        // 0x13dd30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dd2c) {
            ctx->pc = 0x13DE18u;
            goto label_13de18;
        }
    }
    ctx->pc = 0x13DD34u;
label_13dd34:
    // 0x13dd34: 0xc04f71c  jal         func_13DC70
    ctx->pc = 0x13DD34u;
    SET_GPR_U32(ctx, 31, 0x13DD3Cu);
    ctx->pc = 0x13DC70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x13DC70u, 0x13DD34u, 0x13DD3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DD3Cu;
label_13dd3c:
    // 0x13dd3c: 0x964500ea  lhu         $a1, 0xEA($s2)
    ctx->pc = 0x13dd3cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 234)));
    // 0x13dd40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13dd40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13dd44: 0x924600f7  lbu         $a2, 0xF7($s2)
    ctx->pc = 0x13dd44u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 247)));
    // 0x13dd48: 0x8e4400dc  lw          $a0, 0xDC($s2)
    ctx->pc = 0x13dd48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x13dd4c: 0xc063720  jal         func_18DC80
    ctx->pc = 0x13DD4Cu;
    SET_GPR_U32(ctx, 31, 0x13DD54u);
    ctx->pc = 0x13DD50u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DD4Cu;
    // 0x13dd50: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC80u, 0x13DD4Cu, 0x13DD54u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DD54u;
label_13dd54:
    // 0x13dd54: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13DD54u;
    {
        const bool branch_taken_0x13dd54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13dd54) {
            ctx->pc = 0x13DD58u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13DD54u;
            // 0x13dd58: 0x962500ea  lhu         $a1, 0xEA($s1) (Delay Slot)
            SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 234)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13DD64u;
            goto label_13dd64;
        }
    }
    ctx->pc = 0x13DD5Cu;
    // 0x13dd5c: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x13DD5Cu;
    {
        const bool branch_taken_0x13dd5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DD60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DD5Cu;
        // 0x13dd60: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dd5c) {
            ctx->pc = 0x13DE18u;
            goto label_13de18;
        }
    }
    ctx->pc = 0x13DD64u;
label_13dd64:
    // 0x13dd64: 0x101840  sll         $v1, $s0, 1
    ctx->pc = 0x13dd64u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 16), 1));
    // 0x13dd68: 0x701821  addu        $v1, $v1, $s0
    ctx->pc = 0x13dd68u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 16)));
    // 0x13dd6c: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x13dd6cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x13dd70: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x13dd70u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x13dd74: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x13dd74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13dd78: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x13dd78u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x13dd7c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13dd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13dd80: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x13dd80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13dd84: 0x90430004  lbu         $v1, 0x4($v0)
    ctx->pc = 0x13dd84u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x13dd88: 0x90420005  lbu         $v0, 0x5($v0)
    ctx->pc = 0x13dd88u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 5)));
    // 0x13dd8c: 0x33040  sll         $a2, $v1, 1
    ctx->pc = 0x13dd8cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x13dd90: 0x14c00005  bnez        $a2, . + 4 + (0x5 << 2)
    ctx->pc = 0x13DD90u;
    {
        const bool branch_taken_0x13dd90 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DD94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DD90u;
        // 0x13dd94: 0x22840  sll         $a1, $v0, 1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dd90) {
            ctx->pc = 0x13DDA8u;
            goto label_13dda8;
        }
    }
    ctx->pc = 0x13DD98u;
    // 0x13dd98: 0x54a00004  bnel        $a1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x13DD98u;
    {
        const bool branch_taken_0x13dd98 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        if (branch_taken_0x13dd98) {
            ctx->pc = 0x13DD9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13DD98u;
            // 0x13dd9c: 0x2a010006  slti        $at, $s0, 0x6 (Delay Slot)
            SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
            ctx->in_delay_slot = false;
            ctx->pc = 0x13DDACu;
            goto label_13ddac;
        }
    }
    ctx->pc = 0x13DDA0u;
    // 0x13dda0: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x13DDA0u;
    {
        const bool branch_taken_0x13dda0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DDA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DDA0u;
        // 0x13dda4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dda0) {
            ctx->pc = 0x13DE18u;
            goto label_13de18;
        }
    }
    ctx->pc = 0x13DDA8u;
label_13dda8:
    // 0x13dda8: 0x2a010006  slti        $at, $s0, 0x6
    ctx->pc = 0x13dda8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 16) < (int64_t)(int32_t)6) ? 1 : 0);
label_13ddac:
    // 0x13ddac: 0x5020000e  beql        $at, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x13DDACu;
    {
        const bool branch_taken_0x13ddac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ddac) {
            ctx->pc = 0x13DDB0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13DDACu;
            // 0x13ddb0: 0x86440002  lh          $a0, 0x2($s2) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 2)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13DDE8u;
            goto label_13dde8;
        }
    }
    ctx->pc = 0x13DDB4u;
    // 0x13ddb4: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x13ddb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x13ddb8: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x13ddb8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x13ddbc: 0x8444f11a  lh          $a0, -0xEE6($v0)
    ctx->pc = 0x13ddbcu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294963482)));
    // 0x13ddc0: 0x861023  subu        $v0, $a0, $a2
    ctx->pc = 0x13ddc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x13ddc4: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x13ddc4u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13ddc8: 0x54200013  bnel        $at, $zero, . + 4 + (0x13 << 2)
    ctx->pc = 0x13DDC8u;
    {
        const bool branch_taken_0x13ddc8 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ddc8) {
            ctx->pc = 0x13DDCCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13DDC8u;
            // 0x13ddcc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13DE18u;
            goto label_13de18;
        }
    }
    ctx->pc = 0x13DDD0u;
    // 0x13ddd0: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x13ddd0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13ddd4: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x13ddd4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13ddd8: 0x1440000e  bnez        $v0, . + 4 + (0xE << 2)
    ctx->pc = 0x13DDD8u;
    {
        const bool branch_taken_0x13ddd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ddd8) {
            ctx->pc = 0x13DE14u;
            goto label_13de14;
        }
    }
    ctx->pc = 0x13DDE0u;
    // 0x13dde0: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x13DDE0u;
    {
        const bool branch_taken_0x13dde0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DDE4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DDE0u;
        // 0x13dde4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dde0) {
            ctx->pc = 0x13DE18u;
            goto label_13de18;
        }
    }
    ctx->pc = 0x13DDE8u;
label_13dde8:
    // 0x13dde8: 0x86230002  lh          $v1, 0x2($s1)
    ctx->pc = 0x13dde8u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 17), 2)));
    // 0x13ddec: 0x861021  addu        $v0, $a0, $a2
    ctx->pc = 0x13ddecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x13ddf0: 0x43082a  slt         $at, $v0, $v1
    ctx->pc = 0x13ddf0u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x13ddf4: 0x14200007  bnez        $at, . + 4 + (0x7 << 2)
    ctx->pc = 0x13DDF4u;
    {
        const bool branch_taken_0x13ddf4 = (GPR_U64(ctx, 1) != GPR_U64(ctx, 0));
        if (branch_taken_0x13ddf4) {
            ctx->pc = 0x13DE14u;
            goto label_13de14;
        }
    }
    ctx->pc = 0x13DDFCu;
    // 0x13ddfc: 0x851023  subu        $v0, $a0, $a1
    ctx->pc = 0x13ddfcu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13de00: 0x62102a  slt         $v0, $v1, $v0
    ctx->pc = 0x13de00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x13de04: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x13DE04u;
    {
        const bool branch_taken_0x13de04 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13de04) {
            ctx->pc = 0x13DE14u;
            goto label_13de14;
        }
    }
    ctx->pc = 0x13DE0Cu;
    // 0x13de0c: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x13DE0Cu;
    {
        const bool branch_taken_0x13de0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DE10u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DE0Cu;
        // 0x13de10: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13de0c) {
            ctx->pc = 0x13DE18u;
            goto label_13de18;
        }
    }
    ctx->pc = 0x13DE14u;
label_13de14:
    // 0x13de14: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13de14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13de18:
    // 0x13de18: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x13de18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13de1c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13de1cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13de20: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13de20u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13de24: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13de24u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13de28: 0x3e00008  jr          $ra
    ctx->pc = 0x13DE28u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DE2Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DE28u;
        // 0x13de2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DE28u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13DE30u;
}
