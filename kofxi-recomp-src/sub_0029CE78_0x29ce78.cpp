#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0029CE78
// Address: 0x29ce78 - 0x29cfd0
void sub_0029CE78_0x29ce78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0029CE78_0x29ce78");
#endif

    switch (ctx->pc) {
        case 0x29ce78u: goto label_29ce78;
        case 0x29ce7cu: goto label_29ce7c;
        case 0x29ce80u: goto label_29ce80;
        case 0x29ce84u: goto label_29ce84;
        case 0x29ce88u: goto label_29ce88;
        case 0x29ce8cu: goto label_29ce8c;
        case 0x29ce90u: goto label_29ce90;
        case 0x29ce94u: goto label_29ce94;
        case 0x29ce98u: goto label_29ce98;
        case 0x29ce9cu: goto label_29ce9c;
        case 0x29cea0u: goto label_29cea0;
        case 0x29cea4u: goto label_29cea4;
        case 0x29cea8u: goto label_29cea8;
        case 0x29ceacu: goto label_29ceac;
        case 0x29ceb0u: goto label_29ceb0;
        case 0x29ceb4u: goto label_29ceb4;
        case 0x29ceb8u: goto label_29ceb8;
        case 0x29cebcu: goto label_29cebc;
        case 0x29cec0u: goto label_29cec0;
        case 0x29cec4u: goto label_29cec4;
        case 0x29cec8u: goto label_29cec8;
        case 0x29ceccu: goto label_29cecc;
        case 0x29ced0u: goto label_29ced0;
        case 0x29ced4u: goto label_29ced4;
        case 0x29ced8u: goto label_29ced8;
        case 0x29cedcu: goto label_29cedc;
        case 0x29cee0u: goto label_29cee0;
        case 0x29cee4u: goto label_29cee4;
        case 0x29cee8u: goto label_29cee8;
        case 0x29ceecu: goto label_29ceec;
        case 0x29cef0u: goto label_29cef0;
        case 0x29cef4u: goto label_29cef4;
        case 0x29cef8u: goto label_29cef8;
        case 0x29cefcu: goto label_29cefc;
        case 0x29cf00u: goto label_29cf00;
        case 0x29cf04u: goto label_29cf04;
        case 0x29cf08u: goto label_29cf08;
        case 0x29cf0cu: goto label_29cf0c;
        case 0x29cf10u: goto label_29cf10;
        case 0x29cf14u: goto label_29cf14;
        case 0x29cf18u: goto label_29cf18;
        case 0x29cf1cu: goto label_29cf1c;
        case 0x29cf20u: goto label_29cf20;
        case 0x29cf24u: goto label_29cf24;
        case 0x29cf28u: goto label_29cf28;
        case 0x29cf2cu: goto label_29cf2c;
        case 0x29cf30u: goto label_29cf30;
        case 0x29cf34u: goto label_29cf34;
        case 0x29cf38u: goto label_29cf38;
        case 0x29cf3cu: goto label_29cf3c;
        case 0x29cf40u: goto label_29cf40;
        case 0x29cf44u: goto label_29cf44;
        case 0x29cf48u: goto label_29cf48;
        case 0x29cf4cu: goto label_29cf4c;
        case 0x29cf50u: goto label_29cf50;
        case 0x29cf54u: goto label_29cf54;
        case 0x29cf58u: goto label_29cf58;
        case 0x29cf5cu: goto label_29cf5c;
        case 0x29cf60u: goto label_29cf60;
        case 0x29cf64u: goto label_29cf64;
        case 0x29cf68u: goto label_29cf68;
        case 0x29cf6cu: goto label_29cf6c;
        case 0x29cf70u: goto label_29cf70;
        case 0x29cf74u: goto label_29cf74;
        case 0x29cf78u: goto label_29cf78;
        case 0x29cf7cu: goto label_29cf7c;
        case 0x29cf80u: goto label_29cf80;
        case 0x29cf84u: goto label_29cf84;
        case 0x29cf88u: goto label_29cf88;
        case 0x29cf8cu: goto label_29cf8c;
        case 0x29cf90u: goto label_29cf90;
        case 0x29cf94u: goto label_29cf94;
        case 0x29cf98u: goto label_29cf98;
        case 0x29cf9cu: goto label_29cf9c;
        case 0x29cfa0u: goto label_29cfa0;
        case 0x29cfa4u: goto label_29cfa4;
        case 0x29cfa8u: goto label_29cfa8;
        case 0x29cfacu: goto label_29cfac;
        case 0x29cfb0u: goto label_29cfb0;
        case 0x29cfb4u: goto label_29cfb4;
        case 0x29cfb8u: goto label_29cfb8;
        case 0x29cfbcu: goto label_29cfbc;
        case 0x29cfc0u: goto label_29cfc0;
        case 0x29cfc4u: goto label_29cfc4;
        case 0x29cfc8u: goto label_29cfc8;
        case 0x29cfccu: goto label_29cfcc;
        default: break;
    }

    ctx->pc = 0x29ce78u;

