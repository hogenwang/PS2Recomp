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

// Function: sub_001EAB78
// Address: 0x1eab78 - 0x1eac70
void sub_001EAB78_0x1eab78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001EAB78_0x1eab78");
#endif

    switch (ctx->pc) {
        case 0x1eab78u: goto label_1eab78;
        case 0x1eab7cu: goto label_1eab7c;
        case 0x1eab80u: goto label_1eab80;
        case 0x1eab84u: goto label_1eab84;
        case 0x1eab88u: goto label_1eab88;
        case 0x1eab8cu: goto label_1eab8c;
        case 0x1eab90u: goto label_1eab90;
        case 0x1eab94u: goto label_1eab94;
        case 0x1eab98u: goto label_1eab98;
        case 0x1eab9cu: goto label_1eab9c;
        case 0x1eaba0u: goto label_1eaba0;
        case 0x1eaba4u: goto label_1eaba4;
        case 0x1eaba8u: goto label_1eaba8;
        case 0x1eabacu: goto label_1eabac;
        case 0x1eabb0u: goto label_1eabb0;
        case 0x1eabb4u: goto label_1eabb4;
        case 0x1eabb8u: goto label_1eabb8;
        case 0x1eabbcu: goto label_1eabbc;
        case 0x1eabc0u: goto label_1eabc0;
        case 0x1eabc4u: goto label_1eabc4;
        case 0x1eabc8u: goto label_1eabc8;
        case 0x1eabccu: goto label_1eabcc;
        case 0x1eabd0u: goto label_1eabd0;
        case 0x1eabd4u: goto label_1eabd4;
        case 0x1eabd8u: goto label_1eabd8;
        case 0x1eabdcu: goto label_1eabdc;
        case 0x1eabe0u: goto label_1eabe0;
        case 0x1eabe4u: goto label_1eabe4;
        case 0x1eabe8u: goto label_1eabe8;
        case 0x1eabecu: goto label_1eabec;
        case 0x1eabf0u: goto label_1eabf0;
        case 0x1eabf4u: goto label_1eabf4;
        case 0x1eabf8u: goto label_1eabf8;
        case 0x1eabfcu: goto label_1eabfc;
        case 0x1eac00u: goto label_1eac00;
        case 0x1eac04u: goto label_1eac04;
        case 0x1eac08u: goto label_1eac08;
        case 0x1eac0cu: goto label_1eac0c;
        case 0x1eac10u: goto label_1eac10;
        case 0x1eac14u: goto label_1eac14;
        case 0x1eac18u: goto label_1eac18;
        case 0x1eac1cu: goto label_1eac1c;
        case 0x1eac20u: goto label_1eac20;
        case 0x1eac24u: goto label_1eac24;
        case 0x1eac28u: goto label_1eac28;
        case 0x1eac2cu: goto label_1eac2c;
        case 0x1eac30u: goto label_1eac30;
        case 0x1eac34u: goto label_1eac34;
        case 0x1eac38u: goto label_1eac38;
        case 0x1eac3cu: goto label_1eac3c;
        case 0x1eac40u: goto label_1eac40;
        case 0x1eac44u: goto label_1eac44;
        case 0x1eac48u: goto label_1eac48;
        case 0x1eac4cu: goto label_1eac4c;
        case 0x1eac50u: goto label_1eac50;
        case 0x1eac54u: goto label_1eac54;
        case 0x1eac58u: goto label_1eac58;
        case 0x1eac5cu: goto label_1eac5c;
        case 0x1eac60u: goto label_1eac60;
        case 0x1eac64u: goto label_1eac64;
        case 0x1eac68u: goto label_1eac68;
        case 0x1eac6cu: goto label_1eac6c;
        default: break;
    }

    ctx->pc = 0x1eab78u;

label_1eab78:
    // 0x1eab78: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1eab78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
label_1eab7c:
    // 0x1eab7c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1eab7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
label_1eab80:
    // 0x1eab80: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1eab80u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_1eab84:
    // 0x1eab84: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1eab84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
label_1eab88:
    // 0x1eab88: 0xe0882d  daddu       $s1, $a3, $zero
    ctx->pc = 0x1eab88u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1eab8c:
    // 0x1eab8c: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1eab8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
