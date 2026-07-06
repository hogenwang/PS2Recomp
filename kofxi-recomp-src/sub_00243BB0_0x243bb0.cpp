#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00243BB0
// Address: 0x243bb0 - 0x243d88
void sub_00243BB0_0x243bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00243BB0_0x243bb0");
#endif

    switch (ctx->pc) {
        case 0x243c6cu: goto label_243c6c;
        case 0x243c88u: goto label_243c88;
        case 0x243c90u: goto label_243c90;
        case 0x243c98u: goto label_243c98;
        case 0x243cbcu: goto label_243cbc;
        case 0x243cd0u: goto label_243cd0;
        case 0x243cd8u: goto label_243cd8;
        case 0x243d18u: goto label_243d18;
        default: break;
    }

    ctx->pc = 0x243bb0u;

    // 0x243bb0: 0x27bdff70  addiu       $sp, $sp, -0x90
    ctx->pc = 0x243bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967152));
    // 0x243bb4: 0xffb70070  sd          $s7, 0x70($sp)
    ctx->pc = 0x243bb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 23));
    // 0x243bb8: 0xffb60060  sd          $s6, 0x60($sp)
    ctx->pc = 0x243bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 22));
    // 0x243bbc: 0xc0b82d  daddu       $s7, $a2, $zero
    ctx->pc = 0x243bbcu;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243bc0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x243bc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x243bc4: 0xa0b02d  daddu       $s6, $a1, $zero
    ctx->pc = 0x243bc4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243bc8: 0xffbf0080  sd          $ra, 0x80($sp)
    ctx->pc = 0x243bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 31));
    // 0x243bcc: 0xffb50050  sd          $s5, 0x50($sp)
    ctx->pc = 0x243bccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 21));
    // 0x243bd0: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x243bd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x243bd4: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x243bd4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x243bd8: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x243bd8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x243bdc: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x243bdcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x243be0: 0x92c20000  lbu         $v0, 0x0($s6)
    ctx->pc = 0x243be0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 22), 0)));
    // 0x243be4: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x243BE4u;
    {
        const bool branch_taken_0x243be4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243BE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243BE4u;
            // 0x243be8: 0x80882d  daddu       $s1, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243be4) {
            ctx->pc = 0x243BFCu;
            goto label_243bfc;
        }
    }
    ctx->pc = 0x243BECu;
    // 0x243bec: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x243becu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x243bf0: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x243bf0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x243bf4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x243BF4u;
    {
        const bool branch_taken_0x243bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243BF4u;
            // 0x243bf8: 0x24550001  addiu       $s5, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243bf4) {
            ctx->pc = 0x243C00u;
            goto label_243c00;
        }
    }
    ctx->pc = 0x243BFCu;
label_243bfc:
    // 0x243bfc: 0x24150008  addiu       $s5, $zero, 0x8
    ctx->pc = 0x243bfcu;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_243c00:
    // 0x243c00: 0x92e20000  lbu         $v0, 0x0($s7)
    ctx->pc = 0x243c00u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 23), 0)));
    // 0x243c04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x243C04u;
    {
        const bool branch_taken_0x243c04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243C04u;
            // 0x243c08: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243c04) {
            ctx->pc = 0x243C18u;
            goto label_243c18;
        }
    }
    ctx->pc = 0x243C0Cu;
    // 0x243c0c: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x243c0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x243c10: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x243C10u;
    {
        const bool branch_taken_0x243c10 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243C14u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243C10u;
            // 0x243c14: 0x24530001  addiu       $s3, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243c10) {
            ctx->pc = 0x243C1Cu;
            goto label_243c1c;
        }
    }
    ctx->pc = 0x243C18u;
