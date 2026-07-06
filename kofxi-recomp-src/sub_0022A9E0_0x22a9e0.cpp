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

// Function: sub_0022A9E0
// Address: 0x22a9e0 - 0x22b060
void sub_0022A9E0_0x22a9e0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0022A9E0_0x22a9e0");
#endif

    switch (ctx->pc) {
        case 0x22aa48u: goto label_22aa48;
        case 0x22aa68u: goto label_22aa68;
        case 0x22aa88u: goto label_22aa88;
        case 0x22aaa8u: goto label_22aaa8;
        case 0x22aac4u: goto label_22aac4;
        case 0x22aaccu: goto label_22aacc;
        case 0x22aad8u: goto label_22aad8;
        case 0x22aae4u: goto label_22aae4;
        case 0x22aaf8u: goto label_22aaf8;
        case 0x22abd4u: goto label_22abd4;
        case 0x22ac08u: goto label_22ac08;
        case 0x22ac18u: goto label_22ac18;
        case 0x22ac24u: goto label_22ac24;
        case 0x22ac34u: goto label_22ac34;
        case 0x22ac3cu: goto label_22ac3c;
        case 0x22ac48u: goto label_22ac48;
        case 0x22acd8u: goto label_22acd8;
        case 0x22acf0u: goto label_22acf0;
        case 0x22ad34u: goto label_22ad34;
        case 0x22ad60u: goto label_22ad60;
        case 0x22add4u: goto label_22add4;
        case 0x22ade0u: goto label_22ade0;
        case 0x22adecu: goto label_22adec;
        case 0x22ae00u: goto label_22ae00;
        case 0x22ae08u: goto label_22ae08;
        case 0x22aea0u: goto label_22aea0;
        case 0x22aef4u: goto label_22aef4;
        case 0x22af00u: goto label_22af00;
        case 0x22af08u: goto label_22af08;
        case 0x22af14u: goto label_22af14;
        case 0x22af20u: goto label_22af20;
        case 0x22af34u: goto label_22af34;
        case 0x22af38u: goto label_22af38;
        case 0x22afa0u: goto label_22afa0;
        case 0x22afd8u: goto label_22afd8;
        case 0x22b008u: goto label_22b008;
        case 0x22b024u: goto label_22b024;
        default: break;
    }

    ctx->pc = 0x22a9e0u;

    // 0x22a9e0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x22a9e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x22a9e4: 0xffbe0090  sd          $fp, 0x90($sp)
    ctx->pc = 0x22a9e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 30));
    // 0x22a9e8: 0xffb70080  sd          $s7, 0x80($sp)
    ctx->pc = 0x22a9e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 23));
    // 0x22a9ec: 0xa0f02d  daddu       $fp, $a1, $zero
    ctx->pc = 0x22a9ecu;
    SET_GPR_U64(ctx, 30, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a9f0: 0xffb40050  sd          $s4, 0x50($sp)
    ctx->pc = 0x22a9f0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 20));
    // 0x22a9f4: 0xe0b82d  daddu       $s7, $a3, $zero
    ctx->pc = 0x22a9f4u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22a9f8: 0xffb30040  sd          $s3, 0x40($sp)
    ctx->pc = 0x22a9f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 19));
    // 0x22a9fc: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x22a9fcu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aa00: 0xffb20030  sd          $s2, 0x30($sp)
    ctx->pc = 0x22aa00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 18));
    // 0x22aa04: 0x3c0982d  daddu       $s3, $fp, $zero
    ctx->pc = 0x22aa04u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 30) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aa08: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x22aa08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x22aa0c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22aa0cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aa10: 0xffb60070  sd          $s6, 0x70($sp)
    ctx->pc = 0x22aa10u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 22));
    // 0x22aa14: 0xffb50060  sd          $s5, 0x60($sp)
    ctx->pc = 0x22aa14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 21));
    // 0x22aa18: 0xffb10020  sd          $s1, 0x20($sp)
    ctx->pc = 0x22aa18u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 17));
    // 0x22aa1c: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x22aa1cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x22aa20: 0xafa80004  sw          $t0, 0x4($sp)
    ctx->pc = 0x22aa20u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 4), GPR_U32(ctx, 8));
    // 0x22aa24: 0x6600003  bltz        $s3, . + 4 + (0x3 << 2)
    ctx->pc = 0x22AA24u;
    {
        const bool branch_taken_0x22aa24 = (GPR_S32(ctx, 19) < 0);
        ctx->pc = 0x22AA28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AA24u;
        // 0x22aa28: 0xafa00008  sw          $zero, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aa24) {
            ctx->pc = 0x22AA34u;
            goto label_22aa34;
        }
    }
    ctx->pc = 0x22AA2Cu;
    // 0x22aa2c: 0x6810006  bgez        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x22AA2Cu;
    {
        const bool branch_taken_0x22aa2c = (GPR_S32(ctx, 20) >= 0);
        if (branch_taken_0x22aa2c) {
            ctx->pc = 0x22AA48u;
            goto label_22aa48;
        }
    }
    ctx->pc = 0x22AA34u;
label_22aa34:
    // 0x22aa34: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x22aa34u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x22aa38: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x22aa38u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aa3c: 0x24844570  addiu       $a0, $a0, 0x4570
    ctx->pc = 0x22aa3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17776));
    // 0x22aa40: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x22AA40u;
    SET_GPR_U32(ctx, 31, 0x22AA48u);
    ctx->pc = 0x22AA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AA40u;
    // 0x22aa44: 0x280302d  daddu       $a2, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D780u, 0x22AA40u, 0x22AA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AA48u;
label_22aa48:
    // 0x22aa48: 0x17c00009  bnez        $fp, . + 4 + (0x9 << 2)
    ctx->pc = 0x22AA48u;
    {
        const bool branch_taken_0x22aa48 = (GPR_U64(ctx, 30) != GPR_U64(ctx, 0));
        ctx->pc = 0x22AA4Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AA48u;
        // 0x22aa4c: 0x3c10003f  lui         $s0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aa48) {
            ctx->pc = 0x22AA70u;
            goto label_22aa70;
        }
    }
    ctx->pc = 0x22AA50u;
    // 0x22aa50: 0x96420012  lhu         $v0, 0x12($s2)
    ctx->pc = 0x22aa50u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x22aa54: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x22aa54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x22aa58: 0x2102b  sltu        $v0, $zero, $v0
    ctx->pc = 0x22aa58u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x22aa5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22AA5Cu;
    {
        const bool branch_taken_0x22aa5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AA60u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AA5Cu;
        // 0x22aa60: 0xafa20008  sw          $v0, 0x8($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aa5c) {
            ctx->pc = 0x22AA70u;
            goto label_22aa70;
        }
    }
    ctx->pc = 0x22AA64u;
    // 0x22aa64: 0x0  nop
    ctx->pc = 0x22aa64u;
    // NOP