label_1eab90:
    // 0x1eab90: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1eab90u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_1eab94:
    // 0x1eab94: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1eab94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
label_1eab98:
    // 0x1eab98: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x1eab98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
label_1eab9c:
    // 0x1eab9c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x1eab9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
label_1eaba0:
    // 0x1eaba0: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1eaba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1eaba4:
    // 0x1eaba4: 0x8c620024  lw          $v0, 0x24($v1)
    ctx->pc = 0x1eaba4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 36)));
label_1eaba8:
    // 0x1eaba8: 0x40f809  jalr        $v0
label_1eabac:
    if (ctx->pc == 0x1EABACu) {
        ctx->pc = 0x1EABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EABA8u;
        // 0x1eabac: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EABB0u;
        goto label_1eabb0;
    }
    ctx->pc = 0x1EABA8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EABB0u);
        ctx->pc = 0x1EABACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EABA8u;
        // 0x1eabac: 0xc0982d  daddu       $s3, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EABA8u, 0x1EABB0u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EABB0u;
label_1eabb0:
    // 0x1eabb0: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x1eabb0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_1eabb4:
    // 0x1eabb4: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x1eabb4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_1eabb8:
    // 0x1eabb8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1eabb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1eabbc:
    // 0x1eabbc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eabbcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eabc0:
    // 0x1eabc0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1eabc0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1eabc4:
    // 0x1eabc4: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x1eabc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_1eabc8:
    // 0x1eabc8: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1eabc8u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_1eabcc:
    // 0x1eabcc: 0x60f809  jalr        $v1
label_1eabd0:
    if (ctx->pc == 0x1EABD0u) {
        ctx->pc = 0x1EABD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EABCCu;
        // 0x1eabd0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EABD4u;
        goto label_1eabd4;
    }
    ctx->pc = 0x1EABCCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EABD4u);
        ctx->pc = 0x1EABD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EABCCu;
        // 0x1eabd0: 0x260382d  daddu       $a3, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EABCCu, 0x1EABD4u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EABD4u;
label_1eabd4:
    // 0x1eabd4: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eabd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eabd8:
    // 0x1eabd8: 0x8e620004  lw          $v0, 0x4($s3)
    ctx->pc = 0x1eabd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4)));
label_1eabdc:
    // 0x1eabdc: 0x3c067fff  lui         $a2, 0x7FFF
    ctx->pc = 0x1eabdcu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)32767 << 16));
label_1eabe0:
    // 0x1eabe0: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1eabe0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1eabe4:
    // 0x1eabe4: 0x34c6ffff  ori         $a2, $a2, 0xFFFF
    ctx->pc = 0x1eabe4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | (uint64_t)(uint16_t)65535);
label_1eabe8:
    // 0x1eabe8: 0x54102a  slt         $v0, $v0, $s4
    ctx->pc = 0x1eabe8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 20)) ? 1 : 0);
label_1eabec:
    // 0x1eabec: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_1eabf0:
    if (ctx->pc == 0x1EABF0u) {
        ctx->pc = 0x1EABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EABECu;
        // 0x1eabf0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EABF4u;
        goto label_1eabf4;
    }
    ctx->pc = 0x1EABECu;
    {
        const bool branch_taken_0x1eabec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EABF0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EABECu;
        // 0x1eabf0: 0x220382d  daddu       $a3, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eabec) {
            ctx->pc = 0x1EAC28u;
            goto label_1eac28;
        }
    }
    ctx->pc = 0x1EABF4u;
label_1eabf4:
    // 0x1eabf4: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x1eabf4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1eabf8:
    // 0x1eabf8: 0x8c430018  lw          $v1, 0x18($v0)
    ctx->pc = 0x1eabf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 24)));
label_1eabfc:
    // 0x1eabfc: 0x60f809  jalr        $v1
