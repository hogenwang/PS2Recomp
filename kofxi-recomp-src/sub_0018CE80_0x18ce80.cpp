#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018CE80
// Address: 0x18ce80 - 0x18d010
void sub_0018CE80_0x18ce80(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018CE80_0x18ce80");
#endif

    switch (ctx->pc) {
        case 0x18cee0u: goto label_18cee0;
        case 0x18cee8u: goto label_18cee8;
        case 0x18cf0cu: goto label_18cf0c;
        case 0x18cf84u: goto label_18cf84;
        case 0x18cfc0u: goto label_18cfc0;
        default: break;
    }

    ctx->pc = 0x18ce80u;

    // 0x18ce80: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x18ce80u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x18ce84: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x18ce84u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x18ce88: 0xffbf0070  sd          $ra, 0x70($sp)
    ctx->pc = 0x18ce88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 31));
    // 0x18ce8c: 0x2442db50  addiu       $v0, $v0, -0x24B0
    ctx->pc = 0x18ce8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957904));
    // 0x18ce90: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x18ce90u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x18ce94: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x18ce94u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x18ce98: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x18ce98u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x18ce9c: 0x80a82d  daddu       $s5, $a0, $zero
    ctx->pc = 0x18ce9cu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cea0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x18cea0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x18cea4: 0x26b604a6  addiu       $s6, $s5, 0x4A6
    ctx->pc = 0x18cea4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 21), 1190));
    // 0x18cea8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18cea8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18ceac: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x18ceacu;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18ceb0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18ceb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18ceb4: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18ceb4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18ceb8: 0x8c8300dc  lw          $v1, 0xDC($a0)
    ctx->pc = 0x18ceb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 220)));
    // 0x18cebc: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x18cebcu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x18cec0: 0x31882  srl         $v1, $v1, 2
    ctx->pc = 0x18cec0u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 2));
    // 0x18cec4: 0x307200ff  andi        $s2, $v1, 0xFF
    ctx->pc = 0x18cec4u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)255);
    // 0x18cec8: 0x1218c0  sll         $v1, $s2, 3
    ctx->pc = 0x18cec8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x18cecc: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x18ceccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x18ced0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18ced0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18ced4: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x18ced4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x18ced8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18ced8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18cedc: 0x438821  addu        $s1, $v0, $v1
    ctx->pc = 0x18cedcu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_18cee0:
    // 0x18cee0: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x18cee0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cee4: 0x2c0802d  daddu       $s0, $s6, $zero
    ctx->pc = 0x18cee4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
label_18cee8:
    // 0x18cee8: 0x1680001f  bnez        $s4, . + 4 + (0x1F << 2)
    ctx->pc = 0x18CEE8u;
    {
        const bool branch_taken_0x18cee8 = (GPR_U64(ctx, 20) != GPR_U64(ctx, 0));
        if (branch_taken_0x18cee8) {
            ctx->pc = 0x18CF68u;
            goto label_18cf68;
        }
    }
    ctx->pc = 0x18CEF0u;
    // 0x18cef0: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x18cef0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x18cef4: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x18cef4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x18cef8: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x18cef8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x18cefc: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x18CEFCu;
    {
        const bool branch_taken_0x18cefc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x18cefc) {
            ctx->pc = 0x18CF20u;
            goto label_18cf20;
        }
    }
    ctx->pc = 0x18CF04u;
    // 0x18cf04: 0xc0d0bb8  jal         func_342EE0
    ctx->pc = 0x18CF04u;
    SET_GPR_U32(ctx, 31, 0x18CF0Cu);
    ctx->pc = 0x18CF08u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CF04u;
            // 0x18cf08: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x342EE0u;
    if (runtime->hasFunction(0x342EE0u)) {
        auto targetFn = runtime->lookupFunction(0x342EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CF0Cu; }
        if (ctx->pc != 0x18CF0Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00342EE0_0x342ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CF0Cu; }
        if (ctx->pc != 0x18CF0Cu) { return; }
    }
    ctx->pc = 0x18CF0Cu;