label_29ce78:
    // 0x29ce78: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x29ce78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
label_29ce7c:
    // 0x29ce7c: 0xffb40070  sd          $s4, 0x70($sp)
    ctx->pc = 0x29ce7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 20));
label_29ce80:
    // 0x29ce80: 0xffb50080  sd          $s5, 0x80($sp)
    ctx->pc = 0x29ce80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 21));
label_29ce84:
    // 0x29ce84: 0xc0a02d  daddu       $s4, $a2, $zero
    ctx->pc = 0x29ce84u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
label_29ce88:
    // 0x29ce88: 0xffb30060  sd          $s3, 0x60($sp)
    ctx->pc = 0x29ce88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 19));
label_29ce8c:
    // 0x29ce8c: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x29ce8cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
label_29ce90:
    // 0x29ce90: 0xffb20050  sd          $s2, 0x50($sp)
    ctx->pc = 0x29ce90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 18));
label_29ce94:
    // 0x29ce94: 0xe0982d  daddu       $s3, $a3, $zero
    ctx->pc = 0x29ce94u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_29ce98:
    // 0x29ce98: 0xffb10040  sd          $s1, 0x40($sp)
    ctx->pc = 0x29ce98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 17));
label_29ce9c:
    // 0x29ce9c: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x29ce9cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29cea0:
    // 0x29cea0: 0xffb00030  sd          $s0, 0x30($sp)
    ctx->pc = 0x29cea0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 16));
label_29cea4:
    // 0x29cea4: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x29cea4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_29cea8:
    // 0x29cea8: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x29cea8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
label_29ceac:
    // 0x29ceac: 0xc0a5b7e  jal         func_296DF8
label_29ceb0:
    if (ctx->pc == 0x29CEB0u) {
        ctx->pc = 0x29CEB0u;
            // 0x29ceb0: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->pc = 0x29CEB4u;
        goto label_29ceb4;
    }
    ctx->pc = 0x29CEACu;
    SET_GPR_U32(ctx, 31, 0x29CEB4u);
    ctx->pc = 0x29CEB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29CEACu;
            // 0x29ceb0: 0xae800000  sw          $zero, 0x0($s4) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 20), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296DF8u;
    if (runtime->hasFunction(0x296DF8u)) {
        auto targetFn = runtime->lookupFunction(0x296DF8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CEB4u; }
        if (ctx->pc != 0x29CEB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296DF8_0x296df8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CEB4u; }
        if (ctx->pc != 0x29CEB4u) { return; }
    }
    ctx->pc = 0x29CEB4u;
label_29ceb4:
    // 0x29ceb4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x29ceb4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_29ceb8:
    // 0x29ceb8: 0x1200003c  beqz        $s0, . + 4 + (0x3C << 2)
label_29cebc:
    if (ctx->pc == 0x29CEBCu) {
        ctx->pc = 0x29CEBCu;
            // 0x29cebc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29CEC0u;
        goto label_29cec0;
    }
    ctx->pc = 0x29CEB8u;
    {
        const bool branch_taken_0x29ceb8 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CEB8u;
            // 0x29cebc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ceb8) {
            ctx->pc = 0x29CFACu;
            goto label_29cfac;
        }
    }
    ctx->pc = 0x29CEC0u;
label_29cec0:
    // 0x29cec0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29cec0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29cec4:
    // 0x29cec4: 0xc0a5bae  jal         func_296EB8
