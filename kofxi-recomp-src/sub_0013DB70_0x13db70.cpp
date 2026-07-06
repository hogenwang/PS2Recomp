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

// Function: sub_0013DB70
// Address: 0x13db70 - 0x13dc70
void sub_0013DB70_0x13db70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013DB70_0x13db70");
#endif

    switch (ctx->pc) {
        case 0x13db98u: goto label_13db98;
        case 0x13dbc0u: goto label_13dbc0;
        case 0x13dbf0u: goto label_13dbf0;
        case 0x13dc24u: goto label_13dc24;
        default: break;
    }

    ctx->pc = 0x13db70u;

    // 0x13db70: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x13db70u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x13db74: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x13db74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x13db78: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13db78u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13db7c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13db7cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13db80: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13db80u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13db84: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x13db84u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13db88: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13db88u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13db8c: 0x8c8400dc  lw          $a0, 0xDC($a0)
    ctx->pc = 0x13db8cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x13db90: 0xc062804  jal         func_18A010
    ctx->pc = 0x13DB90u;
    SET_GPR_U32(ctx, 31, 0x13DB98u);
    ctx->pc = 0x13DB94u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DB90u;
    // 0x13db94: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18A010u, 0x13DB90u, 0x13DB98u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DB98u;
label_13db98:
    // 0x13db98: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x13db98u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13db9c: 0x56200003  bnel        $s1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13DB9Cu;
    {
        const bool branch_taken_0x13db9c = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x13db9c) {
            ctx->pc = 0x13DBA0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13DB9Cu;
            // 0x13dba0: 0x86030000  lh          $v1, 0x0($s0) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13DBACu;
            goto label_13dbac;
        }
    }
    ctx->pc = 0x13DBA4u;
    // 0x13dba4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x13DBA4u;
    {
        const bool branch_taken_0x13dba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DBA8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DBA4u;
        // 0x13dba8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dba4) {
            ctx->pc = 0x13DC48u;
            goto label_13dc48;
        }
    }
    ctx->pc = 0x13DBACu;
label_13dbac:
    // 0x13dbac: 0x86420000  lh          $v0, 0x0($s2)
    ctx->pc = 0x13dbacu;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x13dbb0: 0x621023  subu        $v0, $v1, $v0
    ctx->pc = 0x13dbb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x13dbb4: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x13dbb4u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x13dbb8: 0xc04bbec  jal         func_12EFB0
    ctx->pc = 0x13DBB8u;
    SET_GPR_U32(ctx, 31, 0x13DBC0u);
    ctx->pc = 0x13DBBCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DBB8u;
    // 0x13dbbc: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x12EFB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x12EFB0u, 0x13DBB8u, 0x13DBC0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DBC0u;
label_13dbc0:
    // 0x13dbc0: 0x46000024  .word       0x46000024                   # cvt.w.s     $f0, $f0 # 00000000 <InstrIdType: CPU_COP1_FPUS>
    ctx->pc = 0x13dbc0u;
    { int32_t tmp = FPU_CVT_W_S(ctx->f[0]); std::memcpy(&ctx->f[0], &tmp, sizeof(tmp)); }
    // 0x13dbc4: 0x8e420490  lw          $v0, 0x490($s2)
    ctx->pc = 0x13dbc4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 1168)));
    // 0x13dbc8: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x13dbc8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x13dbcc: 0x44100000  mfc1        $s0, $f0
    ctx->pc = 0x13dbccu;
    { uint32_t bits; std::memcpy(&bits, &ctx->f[0], sizeof(bits)); SET_GPR_U32(ctx, 16, bits); }
    // 0x13dbd0: 0x50400002  beql        $v0, $zero, . + 4 + (0x2 << 2)
    ctx->pc = 0x13DBD0u;
    {
        const bool branch_taken_0x13dbd0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dbd0) {
            ctx->pc = 0x13DBD4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13DBD0u;
            // 0x13dbd4: 0x24130008  addiu       $s3, $zero, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13DBDCu;
            goto label_13dbdc;
        }
    }
    ctx->pc = 0x13DBD8u;
    // 0x13dbd8: 0x24130009  addiu       $s3, $zero, 0x9
    ctx->pc = 0x13dbd8u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_13dbdc:
    // 0x13dbdc: 0x964500ea  lhu         $a1, 0xEA($s2)
    ctx->pc = 0x13dbdcu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 234)));
    // 0x13dbe0: 0x924600f7  lbu         $a2, 0xF7($s2)
    ctx->pc = 0x13dbe0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 247)));
    // 0x13dbe4: 0x8e4400dc  lw          $a0, 0xDC($s2)
    ctx->pc = 0x13dbe4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 220)));
    // 0x13dbe8: 0xc063720  jal         func_18DC80
    ctx->pc = 0x13DBE8u;
    SET_GPR_U32(ctx, 31, 0x13DBF0u);
    ctx->pc = 0x13DBECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x13DBE8u;
    // 0x13dbec: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x18DC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x18DC80u, 0x13DBE8u, 0x13DBF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x13DBF0u;