label_18cf0c:
    // 0x18cf0c: 0x28420005  slti        $v0, $v0, 0x5
    ctx->pc = 0x18cf0cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)5) ? 1 : 0);
    // 0x18cf10: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18CF10u;
    {
        const bool branch_taken_0x18cf10 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18cf10) {
            ctx->pc = 0x18CF20u;
            goto label_18cf20;
        }
    }
    ctx->pc = 0x18CF18u;
    // 0x18cf18: 0xa6000034  sh          $zero, 0x34($s0)
    ctx->pc = 0x18cf18u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x18cf1c: 0x0  nop
    ctx->pc = 0x18cf1cu;
    // NOP
label_18cf20:
    // 0x18cf20: 0x8ea3049c  lw          $v1, 0x49C($s5)
    ctx->pc = 0x18cf20u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1180)));
    // 0x18cf24: 0x3c020400  lui         $v0, 0x400
    ctx->pc = 0x18cf24u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1024 << 16));
    // 0x18cf28: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x18cf28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x18cf2c: 0x14400006  bnez        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x18CF2Cu;
    {
        const bool branch_taken_0x18cf2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18cf2c) {
            ctx->pc = 0x18CF48u;
            goto label_18cf48;
        }
    }
    ctx->pc = 0x18CF34u;
    // 0x18cf34: 0x86030034  lh          $v1, 0x34($s0)
    ctx->pc = 0x18cf34u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x18cf38: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x18cf38u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x18cf3c: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18cf3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18cf40: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x18CF40u;
    {
        const bool branch_taken_0x18cf40 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CF40u;
            // 0x18cf44: 0xae220038  sw          $v0, 0x38($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cf40) {
            ctx->pc = 0x18CF60u;
            goto label_18cf60;
        }
    }
    ctx->pc = 0x18CF48u;
label_18cf48:
    // 0x18cf48: 0x86030034  lh          $v1, 0x34($s0)
    ctx->pc = 0x18cf48u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x18cf4c: 0x1c600004  bgtz        $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x18CF4Cu;
    {
        const bool branch_taken_0x18cf4c = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x18cf4c) {
            ctx->pc = 0x18CF60u;
            goto label_18cf60;
        }
    }
    ctx->pc = 0x18CF54u;
    // 0x18cf54: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x18cf54u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x18cf58: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18cf58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18cf5c: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x18cf5cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
label_18cf60:
    // 0x18cf60: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x18CF60u;
    {
        const bool branch_taken_0x18cf60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18CF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CF60u;
            // 0x18cf64: 0xa6000034  sh          $zero, 0x34($s0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 16), 52), (uint16_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cf60) {
            ctx->pc = 0x18CFB0u;
            goto label_18cfb0;
        }
    }
    ctx->pc = 0x18CF68u;
label_18cf68:
    // 0x18cf68: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x18cf68u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x18cf6c: 0x90439780  lbu         $v1, -0x6880($v0)
    ctx->pc = 0x18cf6cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x18cf70: 0x2402000d  addiu       $v0, $zero, 0xD
    ctx->pc = 0x18cf70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x18cf74: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x18CF74u;
    {
        const bool branch_taken_0x18cf74 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x18cf74) {
            ctx->pc = 0x18CF98u;
            goto label_18cf98;
        }
    }
    ctx->pc = 0x18CF7Cu;
    // 0x18cf7c: 0xc0d0bb8  jal         func_342EE0
    ctx->pc = 0x18CF7Cu;
    SET_GPR_U32(ctx, 31, 0x18CF84u);
    ctx->pc = 0x18CF80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CF7Cu;
            // 0x18cf80: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x342EE0u;
    if (runtime->hasFunction(0x342EE0u)) {
        auto targetFn = runtime->lookupFunction(0x342EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CF84u; }
        if (ctx->pc != 0x18CF84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00342EE0_0x342ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CF84u; }
        if (ctx->pc != 0x18CF84u) { return; }
    }
    ctx->pc = 0x18CF84u;
label_18cf84:
    // 0x18cf84: 0x28420003  slti        $v0, $v0, 0x3
    ctx->pc = 0x18cf84u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x18cf88: 0x14400003  bnez        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18CF88u;
    {
        const bool branch_taken_0x18cf88 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x18cf88) {
            ctx->pc = 0x18CF98u;
            goto label_18cf98;
        }
    }
    ctx->pc = 0x18CF90u;
    // 0x18cf90: 0xa6000034  sh          $zero, 0x34($s0)
    ctx->pc = 0x18cf90u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x18cf94: 0x0  nop
    ctx->pc = 0x18cf94u;
    // NOP