label_29cec8:
    if (ctx->pc == 0x29CEC8u) {
        ctx->pc = 0x29CEC8u;
            // 0x29cec8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29CECCu;
        goto label_29cecc;
    }
    ctx->pc = 0x29CEC4u;
    SET_GPR_U32(ctx, 31, 0x29CECCu);
    ctx->pc = 0x29CEC8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29CEC4u;
            // 0x29cec8: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296EB8u;
    if (runtime->hasFunction(0x296EB8u)) {
        auto targetFn = runtime->lookupFunction(0x296EB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CECCu; }
        if (ctx->pc != 0x29CECCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296EB8_0x296eb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CECCu; }
        if (ctx->pc != 0x29CECCu) { return; }
    }
    ctx->pc = 0x29CECCu;
label_29cecc:
    // 0x29cecc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x29ceccu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_29ced0:
    // 0x29ced0: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29ced0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29ced4:
    // 0x29ced4: 0xc0a5148  jal         func_294520
label_29ced8:
    if (ctx->pc == 0x29CED8u) {
        ctx->pc = 0x29CED8u;
            // 0x29ced8: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->pc = 0x29CEDCu;
        goto label_29cedc;
    }
    ctx->pc = 0x29CED4u;
    SET_GPR_U32(ctx, 31, 0x29CEDCu);
    ctx->pc = 0x29CED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29CED4u;
            // 0x29ced8: 0x27a60020  addiu       $a2, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x294520u;
    if (runtime->hasFunction(0x294520u)) {
        auto targetFn = runtime->lookupFunction(0x294520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CEDCu; }
        if (ctx->pc != 0x29CEDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00294520_0x294520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CEDCu; }
        if (ctx->pc != 0x29CEDCu) { return; }
    }
    ctx->pc = 0x29CEDCu;
label_29cedc:
    // 0x29cedc: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x29cedcu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_29cee0:
    // 0x29cee0: 0x8ca20020  lw          $v0, 0x20($a1)
    ctx->pc = 0x29cee0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 32)));
label_29cee4:
    // 0x29cee4: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_29cee8:
    if (ctx->pc == 0x29CEE8u) {
        ctx->pc = 0x29CEE8u;
            // 0x29cee8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29CEECu;
        goto label_29ceec;
    }
    ctx->pc = 0x29CEE4u;
    {
        const bool branch_taken_0x29cee4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CEE8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CEE4u;
            // 0x29cee8: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cee4) {
            ctx->pc = 0x29CF20u;
            goto label_29cf20;
        }
    }
    ctx->pc = 0x29CEECu;
label_29ceec:
    // 0x29ceec: 0x10000009  b           . + 4 + (0x9 << 2)
label_29cef0:
    if (ctx->pc == 0x29CEF0u) {
        ctx->pc = 0x29CEF0u;
            // 0x29cef0: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->pc = 0x29CEF4u;
        goto label_29cef4;
    }
    ctx->pc = 0x29CEECu;
    {
        const bool branch_taken_0x29ceec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CEF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CEECu;
            // 0x29cef0: 0x8e640000  lw          $a0, 0x0($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29ceec) {
            ctx->pc = 0x29CF14u;
            goto label_29cf14;
        }
    }
    ctx->pc = 0x29CEF4u;
label_29cef4:
    // 0x29cef4: 0x0  nop
    ctx->pc = 0x29cef4u;
    // NOP
label_29cef8:
    // 0x29cef8: 0x28620004  slti        $v0, $v1, 0x4
    ctx->pc = 0x29cef8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)4) ? 1 : 0);
label_29cefc:
    // 0x29cefc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
label_29cf00:
    if (ctx->pc == 0x29CF00u) {
        ctx->pc = 0x29CF00u;
            // 0x29cf00: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->pc = 0x29CF04u;
        goto label_29cf04;
    }
    ctx->pc = 0x29CEFCu;
    {
        const bool branch_taken_0x29cefc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CF00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CEFCu;
            // 0x29cf00: 0x31080  sll         $v0, $v1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cefc) {
            ctx->pc = 0x29CF20u;
            goto label_29cf20;
        }
    }
    ctx->pc = 0x29CF04u;
label_29cf04:
    // 0x29cf04: 0xa21021  addu        $v0, $a1, $v0
    ctx->pc = 0x29cf04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 2)));