label_22aa68:
    // 0x22aa68: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x22aa68u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22aa6c: 0x2639823  subu        $s3, $s3, $v1
    ctx->pc = 0x22aa6cu;
    SET_GPR_S32(ctx, 19, (int32_t)SUB32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
label_22aa70:
    // 0x22aa70: 0x1a600009  blez        $s3, . + 4 + (0x9 << 2)
    ctx->pc = 0x22AA70u;
    {
        const bool branch_taken_0x22aa70 = (GPR_S32(ctx, 19) <= 0);
        ctx->pc = 0x22AA74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AA70u;
        // 0x22aa74: 0x3c163b9a  lui         $s6, 0x3B9A (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)15258 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aa70) {
            ctx->pc = 0x22AA98u;
            goto label_22aa98;
        }
    }
    ctx->pc = 0x22AA78u;
    // 0x22aa78: 0x56400004  bnel        $s2, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x22AA78u;
    {
        const bool branch_taken_0x22aa78 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x22aa78) {
            ctx->pc = 0x22AA7Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22AA78u;
            // 0x22aa7c: 0x8e43000c  lw          $v1, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22AA8Cu;
            goto label_22aa8c;
        }
    }
    ctx->pc = 0x22AA80u;
    // 0x22aa80: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x22AA80u;
    SET_GPR_U32(ctx, 31, 0x22AA88u);
    ctx->pc = 0x22AA84u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AA80u;
    // 0x22aa84: 0x26044588  addiu       $a0, $s0, 0x4588 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 17800));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D780u, 0x22AA80u, 0x22AA88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AA88u;
label_22aa88:
    // 0x22aa88: 0x8e43000c  lw          $v1, 0xC($s2)
    ctx->pc = 0x22aa88u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_22aa8c:
    // 0x22aa8c: 0x263102a  slt         $v0, $s3, $v1
    ctx->pc = 0x22aa8cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x22aa90: 0x1040fff5  beqz        $v0, . + 4 + (-0xB << 2)
    ctx->pc = 0x22AA90u;
    {
        const bool branch_taken_0x22aa90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AA94u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AA90u;
        // 0x22aa94: 0x3c163b9a  lui         $s6, 0x3B9A (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)((uint32_t)15258 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aa90) {
            ctx->pc = 0x22AA68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22aa68;
        }
    }
    ctx->pc = 0x22AA98u;
label_22aa98:
    // 0x22aa98: 0x3a0a82d  daddu       $s5, $sp, $zero
    ctx->pc = 0x22aa98u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aa9c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x22aa9cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x22aaa0: 0x1000009c  b           . + 4 + (0x9C << 2)
    ctx->pc = 0x22AAA0u;
    {
        const bool branch_taken_0x22aaa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AAA4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AAA0u;
        // 0x22aaa4: 0x36d6ca00  ori         $s6, $s6, 0xCA00 (Delay Slot)
        SET_GPR_U64(ctx, 22, GPR_U64(ctx, 22) | (uint64_t)(uint16_t)51712);
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aaa0) {
            ctx->pc = 0x22AD14u;
            goto label_22ad14;
        }
    }
    ctx->pc = 0x22AAA8u;
label_22aaa8:
    // 0x22aaa8: 0x26220014  addiu       $v0, $s1, 0x14
    ctx->pc = 0x22aaa8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x22aaac: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x22aaacu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x22aab0: 0xa6230010  sh          $v1, 0x10($s1)
    ctx->pc = 0x22aab0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x22aab4: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x22aab4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x22aab8: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x22aab8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x22aabc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x22AABCu;
    {
        const bool branch_taken_0x22aabc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AAC0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AABCu;
        // 0x22aac0: 0xa6200012  sh          $zero, 0x12($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aabc) {
            ctx->pc = 0x22AB00u;
            goto label_22ab00;
        }
    }
    ctx->pc = 0x22AAC4u;
label_22aac4:
    // 0x22aac4: 0xc08c682  jal         func_231A08
    ctx->pc = 0x22AAC4u;
    SET_GPR_U32(ctx, 31, 0x22AACCu);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x22AAC4u, 0x22AACCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AACCu;
label_22aacc:
    // 0x22aacc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22aaccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aad0: 0xc098552  jal         func_261548
    ctx->pc = 0x22AAD0u;
    SET_GPR_U32(ctx, 31, 0x22AAD8u);
    ctx->pc = 0x22AAD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AAD0u;
    // 0x22aad4: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x22AAD0u, 0x22AAD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AAD8u;
label_22aad8:
    // 0x22aad8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22aad8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aadc: 0xc08c698  jal         func_231A60
    ctx->pc = 0x22AADCu;
    SET_GPR_U32(ctx, 31, 0x22AAE4u);
    ctx->pc = 0x22AAE0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AADCu;
    // 0x22aae0: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x22AADCu, 0x22AAE4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AAE4u;
label_22aae4:
    // 0x22aae4: 0x5620fff0  bnel        $s1, $zero, . + 4 + (-0x10 << 2)
    ctx->pc = 0x22AAE4u;
    {
        const bool branch_taken_0x22aae4 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x22aae4) {
            ctx->pc = 0x22AAE8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22AAE4u;
            // 0x22aae8: 0x96430010  lhu         $v1, 0x10($s2) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22AAA8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22aaa8;
        }
    }
    ctx->pc = 0x22AAECu;
    // 0x22aaec: 0x86450010  lh          $a1, 0x10($s2)
    ctx->pc = 0x22aaecu;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x22aaf0: 0xc08a8ae  jal         func_22A2B8
    ctx->pc = 0x22AAF0u;
    SET_GPR_U32(ctx, 31, 0x22AAF8u);
    ctx->pc = 0x22AAF4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AAF0u;
    // 0x22aaf4: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A2B8u, 0x22AAF0u, 0x22AAF8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AAF8u;
label_22aaf8:
    // 0x22aaf8: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22aaf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22aafc: 0x0  nop
    ctx->pc = 0x22aafcu;
    // NOP
label_22ab00:
    // 0x22ab00: 0x12200095  beqz        $s1, . + 4 + (0x95 << 2)
    ctx->pc = 0x22AB00u;
    {
        const bool branch_taken_0x22ab00 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AB04u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AB00u;
        // 0x22ab04: 0xaeb10000  sw          $s1, 0x0($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ab00) {
            ctx->pc = 0x22AD58u;
            goto label_22ad58;
        }
    }
    ctx->pc = 0x22AB08u;
    // 0x22ab08: 0x8fa20008  lw          $v0, 0x8($sp)
    ctx->pc = 0x22ab08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x22ab0c: 0x50400015  beql        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x22AB0Cu;
    {
        const bool branch_taken_0x22ab0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ab0c) {
            ctx->pc = 0x22AB10u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22AB0Cu;
            // 0x22ab10: 0x8e42000c  lw          $v0, 0xC($s2) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22AB64u;
            goto label_22ab64;
        }
    }
    ctx->pc = 0x22AB14u;
    // 0x22ab14: 0x6a43001b  ldl         $v1, 0x1B($s2)
    ctx->pc = 0x22ab14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x22ab18: 0x6e430014  ldr         $v1, 0x14($s2)
    ctx->pc = 0x22ab18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x22ab1c: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x22ab1cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x22ab20: 0xb223001b  sdl         $v1, 0x1B($s1)
    ctx->pc = 0x22ab20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22ab24: 0xb6230014  sdr         $v1, 0x14($s1)
    ctx->pc = 0x22ab24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22ab28: 0xae24001c  sw          $a0, 0x1C($s1)
    ctx->pc = 0x22ab28u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 4));
    // 0x22ab2c: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x22ab2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
    // 0x22ab30: 0x26230020  addiu       $v1, $s1, 0x20
    ctx->pc = 0x22ab30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x22ab34: 0x96420012  lhu         $v0, 0x12($s2)
    ctx->pc = 0x22ab34u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x22ab38: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x22ab38u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x22ab3c: 0x30427ff6  andi        $v0, $v0, 0x7FF6
    ctx->pc = 0x22ab3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32758);
    // 0x22ab40: 0x16960005  bne         $s4, $s6, . + 4 + (0x5 << 2)
    ctx->pc = 0x22AB40u;
    {
        const bool branch_taken_0x22ab40 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 22));
        ctx->pc = 0x22AB44u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AB40u;
        // 0x22ab44: 0xa6220012  sh          $v0, 0x12($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ab40) {
            ctx->pc = 0x22AB58u;
            goto label_22ab58;
        }
    }
    ctx->pc = 0x22AB48u;
    // 0x22ab48: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x22ab48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x22ab4c: 0x5e1023  subu        $v0, $v0, $fp
    ctx->pc = 0x22ab4cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 30)));
    // 0x22ab50: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x22AB50u;
    {
        const bool branch_taken_0x22ab50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AB54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AB50u;
        // 0x22ab54: 0xae220018  sw          $v0, 0x18($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ab50) {
            ctx->pc = 0x22AB5Cu;
            goto label_22ab5c;
        }
    }
    ctx->pc = 0x22AB58u;