label_18cf98:
    // 0x18cf98: 0x86030034  lh          $v1, 0x34($s0)
    ctx->pc = 0x18cf98u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 16), 52)));
    // 0x18cf9c: 0x8e220038  lw          $v0, 0x38($s1)
    ctx->pc = 0x18cf9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 56)));
    // 0x18cfa0: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x18cfa0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x18cfa4: 0xae220038  sw          $v0, 0x38($s1)
    ctx->pc = 0x18cfa4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 56), GPR_U32(ctx, 2));
    // 0x18cfa8: 0xa6000034  sh          $zero, 0x34($s0)
    ctx->pc = 0x18cfa8u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 52), (uint16_t)GPR_U32(ctx, 0));
    // 0x18cfac: 0x0  nop
    ctx->pc = 0x18cfacu;
    // NOP
label_18cfb0:
    // 0x18cfb0: 0x280202d  daddu       $a0, $s4, $zero
    ctx->pc = 0x18cfb0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cfb4: 0x260282d  daddu       $a1, $s3, $zero
    ctx->pc = 0x18cfb4u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18cfb8: 0xc063404  jal         func_18D010
    ctx->pc = 0x18CFB8u;
    SET_GPR_U32(ctx, 31, 0x18CFC0u);
    ctx->pc = 0x18CFBCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18CFB8u;
            // 0x18cfbc: 0x240302d  daddu       $a2, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18D010u;
    if (runtime->hasFunction(0x18D010u)) {
        auto targetFn = runtime->lookupFunction(0x18D010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CFC0u; }
        if (ctx->pc != 0x18CFC0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018D010_0x18d010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18CFC0u; }
        if (ctx->pc != 0x18CFC0u) { return; }
    }
    ctx->pc = 0x18CFC0u;
label_18cfc0:
    // 0x18cfc0: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x18cfc0u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x18cfc4: 0x2a630003  slti        $v1, $s3, 0x3
    ctx->pc = 0x18cfc4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)3) ? 1 : 0);
    // 0x18cfc8: 0x1460ffc7  bnez        $v1, . + 4 + (-0x39 << 2)
    ctx->pc = 0x18CFC8u;
    {
        const bool branch_taken_0x18cfc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CFC8u;
            // 0x18cfcc: 0x26100002  addiu       $s0, $s0, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cfc8) {
            ctx->pc = 0x18CEE8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18cee8;
        }
    }
    ctx->pc = 0x18CFD0u;
    // 0x18cfd0: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x18cfd0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x18cfd4: 0x26d60006  addiu       $s6, $s6, 0x6
    ctx->pc = 0x18cfd4u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 22), 6));
    // 0x18cfd8: 0x2a830002  slti        $v1, $s4, 0x2
    ctx->pc = 0x18cfd8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x18cfdc: 0x1460ffc0  bnez        $v1, . + 4 + (-0x40 << 2)
    ctx->pc = 0x18CFDCu;
    {
        const bool branch_taken_0x18cfdc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x18CFE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18CFDCu;
            // 0x18cfe0: 0x26310004  addiu       $s1, $s1, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18cfdc) {
            ctx->pc = 0x18CEE0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_18cee0;
        }
    }
    ctx->pc = 0x18CFE4u;
    // 0x18cfe4: 0xdfbf0070  ld          $ra, 0x70($sp)
    ctx->pc = 0x18cfe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x18cfe8: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x18cfe8u;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x18cfec: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x18cfecu;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x18cff0: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x18cff0u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x18cff4: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x18cff4u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x18cff8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18cff8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18cffc: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18cffcu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d000: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18d000u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d004: 0x3e00008  jr          $ra
    ctx->pc = 0x18D004u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D008u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D004u;
            // 0x18d008: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18D00Cu;
    // 0x18d00c: 0x0  nop
    ctx->pc = 0x18d00cu;
    // NOP
    ctx->pc = 0x18d010u;
}