label_1eac00:
    if (ctx->pc == 0x1EAC00u) {
        ctx->pc = 0x1EAC04u;
        goto label_1eac04;
    }
    ctx->pc = 0x1EABFCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 3);
        SET_GPR_U32(ctx, 31, 0x1EAC04u);
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EABFCu, 0x1EAC04u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EAC04u;
label_1eac04:
    // 0x1eac04: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x1eac04u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1eac08:
    // 0x1eac08: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x1eac08u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_1eac0c:
    // 0x1eac0c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eac0cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eac10:
    // 0x1eac10: 0x8ca2001c  lw          $v0, 0x1C($a1)
    ctx->pc = 0x1eac10u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 28)));
label_1eac14:
    // 0x1eac14: 0x40f809  jalr        $v0
label_1eac18:
    if (ctx->pc == 0x1EAC18u) {
        ctx->pc = 0x1EAC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC14u;
        // 0x1eac18: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAC1Cu;
        goto label_1eac1c;
    }
    ctx->pc = 0x1EAC14u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EAC1Cu);
        ctx->pc = 0x1EAC18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC14u;
        // 0x1eac18: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAC14u, 0x1EAC1Cu, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EAC1Cu;
label_1eac1c:
    // 0x1eac1c: 0x10000005  b           . + 4 + (0x5 << 2)
label_1eac20:
    if (ctx->pc == 0x1EAC20u) {
        ctx->pc = 0x1EAC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC1Cu;
        // 0x1eac20: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAC24u;
        goto label_1eac24;
    }
    ctx->pc = 0x1EAC1Cu;
    {
        const bool branch_taken_0x1eac1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1EAC20u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC1Cu;
        // 0x1eac20: 0x8e030000  lw          $v1, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1eac1c) {
            ctx->pc = 0x1EAC34u;
            goto label_1eac34;
        }
    }
    ctx->pc = 0x1EAC24u;
label_1eac24:
    // 0x1eac24: 0x0  nop
    ctx->pc = 0x1eac24u;
    // NOP
label_1eac28:
    // 0x1eac28: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x1eac28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
label_1eac2c:
    // 0x1eac2c: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x1eac2cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
label_1eac30:
    // 0x1eac30: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x1eac30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_1eac34:
    // 0x1eac34: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x1eac34u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_1eac38:
    // 0x1eac38: 0x240282d  daddu       $a1, $s2, $zero
    ctx->pc = 0x1eac38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_1eac3c:
    // 0x1eac3c: 0x8c62001c  lw          $v0, 0x1C($v1)
    ctx->pc = 0x1eac3cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 28)));
label_1eac40:
    // 0x1eac40: 0x40f809  jalr        $v0
label_1eac44:
    if (ctx->pc == 0x1EAC44u) {
        ctx->pc = 0x1EAC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC40u;
        // 0x1eac44: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAC48u;
        goto label_1eac48;
    }
    ctx->pc = 0x1EAC40u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x1EAC48u);
        ctx->pc = 0x1EAC44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC40u;
        // 0x1eac44: 0x260302d  daddu       $a2, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAC40u, 0x1EAC48u, PS2Runtime::GuestBranchKind::IndirectCall, "JALR")) {
            return;
        }
    }
    ctx->pc = 0x1EAC48u;
label_1eac48:
    // 0x1eac48: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x1eac48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_1eac4c:
    // 0x1eac4c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1eac4cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_1eac50:
    // 0x1eac50: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1eac50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_1eac54:
    // 0x1eac54: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1eac54u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_1eac58:
    // 0x1eac58: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1eac58u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
label_1eac5c:
    // 0x1eac5c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x1eac5cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
label_1eac60:
    // 0x1eac60: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x1eac60u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
label_1eac64:
    // 0x1eac64: 0x3e00008  jr          $ra
label_1eac68:
    if (ctx->pc == 0x1EAC68u) {
        ctx->pc = 0x1EAC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC64u;
        // 0x1eac68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = 0x1EAC6Cu;
        goto label_1eac6c;
    }
    ctx->pc = 0x1EAC64u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1EAC68u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1EAC64u;
        // 0x1eac68: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1EAC64u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1EAC6Cu;
label_1eac6c:
    // 0x1eac6c: 0x0  nop
    ctx->pc = 0x1eac6cu;
    // NOP
    if (ctx->pc == 0x1eac6cu) { ctx->pc = 0x1eac70u; }
}