label_243c18:
    // 0x243c18: 0x24130008  addiu       $s3, $zero, 0x8
    ctx->pc = 0x243c18u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_243c1c:
    // 0x243c1c: 0x8e230030  lw          $v1, 0x30($s1)
    ctx->pc = 0x243c1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 48)));
    // 0x243c20: 0x1060000f  beqz        $v1, . + 4 + (0xF << 2)
    ctx->pc = 0x243C20u;
    {
        const bool branch_taken_0x243c20 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x243C24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243C20u;
            // 0x243c24: 0x2b39021  addu        $s2, $s5, $s3 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243c20) {
            ctx->pc = 0x243C60u;
            goto label_243c60;
        }
    }
    ctx->pc = 0x243C28u;
    // 0x243c28: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x243c28u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x243c2c: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x243C2Cu;
    {
        const bool branch_taken_0x243c2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243C2Cu;
            // 0x243c30: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243c2c) {
            ctx->pc = 0x243C50u;
            goto label_243c50;
        }
    }
    ctx->pc = 0x243C34u;
    // 0x243c34: 0x34420007  ori         $v0, $v0, 0x7
    ctx->pc = 0x243c34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)7);
    // 0x243c38: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x243c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x243c3c: 0x53102b  sltu        $v0, $v0, $s3
    ctx->pc = 0x243c3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 19)) ? 1 : 0);
    // 0x243c40: 0x54400008  bnel        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x243C40u;
    {
        const bool branch_taken_0x243c40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x243c40) {
            ctx->pc = 0x243C44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x243C40u;
            // 0x243c44: 0x8e34000c  lw          $s4, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x243C64u;
            goto label_243c64;
        }
    }
    ctx->pc = 0x243C48u;
    // 0x243c48: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x243C48u;
    {
        const bool branch_taken_0x243c48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243C48u;
            // 0x243c4c: 0x8e30000c  lw          $s0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243c48) {
            ctx->pc = 0x243CA0u;
            goto label_243ca0;
        }
    }
    ctx->pc = 0x243C50u;
label_243c50:
    // 0x243c50: 0x2e620009  sltiu       $v0, $s3, 0x9
    ctx->pc = 0x243c50u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 19) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x243c54: 0x54400012  bnel        $v0, $zero, . + 4 + (0x12 << 2)
    ctx->pc = 0x243C54u;
    {
        const bool branch_taken_0x243c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x243c54) {
            ctx->pc = 0x243C58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x243C54u;
            // 0x243c58: 0x8e30000c  lw          $s0, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x243CA0u;
            goto label_243ca0;
        }
    }
    ctx->pc = 0x243C5Cu;
    // 0x243c5c: 0x2b39021  addu        $s2, $s5, $s3
    ctx->pc = 0x243c5cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 21), GPR_U32(ctx, 19)));
label_243c60:
    // 0x243c60: 0x8e34000c  lw          $s4, 0xC($s1)
    ctx->pc = 0x243c60u;
    SET_GPR_S32(ctx, 20, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_243c64:
    // 0x243c64: 0xc098552  jal         func_261548
    ctx->pc = 0x243C64u;
    SET_GPR_U32(ctx, 31, 0x243C6Cu);
    ctx->pc = 0x243C68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243C64u;
            // 0x243c68: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243C6Cu; }
        if (ctx->pc != 0x243C6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243C6Cu; }
        if (ctx->pc != 0x243C6Cu) { return; }
    }
    ctx->pc = 0x243C6Cu;
label_243c6c:
    // 0x243c6c: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x243c6cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243c70: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x243C70u;
    {
        const bool branch_taken_0x243c70 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x243C74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243C70u;
            // 0x243c74: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243c70) {
            ctx->pc = 0x243C80u;
            goto label_243c80;
        }
    }
    ctx->pc = 0x243C78u;
    // 0x243c78: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x243C78u;
    {
        const bool branch_taken_0x243c78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243C7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243C78u;
            // 0x243c7c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243c78) {
            ctx->pc = 0x243D5Cu;
            goto label_243d5c;
        }
    }
    ctx->pc = 0x243C80u;
label_243c80:
    // 0x243c80: 0xc048c96  jal         func_123258
    ctx->pc = 0x243C80u;
    SET_GPR_U32(ctx, 31, 0x243C88u);
    ctx->pc = 0x243C84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243C80u;
            // 0x243c84: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x123258u;
    if (runtime->hasFunction(0x123258u)) {
        auto targetFn = runtime->lookupFunction(0x123258u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243C88u; }
        if (ctx->pc != 0x243C88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00123258_0x123258(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243C88u; }
        if (ctx->pc != 0x243C88u) { return; }
    }
    ctx->pc = 0x243C88u;
label_243c88:
    // 0x243c88: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x243C88u;
    {
        const bool branch_taken_0x243c88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243C8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243C88u;
            // 0x243c8c: 0xae30000c  sw          $s0, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243c88) {
            ctx->pc = 0x243CA4u;
            goto label_243ca4;
        }
    }
    ctx->pc = 0x243C90u;
label_243c90:
    // 0x243c90: 0xc090c4c  jal         func_243130
    ctx->pc = 0x243C90u;
    SET_GPR_U32(ctx, 31, 0x243C98u);
    ctx->pc = 0x243130u;
    if (runtime->hasFunction(0x243130u)) {
        auto targetFn = runtime->lookupFunction(0x243130u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243C98u; }
        if (ctx->pc != 0x243C98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00243130_0x243130(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243C98u; }
        if (ctx->pc != 0x243C98u) { return; }
    }
    ctx->pc = 0x243C98u;
label_243c98:
    // 0x243c98: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x243C98u;
    {
        const bool branch_taken_0x243c98 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243C9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243C98u;
            // 0x243c9c: 0xae2000a8  sw          $zero, 0xA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243c98) {
            ctx->pc = 0x243D00u;
            goto label_243d00;
        }
    }
    ctx->pc = 0x243CA0u;