label_13dbf0:
    // 0x13dbf0: 0x54400003  bnel        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x13DBF0u;
    {
        const bool branch_taken_0x13dbf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x13dbf0) {
            ctx->pc = 0x13DBF4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x13DBF0u;
            // 0x13dbf4: 0x962500ea  lhu         $a1, 0xEA($s1) (Delay Slot)
            SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 234)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x13DC00u;
            goto label_13dc00;
        }
    }
    ctx->pc = 0x13DBF8u;
    // 0x13dbf8: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x13DBF8u;
    {
        const bool branch_taken_0x13dbf8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13DBFCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DBF8u;
        // 0x13dbfc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dbf8) {
            ctx->pc = 0x13DC48u;
            goto label_13dc48;
        }
    }
    ctx->pc = 0x13DC00u;
label_13dc00:
    // 0x13dc00: 0x131840  sll         $v1, $s3, 1
    ctx->pc = 0x13dc00u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 1));
    // 0x13dc04: 0x731821  addu        $v1, $v1, $s3
    ctx->pc = 0x13dc04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x13dc08: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x13dc08u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x13dc0c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x13dc0cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x13dc10: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x13dc10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13dc14: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x13dc14u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x13dc18: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x13dc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x13dc1c: 0x432021  addu        $a0, $v0, $v1
    ctx->pc = 0x13dc1cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13dc20: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x13dc20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_13dc24:
    // 0x13dc24: 0x90830000  lbu         $v1, 0x0($a0)
    ctx->pc = 0x13dc24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13dc28: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x13dc28u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x13dc2c: 0x70082a  slt         $at, $v1, $s0
    ctx->pc = 0x13dc2cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x13dc30: 0x10200005  beqz        $at, . + 4 + (0x5 << 2)
    ctx->pc = 0x13DC30u;
    {
        const bool branch_taken_0x13dc30 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13dc30) {
            ctx->pc = 0x13DC48u;
            goto label_13dc48;
        }
    }
    ctx->pc = 0x13DC38u;
    // 0x13dc38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x13dc38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x13dc3c: 0x28430004  slti        $v1, $v0, 0x4
    ctx->pc = 0x13dc3cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4) ? 1 : 0);
    // 0x13dc40: 0x1460fff8  bnez        $v1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x13DC40u;
    {
        const bool branch_taken_0x13dc40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x13DC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DC40u;
        // 0x13dc44: 0x24840001  addiu       $a0, $a0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13dc40) {
            ctx->pc = 0x13DC24u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13dc24;
        }
    }
    ctx->pc = 0x13DC48u;
label_13dc48:
    // 0x13dc48: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x13dc48u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x13dc4c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x13dc4cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x13dc50: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x13dc50u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x13dc54: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x13dc54u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x13dc58: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x13dc58u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x13dc5c: 0x3e00008  jr          $ra
    ctx->pc = 0x13DC5Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x13DC60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x13DC5Cu;
        // 0x13dc60: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x13DC5Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x13DC64u;
    // 0x13dc64: 0x0  nop
    ctx->pc = 0x13dc64u;
    // NOP
    // 0x13dc68: 0x0  nop
    ctx->pc = 0x13dc68u;
    // NOP
    // 0x13dc6c: 0x0  nop
    ctx->pc = 0x13dc6cu;
    // NOP
    if (ctx->pc == 0x13dc6cu) { ctx->pc = 0x13dc70u; }
}