label_22ab58:
    // 0x22ab58: 0xae340018  sw          $s4, 0x18($s1)
    ctx->pc = 0x22ab58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 20));
label_22ab5c:
    // 0x22ab5c: 0xafa00008  sw          $zero, 0x8($sp)
    ctx->pc = 0x22ab5cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 0));
    // 0x22ab60: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x22ab60u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
label_22ab64:
    // 0x22ab64: 0x533023  subu        $a2, $v0, $s3
    ctx->pc = 0x22ab64u;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x22ab68: 0x286182b  sltu        $v1, $s4, $a2
    ctx->pc = 0x22ab68u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 20) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x22ab6c: 0x283300b  movn        $a2, $s4, $v1
    ctx->pc = 0x22ab6cu;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 20));
    // 0x22ab70: 0xae26000c  sw          $a2, 0xC($s1)
    ctx->pc = 0x22ab70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 6));
    // 0x22ab74: 0x96420012  lhu         $v0, 0x12($s2)
    ctx->pc = 0x22ab74u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x22ab78: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22ab78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22ab7c: 0x10400058  beqz        $v0, . + 4 + (0x58 << 2)
    ctx->pc = 0x22AB7Cu;
    {
        const bool branch_taken_0x22ab7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AB80u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AB7Cu;
        // 0x22ab80: 0x8fa30004  lw          $v1, 0x4($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 4)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ab7c) {
            ctx->pc = 0x22ACE0u;
            goto label_22ace0;
        }
    }
    ctx->pc = 0x22AB84u;
    // 0x22ab84: 0x14600022  bnez        $v1, . + 4 + (0x22 << 2)
    ctx->pc = 0x22AB84u;
    {
        const bool branch_taken_0x22ab84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ab84) {
            ctx->pc = 0x22AC10u;
            goto label_22ac10;
        }
    }
    ctx->pc = 0x22AB8Cu;
    // 0x22ab8c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x22ab8cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x22ab90: 0x531021  addu        $v0, $v0, $s3
    ctx->pc = 0x22ab90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 19)));
    // 0x22ab94: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x22ab94u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x22ab98: 0x6a440027  ldl         $a0, 0x27($s2)
    ctx->pc = 0x22ab98u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x22ab9c: 0x6e440020  ldr         $a0, 0x20($s2)
    ctx->pc = 0x22ab9cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x22aba0: 0x6a45002f  ldl         $a1, 0x2F($s2)
    ctx->pc = 0x22aba0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x22aba4: 0x6e450028  ldr         $a1, 0x28($s2)
    ctx->pc = 0x22aba4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x22aba8: 0x6a420037  ldl         $v0, 0x37($s2)
    ctx->pc = 0x22aba8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x22abac: 0x6e420030  ldr         $v0, 0x30($s2)
    ctx->pc = 0x22abacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x22abb0: 0x8e430038  lw          $v1, 0x38($s2)
    ctx->pc = 0x22abb0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x22abb4: 0xb2240027  sdl         $a0, 0x27($s1)
    ctx->pc = 0x22abb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22abb8: 0xb6240020  sdr         $a0, 0x20($s1)
    ctx->pc = 0x22abb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22abbc: 0xb225002f  sdl         $a1, 0x2F($s1)
    ctx->pc = 0x22abbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22abc0: 0xb6250028  sdr         $a1, 0x28($s1)
    ctx->pc = 0x22abc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22abc4: 0xb2220037  sdl         $v0, 0x37($s1)
    ctx->pc = 0x22abc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22abc8: 0xb6220030  sdr         $v0, 0x30($s1)
    ctx->pc = 0x22abc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22abcc: 0xc08c682  jal         func_231A08
    ctx->pc = 0x22ABCCu;
    SET_GPR_U32(ctx, 31, 0x22ABD4u);
    ctx->pc = 0x22ABD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ABCCu;
    // 0x22abd0: 0xae230038  sw          $v1, 0x38($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x22ABCCu, 0x22ABD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ABD4u;
label_22abd4:
    // 0x22abd4: 0x96430012  lhu         $v1, 0x12($s2)
    ctx->pc = 0x22abd4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x22abd8: 0x96240012  lhu         $a0, 0x12($s1)
    ctx->pc = 0x22abd8u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x22abdc: 0x30630009  andi        $v1, $v1, 0x9
    ctx->pc = 0x22abdcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)9);
    // 0x22abe0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x22abe0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x22abe4: 0xa6240012  sh          $a0, 0x12($s1)
    ctx->pc = 0x22abe4u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 4));
    // 0x22abe8: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x22abe8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x22abec: 0xae320038  sw          $s2, 0x38($s1)
    ctx->pc = 0x22abecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 18));
    // 0x22abf0: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x22abf0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x22abf4: 0xae510034  sw          $s1, 0x34($s2)
    ctx->pc = 0x22abf4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 17));
    // 0x22abf8: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x22abf8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x22abfc: 0xac710038  sw          $s1, 0x38($v1)
    ctx->pc = 0x22abfcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 17));
    // 0x22ac00: 0xc08c698  jal         func_231A60
    ctx->pc = 0x22AC00u;
    SET_GPR_U32(ctx, 31, 0x22AC08u);
    ctx->pc = 0x22AC04u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AC00u;
    // 0x22ac04: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x22AC00u, 0x22AC08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AC08u;
label_22ac08:
    // 0x22ac08: 0x10000039  b           . + 4 + (0x39 << 2)
    ctx->pc = 0x22AC08u;
    {
        const bool branch_taken_0x22ac08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ac08) {
            ctx->pc = 0x22ACF0u;
            goto label_22acf0;
        }
    }
    ctx->pc = 0x22AC10u;