label_243ca0:
    // 0x243ca0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x243ca0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243ca4:
    // 0x243ca4: 0x2151021  addu        $v0, $s0, $s5
    ctx->pc = 0x243ca4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 21)));
    // 0x243ca8: 0x260302d  daddu       $a2, $s3, $zero
    ctx->pc = 0x243ca8u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243cac: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x243cacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243cb0: 0xae220030  sw          $v0, 0x30($s1)
    ctx->pc = 0x243cb0u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 48), GPR_U32(ctx, 2));
    // 0x243cb4: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x243CB4u;
    SET_GPR_U32(ctx, 31, 0x243CBCu);
    ctx->pc = 0x243CB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243CB4u;
            // 0x243cb8: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243CBCu; }
        if (ctx->pc != 0x243CBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243CBCu; }
        if (ctx->pc != 0x243CBCu) { return; }
    }
    ctx->pc = 0x243CBCu;
label_243cbc:
    // 0x243cbc: 0x12800006  beqz        $s4, . + 4 + (0x6 << 2)
    ctx->pc = 0x243CBCu;
    {
        const bool branch_taken_0x243cbc = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        ctx->pc = 0x243CC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243CBCu;
            // 0x243cc0: 0x2c0202d  daddu       $a0, $s6, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243cbc) {
            ctx->pc = 0x243CD8u;
            goto label_243cd8;
        }
    }
    ctx->pc = 0x243CC4u;
    // 0x243cc4: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x243cc4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243cc8: 0xc08b4f8  jal         func_22D3E0
    ctx->pc = 0x243CC8u;
    SET_GPR_U32(ctx, 31, 0x243CD0u);
    ctx->pc = 0x243CCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243CC8u;
            // 0x243ccc: 0x2a0302d  daddu       $a2, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D3E0u;
    if (runtime->hasFunction(0x22D3E0u)) {
        auto targetFn = runtime->lookupFunction(0x22D3E0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243CD0u; }
        if (ctx->pc != 0x243CD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D3E0_0x22d3e0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243CD0u; }
        if (ctx->pc != 0x243CD0u) { return; }
    }
    ctx->pc = 0x243CD0u;
label_243cd0:
    // 0x243cd0: 0xc098560  jal         func_261580
    ctx->pc = 0x243CD0u;
    SET_GPR_U32(ctx, 31, 0x243CD8u);
    ctx->pc = 0x243CD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243CD0u;
            // 0x243cd4: 0x280202d  daddu       $a0, $s4, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243CD8u; }
        if (ctx->pc != 0x243CD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261580_0x261580(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243CD8u; }
        if (ctx->pc != 0x243CD8u) { return; }
    }
    ctx->pc = 0x243CD8u;
label_243cd8:
    // 0x243cd8: 0x8e2400a8  lw          $a0, 0xA8($s1)
    ctx->pc = 0x243cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 168)));
    // 0x243cdc: 0x50800009  beql        $a0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x243CDCu;
    {
        const bool branch_taken_0x243cdc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x243cdc) {
            ctx->pc = 0x243CE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x243CDCu;
            // 0x243ce0: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x243D04u;
            goto label_243d04;
        }
    }
    ctx->pc = 0x243CE4u;
    // 0x243ce4: 0x8c830038  lw          $v1, 0x38($a0)
    ctx->pc = 0x243ce4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 56)));
    // 0x243ce8: 0x28620002  slti        $v0, $v1, 0x2
    ctx->pc = 0x243ce8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x243cec: 0x1440ffe8  bnez        $v0, . + 4 + (-0x18 << 2)
    ctx->pc = 0x243CECu;
    {
        const bool branch_taken_0x243cec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243CF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243CECu;
            // 0x243cf0: 0x2462ffff  addiu       $v0, $v1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243cec) {
            ctx->pc = 0x243C90u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_243c90;
        }
    }
    ctx->pc = 0x243CF4u;
    // 0x243cf4: 0xac820038  sw          $v0, 0x38($a0)
    ctx->pc = 0x243cf4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 56), GPR_U32(ctx, 2));
    // 0x243cf8: 0xae2000a8  sw          $zero, 0xA8($s1)
    ctx->pc = 0x243cf8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 0));
    // 0x243cfc: 0x0  nop
    ctx->pc = 0x243cfcu;
    // NOP