label_29cf08:
    // 0x29cf08: 0x8c420020  lw          $v0, 0x20($v0)
    ctx->pc = 0x29cf08u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
label_29cf0c:
    // 0x29cf0c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
label_29cf10:
    if (ctx->pc == 0x29CF10u) {
        ctx->pc = 0x29CF14u;
        goto label_29cf14;
    }
    ctx->pc = 0x29CF0Cu;
    {
        const bool branch_taken_0x29cf0c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cf0c) {
            ctx->pc = 0x29CF20u;
            goto label_29cf20;
        }
    }
    ctx->pc = 0x29CF14u;
label_29cf14:
    // 0x29cf14: 0x5482fff8  bnel        $a0, $v0, . + 4 + (-0x8 << 2)
label_29cf18:
    if (ctx->pc == 0x29CF18u) {
        ctx->pc = 0x29CF18u;
            // 0x29cf18: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->pc = 0x29CF1Cu;
        goto label_29cf1c;
    }
    ctx->pc = 0x29CF14u;
    {
        const bool branch_taken_0x29cf14 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x29cf14) {
            ctx->pc = 0x29CF18u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29CF14u;
            // 0x29cf18: 0x24630001  addiu       $v1, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29CEF8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_29cef8;
        }
    }
    ctx->pc = 0x29CF1Cu;
label_29cf1c:
    // 0x29cf1c: 0x24120001  addiu       $s2, $zero, 0x1
    ctx->pc = 0x29cf1cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_29cf20:
    // 0x29cf20: 0x56400009  bnel        $s2, $zero, . + 4 + (0x9 << 2)
label_29cf24:
    if (ctx->pc == 0x29CF24u) {
        ctx->pc = 0x29CF24u;
            // 0x29cf24: 0x8ca20018  lw          $v0, 0x18($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
        ctx->pc = 0x29CF28u;
        goto label_29cf28;
    }
    ctx->pc = 0x29CF20u;
    {
        const bool branch_taken_0x29cf20 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x29cf20) {
            ctx->pc = 0x29CF24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x29CF20u;
            // 0x29cf24: 0x8ca20018  lw          $v0, 0x18($a1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x29CF48u;
            goto label_29cf48;
        }
    }
    ctx->pc = 0x29CF28u;
label_29cf28:
    // 0x29cf28: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x29cf28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
label_29cf2c:
    // 0x29cf2c: 0x2405007a  addiu       $a1, $zero, 0x7A
    ctx->pc = 0x29cf2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
label_29cf30:
    // 0x29cf30: 0x2406007a  addiu       $a2, $zero, 0x7A
    ctx->pc = 0x29cf30u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
label_29cf34:
    // 0x29cf34: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29cf34u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29cf38:
    // 0x29cf38: 0xc0a5648  jal         func_295920
label_29cf3c:
    if (ctx->pc == 0x29CF3Cu) {
        ctx->pc = 0x29CF3Cu;
            // 0x29cf3c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29CF40u;
        goto label_29cf40;
    }
    ctx->pc = 0x29CF38u;
    SET_GPR_U32(ctx, 31, 0x29CF40u);
    ctx->pc = 0x29CF3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29CF38u;
            // 0x29cf3c: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CF40u; }
        if (ctx->pc != 0x29CF40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CF40u; }
        if (ctx->pc != 0x29CF40u) { return; }
    }
    ctx->pc = 0x29CF40u;
label_29cf40:
    // 0x29cf40: 0x10000015  b           . + 4 + (0x15 << 2)
label_29cf44:
    if (ctx->pc == 0x29CF44u) {
        ctx->pc = 0x29CF48u;
        goto label_29cf48;
    }
    ctx->pc = 0x29CF40u;
    {
        const bool branch_taken_0x29cf40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x29cf40) {
            ctx->pc = 0x29CF98u;
            goto label_29cf98;
        }
    }
    ctx->pc = 0x29CF48u;
label_29cf48:
    // 0x29cf48: 0x1040000e  beqz        $v0, . + 4 + (0xE << 2)