label_22ac10:
    // 0x22ac10: 0xc08c682  jal         func_231A08
    ctx->pc = 0x22AC10u;
    SET_GPR_U32(ctx, 31, 0x22AC18u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x22AC10u, 0x22AC18u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AC18u;
label_22ac18:
    // 0x22ac18: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22ac18u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ac1c: 0xc098552  jal         func_261548
    ctx->pc = 0x22AC1Cu;
    SET_GPR_U32(ctx, 31, 0x22AC24u);
    ctx->pc = 0x22AC20u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AC1Cu;
    // 0x22ac20: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x22AC1Cu, 0x22AC24u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AC24u;
label_22ac24:
    // 0x22ac24: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22AC24u;
    {
        const bool branch_taken_0x22ac24 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x22AC28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AC24u;
        // 0x22ac28: 0xae220020  sw          $v0, 0x20($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ac24) {
            ctx->pc = 0x22AC40u;
            goto label_22ac40;
        }
    }
    ctx->pc = 0x22AC2Cu;
    // 0x22ac2c: 0xc08a8ec  jal         func_22A3B0
    ctx->pc = 0x22AC2Cu;
    SET_GPR_U32(ctx, 31, 0x22AC34u);
    ctx->pc = 0x22AC30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AC2Cu;
    // 0x22ac30: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A3B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A3B0u, 0x22AC2Cu, 0x22AC34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AC34u;
label_22ac34:
    // 0x22ac34: 0xc098552  jal         func_261548
    ctx->pc = 0x22AC34u;
    SET_GPR_U32(ctx, 31, 0x22AC3Cu);
    ctx->pc = 0x22AC38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AC34u;
    // 0x22ac38: 0x24040800  addiu       $a0, $zero, 0x800 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x22AC34u, 0x22AC3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AC3Cu;
label_22ac3c:
    // 0x22ac3c: 0xae220020  sw          $v0, 0x20($s1)
    ctx->pc = 0x22ac3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 32), GPR_U32(ctx, 2));
label_22ac40:
    // 0x22ac40: 0xc08c698  jal         func_231A60
    ctx->pc = 0x22AC40u;
    SET_GPR_U32(ctx, 31, 0x22AC48u);
    ctx->pc = 0x22AC44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AC40u;
    // 0x22ac44: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x22AC40u, 0x22AC48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AC48u;
label_22ac48:
    // 0x22ac48: 0x8e240020  lw          $a0, 0x20($s1)
    ctx->pc = 0x22ac48u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 32)));
    // 0x22ac4c: 0x1080000a  beqz        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x22AC4Cu;
    {
        const bool branch_taken_0x22ac4c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AC50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AC4Cu;
        // 0x22ac50: 0x24020800  addiu       $v0, $zero, 0x800 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2048));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ac4c) {
            ctx->pc = 0x22AC78u;
            goto label_22ac78;
        }
    }
    ctx->pc = 0x22AC54u;
    // 0x22ac54: 0x96230012  lhu         $v1, 0x12($s1)
    ctx->pc = 0x22ac54u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x22ac58: 0xae22002c  sw          $v0, 0x2C($s1)
    ctx->pc = 0x22ac58u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 44), GPR_U32(ctx, 2));
    // 0x22ac5c: 0x34630009  ori         $v1, $v1, 0x9
    ctx->pc = 0x22ac5cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)9);
    // 0x22ac60: 0xae240008  sw          $a0, 0x8($s1)
    ctx->pc = 0x22ac60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 4));
    // 0x22ac64: 0xa6230012  sh          $v1, 0x12($s1)
    ctx->pc = 0x22ac64u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x22ac68: 0xae200024  sw          $zero, 0x24($s1)
    ctx->pc = 0x22ac68u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 36), GPR_U32(ctx, 0));
    // 0x22ac6c: 0xae200028  sw          $zero, 0x28($s1)
    ctx->pc = 0x22ac6cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 40), GPR_U32(ctx, 0));
    // 0x22ac70: 0xae310038  sw          $s1, 0x38($s1)
    ctx->pc = 0x22ac70u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 17));
    // 0x22ac74: 0xae310034  sw          $s1, 0x34($s1)
    ctx->pc = 0x22ac74u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 17));
label_22ac78:
    // 0x22ac78: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x22ac78u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x22ac7c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22ac7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22ac80: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x22AC80u;
    {
        const bool branch_taken_0x22ac80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AC84u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AC80u;
        // 0x22ac84: 0xae20000c  sw          $zero, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ac80) {
            ctx->pc = 0x22AC9Cu;
            goto label_22ac9c;
        }
    }
    ctx->pc = 0x22AC88u;
    // 0x22ac88: 0x8e22002c  lw          $v0, 0x2C($s1)
    ctx->pc = 0x22ac88u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 44)));
    // 0x22ac8c: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x22ac8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x22ac90: 0x821021  addu        $v0, $a0, $v0
    ctx->pc = 0x22ac90u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 2)));
    // 0x22ac94: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x22AC94u;
    {
        const bool branch_taken_0x22ac94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AC98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AC94u;
        // 0x22ac98: 0x431823  subu        $v1, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ac94) {
            ctx->pc = 0x22ACA8u;
            goto label_22aca8;
        }
    }
    ctx->pc = 0x22AC9Cu;
label_22ac9c:
    // 0x22ac9c: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x22ac9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x22aca0: 0x2442ff00  addiu       $v0, $v0, -0x100
    ctx->pc = 0x22aca0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967040));
    // 0x22aca4: 0x2221823  subu        $v1, $s1, $v0
    ctx->pc = 0x22aca4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 2)));
label_22aca8:
    // 0x22aca8: 0x74102b  sltu        $v0, $v1, $s4
    ctx->pc = 0x22aca8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x22acac: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x22acacu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x22acb0: 0x282180a  movz        $v1, $s4, $v0
    ctx->pc = 0x22acb0u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 20));
    // 0x22acb4: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x22acb4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x22acb8: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x22acb8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x22acbc: 0xd33023  subu        $a2, $a2, $s3
    ctx->pc = 0x22acbcu;
    SET_GPR_S32(ctx, 6, (int32_t)SUB32(GPR_U32(ctx, 6), GPR_U32(ctx, 19)));
    // 0x22acc0: 0x66102b  sltu        $v0, $v1, $a2
    ctx->pc = 0x22acc0u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 6)) ? 1 : 0);
    // 0x22acc4: 0x62300b  movn        $a2, $v1, $v0
    ctx->pc = 0x22acc4u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 6, GPR_VEC(ctx, 3));
    // 0x22acc8: 0xae26000c  sw          $a2, 0xC($s1)
    ctx->pc = 0x22acc8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 6));
    // 0x22accc: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x22acccu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x22acd0: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x22ACD0u;
    SET_GPR_U32(ctx, 31, 0x22ACD8u);
    ctx->pc = 0x22ACD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ACD0u;
    // 0x22acd4: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x22ACD0u, 0x22ACD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ACD8u;
label_22acd8:
    // 0x22acd8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x22ACD8u;
    {
        const bool branch_taken_0x22acd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x22acd8) {
            ctx->pc = 0x22ACF0u;
            goto label_22acf0;
        }
    }
    ctx->pc = 0x22ACE0u;
label_22ace0:
    // 0x22ace0: 0x8e450008  lw          $a1, 0x8($s2)
    ctx->pc = 0x22ace0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x22ace4: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x22ace4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x22ace8: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x22ACE8u;
    SET_GPR_U32(ctx, 31, 0x22ACF0u);
    ctx->pc = 0x22ACECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ACE8u;
    // 0x22acec: 0xb32821  addu        $a1, $a1, $s3 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 19)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x22ACE8u, 0x22ACF0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ACF0u;
