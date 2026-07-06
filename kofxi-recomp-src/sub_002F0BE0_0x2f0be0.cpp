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

// Function: sub_002F0BE0
// Address: 0x2f0be0 - 0x2f0d50
void sub_002F0BE0_0x2f0be0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002F0BE0_0x2f0be0");
#endif

    switch (ctx->pc) {
        case 0x2f0c30u: goto label_2f0c30;
        case 0x2f0c84u: goto label_2f0c84;
        case 0x2f0cecu: goto label_2f0cec;
        case 0x2f0d00u: goto label_2f0d00;
        case 0x2f0d14u: goto label_2f0d14;
        default: break;
    }

    ctx->pc = 0x2f0be0u;

    // 0x2f0be0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2f0be0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2f0be4: 0x3c0f003c  lui         $t7, 0x3C
    ctx->pc = 0x2f0be4u;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)60 << 16));
    // 0x2f0be8: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2f0be8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2f0bec: 0x25edeca8  addiu       $t5, $t7, -0x1358
    ctx->pc = 0x2f0becu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 4294962344));
    // 0x2f0bf0: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x2f0bf0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x2f0bf4: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2f0bf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2f0bf8: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x2f0bf8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0bfc: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2f0bfcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2f0c00: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2f0c00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2f0c04: 0xffb50028  sd          $s5, 0x28($sp)
    ctx->pc = 0x2f0c04u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 21));
    // 0x2f0c08: 0xffb60030  sd          $s6, 0x30($sp)
    ctx->pc = 0x2f0c08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 22));
    // 0x2f0c0c: 0xffbf0038  sd          $ra, 0x38($sp)
    ctx->pc = 0x2f0c0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 56), GPR_U64(ctx, 31));
    // 0x2f0c10: 0x8db00078  lw          $s0, 0x78($t5)
    ctx->pc = 0x2f0c10u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 13), 120)));
    // 0x2f0c14: 0x16000014  bnez        $s0, . + 4 + (0x14 << 2)
    ctx->pc = 0x2F0C14u;
    {
        const bool branch_taken_0x2f0c14 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x2F0C18u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C14u;
        // 0x2f0c18: 0xa02d  daddu       $s4, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0c14) {
            ctx->pc = 0x2F0C68u;
            goto label_2f0c68;
        }
    }
    ctx->pc = 0x2F0C1Cu;
    // 0x2f0c1c: 0x3c07ffff  lui         $a3, 0xFFFF
    ctx->pc = 0x2f0c1cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)65535 << 16));
    // 0x2f0c20: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f0c20u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0c24: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x2f0c24u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x2f0c28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f0c28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f0c2c: 0x3c080040  lui         $t0, 0x40
    ctx->pc = 0x2f0c2cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)64 << 16));
label_2f0c30:
    // 0x2f0c30: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f0c30u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f0c34: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2f0c34u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f0c38: 0x24841788  addiu       $a0, $a0, 0x1788
    ctx->pc = 0x2f0c38u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 6024));
    // 0x2f0c3c: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2f0c3cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f0c40: 0x250817a8  addiu       $t0, $t0, 0x17A8
    ctx->pc = 0x2f0c40u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 6056));
    // 0x2f0c44: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2f0c44u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f0c48: 0x24050e1c  addiu       $a1, $zero, 0xE1C
    ctx->pc = 0x2f0c48u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3612));
    // 0x2f0c4c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2f0c4cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f0c50: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x2f0c50u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2f0c54: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2f0c54u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2f0c58: 0x34e763bd  ori         $a3, $a3, 0x63BD
    ctx->pc = 0x2f0c58u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | (uint64_t)(uint16_t)25533);
    // 0x2f0c5c: 0x80bc73e  j           func_2F1CF8
    ctx->pc = 0x2F0C5Cu;
    ctx->pc = 0x2F0C60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0C5Cu;
    // 0x2f0c60: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F1CF8u;
    sub_002F1CF8_0x2f1cf8(rdram, ctx, runtime); return;
    ctx->pc = 0x2F0C64u;
    // 0x2f0c64: 0x0  nop
    ctx->pc = 0x2f0c64u;
    // NOP