label_29cf4c:
    if (ctx->pc == 0x29CF4Cu) {
        ctx->pc = 0x29CF4Cu;
            // 0x29cf4c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->pc = 0x29CF50u;
        goto label_29cf50;
    }
    ctx->pc = 0x29CF48u;
    {
        const bool branch_taken_0x29cf48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CF4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CF48u;
            // 0x29cf4c: 0x24040006  addiu       $a0, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cf48) {
            ctx->pc = 0x29CF84u;
            goto label_29cf84;
        }
    }
    ctx->pc = 0x29CF50u;
label_29cf50:
    // 0x29cf50: 0xc0a5b9c  jal         func_296E70
label_29cf54:
    if (ctx->pc == 0x29CF54u) {
        ctx->pc = 0x29CF54u;
            // 0x29cf54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29CF58u;
        goto label_29cf58;
    }
    ctx->pc = 0x29CF50u;
    SET_GPR_U32(ctx, 31, 0x29CF58u);
    ctx->pc = 0x29CF54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29CF50u;
            // 0x29cf54: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296E70u;
    if (runtime->hasFunction(0x296E70u)) {
        auto targetFn = runtime->lookupFunction(0x296E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CF58u; }
        if (ctx->pc != 0x29CF58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296E70_0x296e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CF58u; }
        if (ctx->pc != 0x29CF58u) { return; }
    }
    ctx->pc = 0x29CF58u;
label_29cf58:
    // 0x29cf58: 0x8e230000  lw          $v1, 0x0($s1)
    ctx->pc = 0x29cf58u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
label_29cf5c:
    // 0x29cf5c: 0x2a0382d  daddu       $a3, $s5, $zero
    ctx->pc = 0x29cf5cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_29cf60:
    // 0x29cf60: 0x8e69000c  lw          $t1, 0xC($s3)
    ctx->pc = 0x29cf60u;
    SET_GPR_S32(ctx, 9, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 12)));
label_29cf64:
    // 0x29cf64: 0x280402d  daddu       $t0, $s4, $zero
    ctx->pc = 0x29cf64u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_29cf68:
    // 0x29cf68: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x29cf68u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
label_29cf6c:
    // 0x29cf6c: 0x3a0282d  daddu       $a1, $sp, $zero
    ctx->pc = 0x29cf6cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
label_29cf70:
    // 0x29cf70: 0x8c620018  lw          $v0, 0x18($v1)
    ctx->pc = 0x29cf70u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 24)));
label_29cf74:
    // 0x29cf74: 0x40f809  jalr        $v0
label_29cf78:
    if (ctx->pc == 0x29CF78u) {
        ctx->pc = 0x29CF78u;
            // 0x29cf78: 0x8fa60020  lw          $a2, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->pc = 0x29CF7Cu;
        goto label_29cf7c;
    }
    ctx->pc = 0x29CF74u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 2);
        SET_GPR_U32(ctx, 31, 0x29CF7Cu);
        ctx->pc = 0x29CF78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CF74u;
            // 0x29cf78: 0x8fa60020  lw          $a2, 0x20($sp) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 32)));
        ctx->in_delay_slot = false;
        if (jumpTarget == 0u) {
            ctx->pc = 0x29CF7Cu;
        } else {
        ctx->pc = jumpTarget;
        {
            auto targetFn = runtime->lookupFunction(jumpTarget);
            const uint32_t __entryPc = ctx->pc;
            targetFn(rdram, ctx, runtime);
            if (ctx->pc == __entryPc) { ctx->pc = 0x29CF7Cu; }
            if (ctx->pc != 0x29CF7Cu) { return; }
        }
        }
    }
    ctx->pc = 0x29CF7Cu;
label_29cf7c:
    // 0x29cf7c: 0x1000000c  b           . + 4 + (0xC << 2)
label_29cf80:
    if (ctx->pc == 0x29CF80u) {
        ctx->pc = 0x29CF80u;
            // 0x29cf80: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->pc = 0x29CF84u;
        goto label_29cf84;
    }
    ctx->pc = 0x29CF7Cu;
    {
        const bool branch_taken_0x29cf7c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CF80u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CF7Cu;
            // 0x29cf80: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cf7c) {
            ctx->pc = 0x29CFB0u;
            goto label_29cfb0;
        }
    }
    ctx->pc = 0x29CF84u;