label_22acf0:
    // 0x22acf0: 0x12960002  beq         $s4, $s6, . + 4 + (0x2 << 2)
    ctx->pc = 0x22ACF0u;
    {
        const bool branch_taken_0x22acf0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 22));
        ctx->pc = 0x22ACF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22ACF0u;
        // 0x22acf4: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22acf0) {
            ctx->pc = 0x22ACFCu;
            goto label_22acfc;
        }
    }
    ctx->pc = 0x22ACF8u;
    // 0x22acf8: 0x283a023  subu        $s4, $s4, $v1
    ctx->pc = 0x22acf8u;
    SET_GPR_S32(ctx, 20, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 3)));
label_22acfc:
    // 0x22acfc: 0x8e42000c  lw          $v0, 0xC($s2)
    ctx->pc = 0x22acfcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x22ad00: 0x2639821  addu        $s3, $s3, $v1
    ctx->pc = 0x22ad00u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 3)));
    // 0x22ad04: 0x16620003  bne         $s3, $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x22AD04u;
    {
        const bool branch_taken_0x22ad04 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x22AD08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AD04u;
        // 0x22ad08: 0x220a82d  daddu       $s5, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ad04) {
            ctx->pc = 0x22AD14u;
            goto label_22ad14;
        }
    }
    ctx->pc = 0x22AD0Cu;
    // 0x22ad0c: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x22ad0cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x22ad10: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x22ad10u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_22ad14:
    // 0x22ad14: 0x1a800008  blez        $s4, . + 4 + (0x8 << 2)
    ctx->pc = 0x22AD14u;
    {
        const bool branch_taken_0x22ad14 = (GPR_S32(ctx, 20) <= 0);
        ctx->pc = 0x22AD18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AD14u;
        // 0x22ad18: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ad14) {
            ctx->pc = 0x22AD38u;
            goto label_22ad38;
        }
    }
    ctx->pc = 0x22AD1Cu;
    // 0x22ad1c: 0x1640ff69  bnez        $s2, . + 4 + (-0x97 << 2)
    ctx->pc = 0x22AD1Cu;
    {
        const bool branch_taken_0x22ad1c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ad1c) {
            ctx->pc = 0x22AAC4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22aac4;
        }
    }
    ctx->pc = 0x22AD24u;
    // 0x22ad24: 0x12960003  beq         $s4, $s6, . + 4 + (0x3 << 2)
    ctx->pc = 0x22AD24u;
    {
        const bool branch_taken_0x22ad24 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 22));
        ctx->pc = 0x22AD28u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AD24u;
        // 0x22ad28: 0x3c04003f  lui         $a0, 0x3F (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ad24) {
            ctx->pc = 0x22AD34u;
            goto label_22ad34;
        }
    }
    ctx->pc = 0x22AD2Cu;
    // 0x22ad2c: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x22AD2Cu;
    SET_GPR_U32(ctx, 31, 0x22AD34u);
    ctx->pc = 0x22AD30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AD2Cu;
    // 0x22ad30: 0x24844598  addiu       $a0, $a0, 0x4598 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17816));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D780u, 0x22AD2Cu, 0x22AD34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AD34u;
label_22ad34:
    // 0x22ad34: 0x8fa40000  lw          $a0, 0x0($sp)
    ctx->pc = 0x22ad34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
label_22ad38:
    // 0x22ad38: 0x5480000e  bnel        $a0, $zero, . + 4 + (0xE << 2)
    ctx->pc = 0x22AD38u;
    {
        const bool branch_taken_0x22ad38 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x22ad38) {
            ctx->pc = 0x22AD3Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22AD38u;
            // 0x22ad3c: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
            SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22AD74u;
            goto label_22ad74;
        }
    }
    ctx->pc = 0x22AD40u;
    // 0x22ad40: 0x3c0301c1  lui         $v1, 0x1C1
    ctx->pc = 0x22ad40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)449 << 16));
    // 0x22ad44: 0x8c62a7a8  lw          $v0, -0x5858($v1)
    ctx->pc = 0x22ad44u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294944680)));
    // 0x22ad48: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x22ad48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x22ad4c: 0xac62a7a8  sw          $v0, -0x5858($v1)
    ctx->pc = 0x22ad4cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294944680), GPR_U32(ctx, 2));
    // 0x22ad50: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x22AD50u;
    {
        const bool branch_taken_0x22ad50 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AD54u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AD50u;
        // 0x22ad54: 0x80102d  daddu       $v0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22ad50) {
            ctx->pc = 0x22AD74u;
            goto label_22ad74;
        }
    }
    ctx->pc = 0x22AD58u;
label_22ad58:
    // 0x22ad58: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x22AD58u;
    SET_GPR_U32(ctx, 31, 0x22AD60u);
    ctx->pc = 0x22AD5Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AD58u;
    // 0x22ad5c: 0x8fa40000  lw          $a0, 0x0($sp) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x22AD58u, 0x22AD60u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AD60u;
label_22ad60:
    // 0x22ad60: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x22ad60u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x22ad64: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22ad64u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ad68: 0x8c83a7a8  lw          $v1, -0x5858($a0)
    ctx->pc = 0x22ad68u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294944680)));
    // 0x22ad6c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22ad6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x22ad70: 0xac83a7a8  sw          $v1, -0x5858($a0)
    ctx->pc = 0x22ad70u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294944680), GPR_U32(ctx, 3));
label_22ad74:
    // 0x22ad74: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x22ad74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x22ad78: 0xdfbe0090  ld          $fp, 0x90($sp)
    ctx->pc = 0x22ad78u;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x22ad7c: 0xdfb70080  ld          $s7, 0x80($sp)
    ctx->pc = 0x22ad7cu;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x22ad80: 0xdfb60070  ld          $s6, 0x70($sp)
    ctx->pc = 0x22ad80u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x22ad84: 0xdfb50060  ld          $s5, 0x60($sp)
    ctx->pc = 0x22ad84u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x22ad88: 0xdfb40050  ld          $s4, 0x50($sp)
    ctx->pc = 0x22ad88u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22ad8c: 0xdfb30040  ld          $s3, 0x40($sp)
    ctx->pc = 0x22ad8cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22ad90: 0xdfb20030  ld          $s2, 0x30($sp)
    ctx->pc = 0x22ad90u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22ad94: 0xdfb10020  ld          $s1, 0x20($sp)
    ctx->pc = 0x22ad94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22ad98: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x22ad98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22ad9c: 0x3e00008  jr          $ra
    ctx->pc = 0x22AD9Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22ADA0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AD9Cu;
        // 0x22ada0: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22AD9Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22ADA4u;
    // 0x22ada4: 0x0  nop
    ctx->pc = 0x22ada4u;
    // NOP
    // 0x22ada8: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x22ada8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x22adac: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x22adacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x22adb0: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x22adb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x22adb4: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x22adb4u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22adb8: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x22adb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x22adbc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x22adbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22adc0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x22adc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x22adc4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x22adc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x22adc8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x22adc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x22adcc: 0xc08c682  jal         func_231A08
    ctx->pc = 0x22ADCCu;
    SET_GPR_U32(ctx, 31, 0x22ADD4u);
    ctx->pc = 0x22ADD0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ADCCu;
    // 0x22add0: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x22ADCCu, 0x22ADD4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ADD4u;
label_22add4:
    // 0x22add4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22add4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22add8: 0xc098552  jal         func_261548
    ctx->pc = 0x22ADD8u;
    SET_GPR_U32(ctx, 31, 0x22ADE0u);
    ctx->pc = 0x22ADDCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ADD8u;
    // 0x22addc: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x22ADD8u, 0x22ADE0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ADE0u;