label_2f0c68:
    // 0x2f0c68: 0x920e0003  lbu         $t6, 0x3($s0)
    ctx->pc = 0x2f0c68u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x2f0c6c: 0x240f0004  addiu       $t7, $zero, 0x4
    ctx->pc = 0x2f0c6cu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x2f0c70: 0x11ee002b  beq         $t7, $t6, . + 4 + (0x2B << 2)
    ctx->pc = 0x2F0C70u;
    {
        const bool branch_taken_0x2f0c70 = (GPR_U64(ctx, 15) == GPR_U64(ctx, 14));
        ctx->pc = 0x2F0C74u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0C70u;
        // 0x2f0c74: 0x1a0a82d  daddu       $s5, $t5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 13) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0c70) {
            ctx->pc = 0x2F0D20u;
            goto label_2f0d20;
        }
    }
    ctx->pc = 0x2F0C78u;
    // 0x2f0c78: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x2f0c78u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0c7c: 0x2416fff0  addiu       $s6, $zero, -0x10
    ctx->pc = 0x2f0c7cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967280));
    // 0x2f0c80: 0x24120004  addiu       $s2, $zero, 0x4
    ctx->pc = 0x2f0c80u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
label_2f0c84:
    // 0x2f0c84: 0x31cf00ff  andi        $t7, $t6, 0xFF
    ctx->pc = 0x2f0c84u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)255);
    // 0x2f0c88: 0x55f3001f  bnel        $t7, $s3, . + 4 + (0x1F << 2)
    ctx->pc = 0x2F0C88u;
    {
        const bool branch_taken_0x2f0c88 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 19));
        if (branch_taken_0x2f0c88) {
            ctx->pc = 0x2F0C8Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0C88u;
            // 0x2f0c8c: 0x92050001  lbu         $a1, 0x1($s0) (Delay Slot)
            SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0D08u;
            goto label_2f0d08;
        }
    }
    ctx->pc = 0x2F0C90u;
    // 0x2f0c90: 0x920e0002  lbu         $t6, 0x2($s0)
    ctx->pc = 0x2f0c90u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x2f0c94: 0x8eaf00b0  lw          $t7, 0xB0($s5)
    ctx->pc = 0x2f0c94u;
    SET_GPR_S32(ctx, 15, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 176)));
    // 0x2f0c98: 0x55cf001b  bnel        $t6, $t7, . + 4 + (0x1B << 2)
    ctx->pc = 0x2F0C98u;
    {
        const bool branch_taken_0x2f0c98 = (GPR_U64(ctx, 14) != GPR_U64(ctx, 15));
        if (branch_taken_0x2f0c98) {
            ctx->pc = 0x2F0C9Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x2F0C98u;
            // 0x2f0c9c: 0x92050001  lbu         $a1, 0x1($s0) (Delay Slot)
            SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x2F0D08u;
            goto label_2f0d08;
        }
    }
    ctx->pc = 0x2F0CA0u;
    // 0x2f0ca0: 0xa2000003  sb          $zero, 0x3($s0)
    ctx->pc = 0x2f0ca0u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x2f0ca4: 0x26240001  addiu       $a0, $s1, 0x1
    ctx->pc = 0x2f0ca4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x2f0ca8: 0x920d0000  lbu         $t5, 0x0($s0)
    ctx->pc = 0x2f0ca8u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2f0cac: 0x26050004  addiu       $a1, $s0, 0x4
    ctx->pc = 0x2f0cacu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x2f0cb0: 0x922e0000  lbu         $t6, 0x0($s1)
    ctx->pc = 0x2f0cb0u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f0cb4: 0x920f0001  lbu         $t7, 0x1($s0)
    ctx->pc = 0x2f0cb4u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2f0cb8: 0x31ad000f  andi        $t5, $t5, 0xF
    ctx->pc = 0x2f0cb8u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)15);
    // 0x2f0cbc: 0x1d67024  and         $t6, $t6, $s6
    ctx->pc = 0x2f0cbcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 22));
    // 0x2f0cc0: 0x1cd7025  or          $t6, $t6, $t5
    ctx->pc = 0x2f0cc0u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x2f0cc4: 0x25ef0001  addiu       $t7, $t7, 0x1
    ctx->pc = 0x2f0cc4u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 1));
    // 0x2f0cc8: 0xa22e0000  sb          $t6, 0x0($s1)
    ctx->pc = 0x2f0cc8u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 14));
    // 0x2f0ccc: 0x28fa021  addu        $s4, $s4, $t7
    ctx->pc = 0x2f0cccu;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), GPR_U32(ctx, 15)));
    // 0x2f0cd0: 0x920f0001  lbu         $t7, 0x1($s0)
    ctx->pc = 0x2f0cd0u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    // 0x2f0cd4: 0x31ce000f  andi        $t6, $t6, 0xF
    ctx->pc = 0x2f0cd4u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & (uint64_t)(uint16_t)15);
    // 0x2f0cd8: 0xf7900  sll         $t7, $t7, 4
    ctx->pc = 0x2f0cd8u;
    SET_GPR_S32(ctx, 15, (int32_t)SLL32(GPR_U32(ctx, 15), 4));
    // 0x2f0cdc: 0x1cf7025  or          $t6, $t6, $t7
    ctx->pc = 0x2f0cdcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 15));
    // 0x2f0ce0: 0xa22e0000  sb          $t6, 0x0($s1)
    ctx->pc = 0x2f0ce0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 14));
    // 0x2f0ce4: 0xc049c48  jal         func_127120
    ctx->pc = 0x2F0CE4u;
    SET_GPR_U32(ctx, 31, 0x2F0CECu);
    ctx->pc = 0x2F0CE8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0CE4u;
    // 0x2f0ce8: 0x92060001  lbu         $a2, 0x1($s0) (Delay Slot)
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x127120u, 0x2F0CE4u, 0x2F0CECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0CECu;
label_2f0cec:
    // 0x2f0cec: 0x92250000  lbu         $a1, 0x0($s1)
    ctx->pc = 0x2f0cecu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x2f0cf0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2f0cf0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0cf4: 0x24060001  addiu       $a2, $zero, 0x1
    ctx->pc = 0x2f0cf4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2f0cf8: 0xc0bc19a  jal         func_2F0668
    ctx->pc = 0x2F0CF8u;
    SET_GPR_U32(ctx, 31, 0x2F0D00u);
    ctx->pc = 0x2F0CFCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0CF8u;
    // 0x2f0cfc: 0x52902  srl         $a1, $a1, 4 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0668u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0668u, 0x2F0CF8u, 0x2F0D00u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0D00u;