label_29cf84:
    // 0x29cf84: 0x2405007a  addiu       $a1, $zero, 0x7A
    ctx->pc = 0x29cf84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
label_29cf88:
    // 0x29cf88: 0x24060076  addiu       $a2, $zero, 0x76
    ctx->pc = 0x29cf88u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 118));
label_29cf8c:
    // 0x29cf8c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x29cf8cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29cf90:
    // 0x29cf90: 0xc0a5648  jal         func_295920
label_29cf94:
    if (ctx->pc == 0x29CF94u) {
        ctx->pc = 0x29CF94u;
            // 0x29cf94: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29CF98u;
        goto label_29cf98;
    }
    ctx->pc = 0x29CF90u;
    SET_GPR_U32(ctx, 31, 0x29CF98u);
    ctx->pc = 0x29CF94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29CF90u;
            // 0x29cf94: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CF98u; }
        if (ctx->pc != 0x29CF98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CF98u; }
        if (ctx->pc != 0x29CF98u) { return; }
    }
    ctx->pc = 0x29CF98u;
label_29cf98:
    // 0x29cf98: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
label_29cf9c:
    if (ctx->pc == 0x29CF9Cu) {
        ctx->pc = 0x29CF9Cu;
            // 0x29cf9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29CFA0u;
        goto label_29cfa0;
    }
    ctx->pc = 0x29CF98u;
    {
        const bool branch_taken_0x29cf98 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x29CF9Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CF98u;
            // 0x29cf9c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x29cf98) {
            ctx->pc = 0x29CFACu;
            goto label_29cfac;
        }
    }
    ctx->pc = 0x29CFA0u;
label_29cfa0:
    // 0x29cfa0: 0xc0a5b9c  jal         func_296E70
label_29cfa4:
    if (ctx->pc == 0x29CFA4u) {
        ctx->pc = 0x29CFA4u;
            // 0x29cfa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->pc = 0x29CFA8u;
        goto label_29cfa8;
    }
    ctx->pc = 0x29CFA0u;
    SET_GPR_U32(ctx, 31, 0x29CFA8u);
    ctx->pc = 0x29CFA4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x29CFA0u;
            // 0x29cfa4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x296E70u;
    if (runtime->hasFunction(0x296E70u)) {
        auto targetFn = runtime->lookupFunction(0x296E70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CFA8u; }
        if (ctx->pc != 0x29CFA8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00296E70_0x296e70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x29CFA8u; }
        if (ctx->pc != 0x29CFA8u) { return; }
    }
    ctx->pc = 0x29CFA8u;
label_29cfa8:
    // 0x29cfa8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x29cfa8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_29cfac:
    // 0x29cfac: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x29cfacu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_29cfb0:
    // 0x29cfb0: 0xdfb50080  ld          $s5, 0x80($sp)
    ctx->pc = 0x29cfb0u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 128)));
label_29cfb4:
    // 0x29cfb4: 0xdfb40070  ld          $s4, 0x70($sp)
    ctx->pc = 0x29cfb4u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 112)));
label_29cfb8:
    // 0x29cfb8: 0xdfb30060  ld          $s3, 0x60($sp)
    ctx->pc = 0x29cfb8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 96)));
label_29cfbc:
    // 0x29cfbc: 0xdfb20050  ld          $s2, 0x50($sp)
    ctx->pc = 0x29cfbcu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_29cfc0:
    // 0x29cfc0: 0xdfb10040  ld          $s1, 0x40($sp)
    ctx->pc = 0x29cfc0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_29cfc4:
    // 0x29cfc4: 0xdfb00030  ld          $s0, 0x30($sp)
    ctx->pc = 0x29cfc4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_29cfc8:
    // 0x29cfc8: 0x3e00008  jr          $ra
label_29cfcc:
    if (ctx->pc == 0x29CFCCu) {
        ctx->pc = 0x29CFCCu;
            // 0x29cfcc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->pc = 0x29CFD0u;
        goto label_fallthrough_0x29cfc8;
    }
    ctx->pc = 0x29CFC8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x29CFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x29CFC8u;
            // 0x29cfcc: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
label_fallthrough_0x29cfc8:
    ctx->pc = 0x29CFD0u;
    ctx->pc = 0x29cfd0u;
}