label_22ade0:
    // 0x22ade0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x22ade0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ade4: 0xc08c698  jal         func_231A60
    ctx->pc = 0x22ADE4u;
    SET_GPR_U32(ctx, 31, 0x22ADECu);
    ctx->pc = 0x22ADE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ADE4u;
    // 0x22ade8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x22ADE4u, 0x22ADECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22ADECu;
label_22adec:
    // 0x22adec: 0x56800038  bnel        $s4, $zero, . + 4 + (0x38 << 2)
    ctx->pc = 0x22ADECu;
    {
        const bool branch_taken_0x22adec = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x22adec) {
            ctx->pc = 0x22ADF0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22ADECu;
            // 0x22adf0: 0x96430010  lhu         $v1, 0x10($s2) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22AED0u;
            goto label_22aed0;
        }
    }
    ctx->pc = 0x22ADF4u;
    // 0x22adf4: 0x86450010  lh          $a1, 0x10($s2)
    ctx->pc = 0x22adf4u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x22adf8: 0xc08a8ae  jal         func_22A2B8
    ctx->pc = 0x22ADF8u;
    SET_GPR_U32(ctx, 31, 0x22AE00u);
    ctx->pc = 0x22ADFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22ADF8u;
    // 0x22adfc: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A2B8u, 0x22ADF8u, 0x22AE00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AE00u;
label_22ae00:
    // 0x22ae00: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x22ae00u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ae04: 0x0  nop
    ctx->pc = 0x22ae04u;
    // NOP
label_22ae08:
    // 0x22ae08: 0x280982d  daddu       $s3, $s4, $zero
    ctx->pc = 0x22ae08u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22ae0c: 0x12600083  beqz        $s3, . + 4 + (0x83 << 2)
    ctx->pc = 0x22AE0Cu;
    {
        const bool branch_taken_0x22ae0c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ae0c) {
            ctx->pc = 0x22B01Cu;
            goto label_22b01c;
        }
    }
    ctx->pc = 0x22AE14u;
    // 0x22ae14: 0x6a42001b  ldl         $v0, 0x1B($s2)
    ctx->pc = 0x22ae14u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x22ae18: 0x6e420014  ldr         $v0, 0x14($s2)
    ctx->pc = 0x22ae18u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x22ae1c: 0x8e43001c  lw          $v1, 0x1C($s2)
    ctx->pc = 0x22ae1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x22ae20: 0xb262001b  sdl         $v0, 0x1B($s3)
    ctx->pc = 0x22ae20u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 27); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22ae24: 0xb6620014  sdr         $v0, 0x14($s3)
    ctx->pc = 0x22ae24u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 20); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22ae28: 0xae63001c  sw          $v1, 0x1C($s3)
    ctx->pc = 0x22ae28u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 28), GPR_U32(ctx, 3));
    // 0x22ae2c: 0xae40001c  sw          $zero, 0x1C($s2)
    ctx->pc = 0x22ae2cu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 28), GPR_U32(ctx, 0));
    // 0x22ae30: 0x26640020  addiu       $a0, $s3, 0x20
    ctx->pc = 0x22ae30u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 19), 32));
    // 0x22ae34: 0x96420012  lhu         $v0, 0x12($s2)
    ctx->pc = 0x22ae34u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x22ae38: 0xae640008  sw          $a0, 0x8($s3)
    ctx->pc = 0x22ae38u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 4));
    // 0x22ae3c: 0x30427ff6  andi        $v0, $v0, 0x7FF6
    ctx->pc = 0x22ae3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)32758);
    // 0x22ae40: 0xa6620012  sh          $v0, 0x12($s3)
    ctx->pc = 0x22ae40u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 18), (uint16_t)GPR_U32(ctx, 2));
    // 0x22ae44: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x22ae44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x22ae48: 0xae66000c  sw          $a2, 0xC($s3)
    ctx->pc = 0x22ae48u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 12), GPR_U32(ctx, 6));
    // 0x22ae4c: 0x96420012  lhu         $v0, 0x12($s2)
    ctx->pc = 0x22ae4cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x22ae50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22ae50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22ae54: 0x10400025  beqz        $v0, . + 4 + (0x25 << 2)
    ctx->pc = 0x22AE54u;
    {
        const bool branch_taken_0x22ae54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x22ae54) {
            ctx->pc = 0x22AEECu;
            goto label_22aeec;
        }
    }
    ctx->pc = 0x22AE5Cu;
    // 0x22ae5c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x22ae5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x22ae60: 0xae620008  sw          $v0, 0x8($s3)
    ctx->pc = 0x22ae60u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 8), GPR_U32(ctx, 2));
    // 0x22ae64: 0x6a420027  ldl         $v0, 0x27($s2)
    ctx->pc = 0x22ae64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x22ae68: 0x6e420020  ldr         $v0, 0x20($s2)
    ctx->pc = 0x22ae68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x22ae6c: 0x6a43002f  ldl         $v1, 0x2F($s2)
    ctx->pc = 0x22ae6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x22ae70: 0x6e430028  ldr         $v1, 0x28($s2)
    ctx->pc = 0x22ae70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x22ae74: 0x6a440037  ldl         $a0, 0x37($s2)
    ctx->pc = 0x22ae74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x22ae78: 0x6e440030  ldr         $a0, 0x30($s2)
    ctx->pc = 0x22ae78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x22ae7c: 0x8e450038  lw          $a1, 0x38($s2)
    ctx->pc = 0x22ae7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x22ae80: 0xb2620027  sdl         $v0, 0x27($s3)
    ctx->pc = 0x22ae80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22ae84: 0xb6620020  sdr         $v0, 0x20($s3)
    ctx->pc = 0x22ae84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22ae88: 0xb263002f  sdl         $v1, 0x2F($s3)
    ctx->pc = 0x22ae88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22ae8c: 0xb6630028  sdr         $v1, 0x28($s3)
    ctx->pc = 0x22ae8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22ae90: 0xb2640037  sdl         $a0, 0x37($s3)
    ctx->pc = 0x22ae90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22ae94: 0xb6640030  sdr         $a0, 0x30($s3)
    ctx->pc = 0x22ae94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 19), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22ae98: 0xc08c682  jal         func_231A08
    ctx->pc = 0x22AE98u;
    SET_GPR_U32(ctx, 31, 0x22AEA0u);
    ctx->pc = 0x22AE9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AE98u;
    // 0x22ae9c: 0xae650038  sw          $a1, 0x38($s3) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x22AE98u, 0x22AEA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AEA0u;