label_243d00:
    // 0x243d00: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x243d00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
label_243d04:
    // 0x243d04: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x243d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x243d08: 0x10400013  beqz        $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x243D08u;
    {
        const bool branch_taken_0x243d08 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243D0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243D08u;
            // 0x243d0c: 0x2e0202d  daddu       $a0, $s7, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 23) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243d08) {
            ctx->pc = 0x243D58u;
            goto label_243d58;
        }
    }
    ctx->pc = 0x243D10u;
    // 0x243d10: 0xc090bf0  jal         func_242FC0
    ctx->pc = 0x243D10u;
    SET_GPR_U32(ctx, 31, 0x243D18u);
    ctx->pc = 0x243D14u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x243D10u;
            // 0x243d14: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x242FC0u;
    if (runtime->hasFunction(0x242FC0u)) {
        auto targetFn = runtime->lookupFunction(0x242FC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243D18u; }
        if (ctx->pc != 0x243D18u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00242FC0_0x242fc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x243D18u; }
        if (ctx->pc != 0x243D18u) { return; }
    }
    ctx->pc = 0x243D18u;
label_243d18:
    // 0x243d18: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x243d18u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x243d1c: 0x1060000e  beqz        $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x243D1Cu;
    {
        const bool branch_taken_0x243d1c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x243D20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243D1Cu;
            // 0x243d20: 0xae2300a8  sw          $v1, 0xA8($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 168), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243d1c) {
            ctx->pc = 0x243D58u;
            goto label_243d58;
        }
    }
    ctx->pc = 0x243D24u;
    // 0x243d24: 0xde220058  ld          $v0, 0x58($s1)
    ctx->pc = 0x243d24u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 88)));
    // 0x243d28: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x243d28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x243d2c: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x243D2Cu;
    {
        const bool branch_taken_0x243d2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x243D30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243D2Cu;
            // 0x243d30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243d2c) {
            ctx->pc = 0x243D5Cu;
            goto label_243d5c;
        }
    }
    ctx->pc = 0x243D34u;
    // 0x243d34: 0xde220060  ld          $v0, 0x60($s1)
    ctx->pc = 0x243d34u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 17), 96)));
    // 0x243d38: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x243D38u;
    {
        const bool branch_taken_0x243d38 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243D38u;
            // 0x243d3c: 0xdc630060  ld          $v1, 0x60($v1) (Delay Slot)
        SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 3), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243d38) {
            ctx->pc = 0x243D54u;
            goto label_243d54;
        }
    }
    ctx->pc = 0x243D40u;
    // 0x243d40: 0x62102b  sltu        $v0, $v1, $v0
    ctx->pc = 0x243d40u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x243d44: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x243D44u;
    {
        const bool branch_taken_0x243d44 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x243D48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243D44u;
            // 0x243d48: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243d44) {
            ctx->pc = 0x243D5Cu;
            goto label_243d5c;
        }
    }
    ctx->pc = 0x243D4Cu;
    // 0x243d4c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x243D4Cu;
    {
        const bool branch_taken_0x243d4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x243D50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243D4Cu;
            // 0x243d50: 0xfe230060  sd          $v1, 0x60($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 96), GPR_U64(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x243d4c) {
            ctx->pc = 0x243D5Cu;
            goto label_243d5c;
        }
    }
    ctx->pc = 0x243D54u;
label_243d54:
    // 0x243d54: 0xfe230060  sd          $v1, 0x60($s1)
    ctx->pc = 0x243d54u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 96), GPR_U64(ctx, 3));
label_243d58:
    // 0x243d58: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x243d58u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_243d5c:
    // 0x243d5c: 0xdfbf0080  ld          $ra, 0x80($sp)
    ctx->pc = 0x243d5cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x243d60: 0xdfb70070  ld          $s7, 0x70($sp)
    ctx->pc = 0x243d60u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x243d64: 0xdfb60060  ld          $s6, 0x60($sp)
    ctx->pc = 0x243d64u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x243d68: 0xdfb50050  ld          $s5, 0x50($sp)
    ctx->pc = 0x243d68u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x243d6c: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x243d6cu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x243d70: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x243d70u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x243d74: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x243d74u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x243d78: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x243d78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x243d7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x243d7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x243d80: 0x3e00008  jr          $ra
    ctx->pc = 0x243D80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x243D84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x243D80u;
            // 0x243d84: 0x27bd0090  addiu       $sp, $sp, 0x90 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 144));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x243D88u;
    ctx->pc = 0x243d88u;
}