label_2f0d00:
    // 0x2f0d00: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2f0d00u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0d04: 0x92050001  lbu         $a1, 0x1($s0)
    ctx->pc = 0x2f0d04u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 1)));
label_2f0d08:
    // 0x2f0d08: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2f0d08u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0d0c: 0xc0bc19e  jal         func_2F0678
    ctx->pc = 0x2F0D0Cu;
    SET_GPR_U32(ctx, 31, 0x2F0D14u);
    ctx->pc = 0x2F0D10u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2F0D0Cu;
    // 0x2f0d10: 0x24060004  addiu       $a2, $zero, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2F0678u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2F0678u, 0x2F0D0Cu, 0x2F0D14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2F0D14u;
label_2f0d14:
    // 0x2f0d14: 0x904e0003  lbu         $t6, 0x3($v0)
    ctx->pc = 0x2f0d14u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
    // 0x2f0d18: 0x164effda  bne         $s2, $t6, . + 4 + (-0x26 << 2)
    ctx->pc = 0x2F0D18u;
    {
        const bool branch_taken_0x2f0d18 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 14));
        ctx->pc = 0x2F0D1Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0D18u;
        // 0x2f0d1c: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2f0d18) {
            ctx->pc = 0x2F0C84u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2f0c84;
        }
    }
    ctx->pc = 0x2F0D20u;
label_2f0d20:
    // 0x2f0d20: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x2f0d20u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2f0d24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2f0d24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2f0d28: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2f0d28u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x2f0d2c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2f0d2cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2f0d30: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2f0d30u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2f0d34: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x2f0d34u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2f0d38: 0xdfb50028  ld          $s5, 0x28($sp)
    ctx->pc = 0x2f0d38u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x2f0d3c: 0xdfb60030  ld          $s6, 0x30($sp)
    ctx->pc = 0x2f0d3cu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x2f0d40: 0xdfbf0038  ld          $ra, 0x38($sp)
    ctx->pc = 0x2f0d40u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 56)));
    // 0x2f0d44: 0x3e00008  jr          $ra
    ctx->pc = 0x2F0D44u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2F0D48u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2F0D44u;
        // 0x2f0d48: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2F0D44u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2F0D4Cu;
    // 0x2f0d4c: 0x0  nop
    ctx->pc = 0x2f0d4cu;
    // NOP
}