label_22aea0:
    // 0x22aea0: 0x96430012  lhu         $v1, 0x12($s2)
    ctx->pc = 0x22aea0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x22aea4: 0x96640012  lhu         $a0, 0x12($s3)
    ctx->pc = 0x22aea4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 18)));
    // 0x22aea8: 0x30630009  andi        $v1, $v1, 0x9
    ctx->pc = 0x22aea8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)9);
    // 0x22aeac: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x22aeacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x22aeb0: 0xa6640012  sh          $a0, 0x12($s3)
    ctx->pc = 0x22aeb0u;
    WRITE16(ADD32(GPR_U32(ctx, 19), 18), (uint16_t)GPR_U32(ctx, 4));
    // 0x22aeb4: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x22aeb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x22aeb8: 0xae720038  sw          $s2, 0x38($s3)
    ctx->pc = 0x22aeb8u;
    WRITE32(ADD32(GPR_U32(ctx, 19), 56), GPR_U32(ctx, 18));
    // 0x22aebc: 0xae630034  sw          $v1, 0x34($s3)
    ctx->pc = 0x22aebcu;
    WRITE32(ADD32(GPR_U32(ctx, 19), 52), GPR_U32(ctx, 3));
    // 0x22aec0: 0xae530034  sw          $s3, 0x34($s2)
    ctx->pc = 0x22aec0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 19));
    // 0x22aec4: 0x8e630034  lw          $v1, 0x34($s3)
    ctx->pc = 0x22aec4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 52)));
    // 0x22aec8: 0x10000041  b           . + 4 + (0x41 << 2)
    ctx->pc = 0x22AEC8u;
    {
        const bool branch_taken_0x22aec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AECCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AEC8u;
        // 0x22aecc: 0xac730038  sw          $s3, 0x38($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 19));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aec8) {
            ctx->pc = 0x22AFD0u;
            goto label_22afd0;
        }
    }
    ctx->pc = 0x22AED0u;
label_22aed0:
    // 0x22aed0: 0x26820014  addiu       $v0, $s4, 0x14
    ctx->pc = 0x22aed0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 20), 20));
    // 0x22aed4: 0xae820008  sw          $v0, 0x8($s4)
    ctx->pc = 0x22aed4u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 8), GPR_U32(ctx, 2));
    // 0x22aed8: 0xa6830010  sh          $v1, 0x10($s4)
    ctx->pc = 0x22aed8u;
    WRITE16(ADD32(GPR_U32(ctx, 20), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x22aedc: 0xae800000  sw          $zero, 0x0($s4)
    ctx->pc = 0x22aedcu;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
    // 0x22aee0: 0xae800004  sw          $zero, 0x4($s4)
    ctx->pc = 0x22aee0u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 4), GPR_U32(ctx, 0));
    // 0x22aee4: 0x1000ffc8  b           . + 4 + (-0x38 << 2)
    ctx->pc = 0x22AEE4u;
    {
        const bool branch_taken_0x22aee4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AEE8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AEE4u;
        // 0x22aee8: 0xa6800012  sh          $zero, 0x12($s4) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 20), 18), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aee4) {
            ctx->pc = 0x22AE08u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22ae08;
        }
    }
    ctx->pc = 0x22AEECu;
label_22aeec:
    // 0x22aeec: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x22AEECu;
    SET_GPR_U32(ctx, 31, 0x22AEF4u);
    ctx->pc = 0x22AEF0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AEECu;
    // 0x22aef0: 0x8e450008  lw          $a1, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x22AEECu, 0x22AEF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AEF4u;
label_22aef4:
    // 0x22aef4: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x22AEF4u;
    {
        const bool branch_taken_0x22aef4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AEF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AEF4u;
        // 0x22aef8: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aef4) {
            ctx->pc = 0x22B00Cu;
            goto label_22b00c;
        }
    }
    ctx->pc = 0x22AEFCu;
    // 0x22aefc: 0x0  nop
    ctx->pc = 0x22aefcu;
    // NOP
label_22af00:
    // 0x22af00: 0xc08c682  jal         func_231A08
    ctx->pc = 0x22AF00u;
    SET_GPR_U32(ctx, 31, 0x22AF08u);
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x22AF00u, 0x22AF08u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AF08u;
label_22af08:
    // 0x22af08: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x22af08u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22af0c: 0xc098552  jal         func_261548
    ctx->pc = 0x22AF0Cu;
    SET_GPR_U32(ctx, 31, 0x22AF14u);
    ctx->pc = 0x22AF10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AF0Cu;
    // 0x22af10: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x22AF0Cu, 0x22AF14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AF14u;
label_22af14:
    // 0x22af14: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22af14u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22af18: 0xc08c698  jal         func_231A60
    ctx->pc = 0x22AF18u;
    SET_GPR_U32(ctx, 31, 0x22AF20u);
    ctx->pc = 0x22AF1Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AF18u;
    // 0x22af1c: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x22AF18u, 0x22AF20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AF20u;
label_22af20:
    // 0x22af20: 0x5620002f  bnel        $s1, $zero, . + 4 + (0x2F << 2)
    ctx->pc = 0x22AF20u;
    {
        const bool branch_taken_0x22af20 = (GPR_U64(ctx, 17) != GPR_U64(ctx, 0));
        if (branch_taken_0x22af20) {
            ctx->pc = 0x22AF24u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x22AF20u;
            // 0x22af24: 0x96430010  lhu         $v1, 0x10($s2) (Delay Slot)
            SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x22AFE0u;
            goto label_22afe0;
        }
    }
    ctx->pc = 0x22AF28u;
    // 0x22af28: 0x86450010  lh          $a1, 0x10($s2)
    ctx->pc = 0x22af28u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 18), 16)));
    // 0x22af2c: 0xc08a8ae  jal         func_22A2B8
    ctx->pc = 0x22AF2Cu;
    SET_GPR_U32(ctx, 31, 0x22AF34u);
    ctx->pc = 0x22AF30u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AF2Cu;
    // 0x22af30: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A2B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A2B8u, 0x22AF2Cu, 0x22AF34u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AF34u;
label_22af34:
    // 0x22af34: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x22af34u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_22af38:
    // 0x22af38: 0x12200038  beqz        $s1, . + 4 + (0x38 << 2)
    ctx->pc = 0x22AF38u;
    {
        const bool branch_taken_0x22af38 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x22af38) {
            ctx->pc = 0x22B01Cu;
            goto label_22b01c;
        }
    }
    ctx->pc = 0x22AF40u;
    // 0x22af40: 0xae910000  sw          $s1, 0x0($s4)
    ctx->pc = 0x22af40u;
    WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 17));
    // 0x22af44: 0x8e46000c  lw          $a2, 0xC($s2)
    ctx->pc = 0x22af44u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 12)));
    // 0x22af48: 0xae26000c  sw          $a2, 0xC($s1)
    ctx->pc = 0x22af48u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 6));
    // 0x22af4c: 0x96420012  lhu         $v0, 0x12($s2)
    ctx->pc = 0x22af4cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x22af50: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x22af50u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x22af54: 0x10400029  beqz        $v0, . + 4 + (0x29 << 2)
    ctx->pc = 0x22AF54u;
    {
        const bool branch_taken_0x22af54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AF58u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AF54u;
        // 0x22af58: 0x220a02d  daddu       $s4, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22af54) {
            ctx->pc = 0x22AFFCu;
            goto label_22affc;
        }
    }
    ctx->pc = 0x22AF5Cu;
    // 0x22af5c: 0x8e420008  lw          $v0, 0x8($s2)
    ctx->pc = 0x22af5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    // 0x22af60: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x22af60u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x22af64: 0x6a420027  ldl         $v0, 0x27($s2)
    ctx->pc = 0x22af64u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x22af68: 0x6e420020  ldr         $v0, 0x20($s2)
    ctx->pc = 0x22af68u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x22af6c: 0x6a43002f  ldl         $v1, 0x2F($s2)
    ctx->pc = 0x22af6cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem << shift)); }
    // 0x22af70: 0x6e430028  ldr         $v1, 0x28($s2)
    ctx->pc = 0x22af70u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 3, (GPR_U64(ctx, 3) & keepMask) | (mem >> shift)); }
    // 0x22af74: 0x6a440037  ldl         $a0, 0x37($s2)
    ctx->pc = 0x22af74u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x22af78: 0x6e440030  ldr         $a0, 0x30($s2)
    ctx->pc = 0x22af78u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x22af7c: 0x8e450038  lw          $a1, 0x38($s2)
    ctx->pc = 0x22af7cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 56)));
    // 0x22af80: 0xb2220027  sdl         $v0, 0x27($s1)
    ctx->pc = 0x22af80u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 39); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22af84: 0xb6220020  sdr         $v0, 0x20($s1)
    ctx->pc = 0x22af84u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 32); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22af88: 0xb223002f  sdl         $v1, 0x2F($s1)
    ctx->pc = 0x22af88u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 47); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22af8c: 0xb6230028  sdr         $v1, 0x28($s1)
    ctx->pc = 0x22af8cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 40); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22af90: 0xb2240037  sdl         $a0, 0x37($s1)
    ctx->pc = 0x22af90u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 55); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22af94: 0xb6240030  sdr         $a0, 0x30($s1)
    ctx->pc = 0x22af94u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 17), 48); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x22af98: 0xc08c682  jal         func_231A08
    ctx->pc = 0x22AF98u;
    SET_GPR_U32(ctx, 31, 0x22AFA0u);
    ctx->pc = 0x22AF9Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AF98u;
    // 0x22af9c: 0xae250038  sw          $a1, 0x38($s1) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x22AF98u, 0x22AFA0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AFA0u;
label_22afa0:
    // 0x22afa0: 0x96430012  lhu         $v1, 0x12($s2)
    ctx->pc = 0x22afa0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 18), 18)));
    // 0x22afa4: 0x96240012  lhu         $a0, 0x12($s1)
    ctx->pc = 0x22afa4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x22afa8: 0x30630009  andi        $v1, $v1, 0x9
    ctx->pc = 0x22afa8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)9);
    // 0x22afac: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x22afacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x22afb0: 0xa6240012  sh          $a0, 0x12($s1)
    ctx->pc = 0x22afb0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 4));
    // 0x22afb4: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x22afb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x22afb8: 0xae320038  sw          $s2, 0x38($s1)
    ctx->pc = 0x22afb8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 18));
    // 0x22afbc: 0xae230034  sw          $v1, 0x34($s1)
    ctx->pc = 0x22afbcu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 3));
    // 0x22afc0: 0xae510034  sw          $s1, 0x34($s2)
    ctx->pc = 0x22afc0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 52), GPR_U32(ctx, 17));
    // 0x22afc4: 0x8e230034  lw          $v1, 0x34($s1)
    ctx->pc = 0x22afc4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x22afc8: 0xac710038  sw          $s1, 0x38($v1)
    ctx->pc = 0x22afc8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 56), GPR_U32(ctx, 17));
    // 0x22afcc: 0x0  nop
    ctx->pc = 0x22afccu;
    // NOP
label_22afd0:
    // 0x22afd0: 0xc08c698  jal         func_231A60
    ctx->pc = 0x22AFD0u;
    SET_GPR_U32(ctx, 31, 0x22AFD8u);
    ctx->pc = 0x22AFD4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22AFD0u;
    // 0x22afd4: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x22AFD0u, 0x22AFD8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22AFD8u;
label_22afd8:
    // 0x22afd8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x22AFD8u;
    {
        const bool branch_taken_0x22afd8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AFDCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AFD8u;
        // 0x22afdc: 0x8e520000  lw          $s2, 0x0($s2) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22afd8) {
            ctx->pc = 0x22B00Cu;
            goto label_22b00c;
        }
    }
    ctx->pc = 0x22AFE0u;
label_22afe0:
    // 0x22afe0: 0x26220014  addiu       $v0, $s1, 0x14
    ctx->pc = 0x22afe0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 20));
    // 0x22afe4: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x22afe4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x22afe8: 0xa6230010  sh          $v1, 0x10($s1)
    ctx->pc = 0x22afe8u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x22afec: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x22afecu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x22aff0: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x22aff0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x22aff4: 0x1000ffd0  b           . + 4 + (-0x30 << 2)
    ctx->pc = 0x22AFF4u;
    {
        const bool branch_taken_0x22aff4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22AFF8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22AFF4u;
        // 0x22aff8: 0xa6200012  sh          $zero, 0x12($s1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22aff4) {
            ctx->pc = 0x22AF38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22af38;
        }
    }
    ctx->pc = 0x22AFFCu;
label_22affc:
    // 0x22affc: 0x8e240008  lw          $a0, 0x8($s1)
    ctx->pc = 0x22affcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x22b000: 0xc08b538  jal         func_22D4E0
    ctx->pc = 0x22B000u;
    SET_GPR_U32(ctx, 31, 0x22B008u);
    ctx->pc = 0x22B004u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B000u;
    // 0x22b004: 0x8e450008  lw          $a1, 0x8($s2) (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 8)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22D4E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22D4E0u, 0x22B000u, 0x22B008u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B008u;
label_22b008:
    // 0x22b008: 0x8e520000  lw          $s2, 0x0($s2)
    ctx->pc = 0x22b008u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_22b00c:
    // 0x22b00c: 0x1640ffbc  bnez        $s2, . + 4 + (-0x44 << 2)
    ctx->pc = 0x22B00Cu;
    {
        const bool branch_taken_0x22b00c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x22B010u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B00Cu;
        // 0x22b010: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b00c) {
            ctx->pc = 0x22AF00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_22af00;
        }
    }
    ctx->pc = 0x22B014u;
    // 0x22b014: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x22B014u;
    {
        const bool branch_taken_0x22b014 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x22B018u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B014u;
        // 0x22b018: 0xdfbf0060  ld          $ra, 0x60($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x22b014) {
            ctx->pc = 0x22B03Cu;
            goto label_22b03c;
        }
    }
    ctx->pc = 0x22B01Cu;
label_22b01c:
    // 0x22b01c: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x22B01Cu;
    SET_GPR_U32(ctx, 31, 0x22B024u);
    ctx->pc = 0x22B020u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x22B01Cu;
    // 0x22b020: 0x260202d  daddu       $a0, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A758u, 0x22B01Cu, 0x22B024u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x22B024u;
label_22b024:
    // 0x22b024: 0x3c0401c1  lui         $a0, 0x1C1
    ctx->pc = 0x22b024u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)449 << 16));
    // 0x22b028: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x22b028u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x22b02c: 0x8c83a7a8  lw          $v1, -0x5858($a0)
    ctx->pc = 0x22b02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294944680)));
    // 0x22b030: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x22b030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x22b034: 0xac83a7a8  sw          $v1, -0x5858($a0)
    ctx->pc = 0x22b034u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294944680), GPR_U32(ctx, 3));
    // 0x22b038: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x22b038u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_22b03c:
    // 0x22b03c: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x22b03cu;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x22b040: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x22b040u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x22b044: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x22b044u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x22b048: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x22b048u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x22b04c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x22b04cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x22b050: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x22b050u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x22b054: 0x3e00008  jr          $ra
    ctx->pc = 0x22B054u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x22B058u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x22B054u;
        // 0x22b058: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x22B054u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x22B05Cu;
    // 0x22b05c: 0x0  nop
    ctx->pc = 0x22b05cu;
    // NOP
    if (ctx->pc == 0x22b05cu) { ctx->pc = 0x22b060u; }
}
