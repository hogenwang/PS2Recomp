#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0013FAF0
// Address: 0x13faf0 - 0x140350
void sub_0013FAF0_0x13faf0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0013FAF0_0x13faf0");
#endif

    switch (ctx->pc) {
        case 0x13fb34u: goto label_13fb34;
        case 0x13fb40u: goto label_13fb40;
        case 0x13fb70u: goto label_13fb70;
        case 0x13fc64u: goto label_13fc64;
        case 0x13ff94u: goto label_13ff94;
        case 0x13ffc0u: goto label_13ffc0;
        case 0x13fff4u: goto label_13fff4;
        case 0x140000u: goto label_140000;
        case 0x140034u: goto label_140034;
        case 0x140064u: goto label_140064;
        case 0x140094u: goto label_140094;
        case 0x1400a0u: goto label_1400a0;
        case 0x140268u: goto label_140268;
        case 0x1402bcu: goto label_1402bc;
        case 0x1402e0u: goto label_1402e0;
        case 0x140300u: goto label_140300;
        default: break;
    }

    ctx->pc = 0x13faf0u;

    // 0x13faf0: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x13faf0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x13faf4: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x13faf4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x13faf8: 0x7fbe0080  sq          $fp, 0x80($sp)
    ctx->pc = 0x13faf8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 128), GPR_VEC(ctx, 30));
    // 0x13fafc: 0x7fb70070  sq          $s7, 0x70($sp)
    ctx->pc = 0x13fafcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 112), GPR_VEC(ctx, 23));
    // 0x13fb00: 0x7fb60060  sq          $s6, 0x60($sp)
    ctx->pc = 0x13fb00u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 96), GPR_VEC(ctx, 22));
    // 0x13fb04: 0x80b82d  daddu       $s7, $a0, $zero
    ctx->pc = 0x13fb04u;
    SET_GPR_U64(ctx, 23, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fb08: 0x7fb50050  sq          $s5, 0x50($sp)
    ctx->pc = 0x13fb08u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 80), GPR_VEC(ctx, 21));
    // 0x13fb0c: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x13fb0cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fb10: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x13fb10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x13fb14: 0xa0a82d  daddu       $s5, $a1, $zero
    ctx->pc = 0x13fb14u;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fb18: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x13fb18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x13fb1c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x13fb1cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x13fb20: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x13fb20u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x13fb24: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x13fb24u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x13fb28: 0x8ca400dc  lw          $a0, 0xDC($a1)
    ctx->pc = 0x13fb28u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 220)));
    // 0x13fb2c: 0xc05c6ac  jal         func_171AB0
    ctx->pc = 0x13FB2Cu;
    SET_GPR_U32(ctx, 31, 0x13FB34u);
    ctx->pc = 0x13FB30u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FB2Cu;
            // 0x13fb30: 0x882d  daddu       $s1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x171AB0u;
    if (runtime->hasFunction(0x171AB0u)) {
        auto targetFn = runtime->lookupFunction(0x171AB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FB34u; }
        if (ctx->pc != 0x13FB34u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00171AB0_0x171ab0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FB34u; }
        if (ctx->pc != 0x13FB34u) { return; }
    }
    ctx->pc = 0x13FB34u;
label_13fb34:
    // 0x13fb34: 0x8ea400dc  lw          $a0, 0xDC($s5)
    ctx->pc = 0x13fb34u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 220)));
    // 0x13fb38: 0xc062804  jal         func_18A010
    ctx->pc = 0x13FB38u;
    SET_GPR_U32(ctx, 31, 0x13FB40u);
    ctx->pc = 0x13FB3Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FB38u;
            // 0x13fb3c: 0xafa200bc  sw          $v0, 0xBC($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 188), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A010u;
    if (runtime->hasFunction(0x18A010u)) {
        auto targetFn = runtime->lookupFunction(0x18A010u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FB40u; }
        if (ctx->pc != 0x13FB40u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A010_0x18a010(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FB40u; }
        if (ctx->pc != 0x13FB40u) { return; }
    }
    ctx->pc = 0x13FB40u;
label_13fb40:
    // 0x13fb40: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x13fb40u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fb44: 0x520001f7  beql        $s0, $zero, . + 4 + (0x1F7 << 2)
    ctx->pc = 0x13FB44u;
    {
        const bool branch_taken_0x13fb44 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fb44) {
            ctx->pc = 0x13FB48u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13FB44u;
            // 0x13fb48: 0xdfbf0090  ld          $ra, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140324u;
            goto label_140324;
        }
    }
    ctx->pc = 0x13FB4Cu;
    // 0x13fb4c: 0x8e0200dc  lw          $v0, 0xDC($s0)
    ctx->pc = 0x13fb4cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 220)));
    // 0x13fb50: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x13fb50u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13fb54: 0x3042000c  andi        $v0, $v0, 0xC
    ctx->pc = 0x13fb54u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)12);
    // 0x13fb58: 0x16e70005  bne         $s7, $a3, . + 4 + (0x5 << 2)
    ctx->pc = 0x13FB58u;
    {
        const bool branch_taken_0x13fb58 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 7));
        ctx->pc = 0x13FB5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FB58u;
            // 0x13fb5c: 0x29082  srl         $s2, $v0, 2 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)SRL32(GPR_U32(ctx, 2), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fb58) {
            ctx->pc = 0x13FB70u;
            goto label_13fb70;
        }
    }
    ctx->pc = 0x13FB60u;
    // 0x13fb60: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x13fb60u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x13fb64: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x13fb64u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x13fb68: 0xc05a888  jal         func_16A220
    ctx->pc = 0x13FB68u;
    SET_GPR_U32(ctx, 31, 0x13FB70u);
    ctx->pc = 0x13FB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FB68u;
            // 0x13fb6c: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (runtime->hasFunction(0x16A220u)) {
        auto targetFn = runtime->lookupFunction(0x16A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FB70u; }
        if (ctx->pc != 0x13FB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A220_0x16a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FB70u; }
        if (ctx->pc != 0x13FB70u) { return; }
    }
    ctx->pc = 0x13FB70u;
label_13fb70:
    // 0x13fb70: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x13fb70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x13fb74: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x13fb74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x13fb78: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x13fb78u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x13fb7c: 0x5443001b  bnel        $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x13FB7Cu;
    {
        const bool branch_taken_0x13fb7c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x13fb7c) {
            ctx->pc = 0x13FB80u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13FB7Cu;
            // 0x13fb80: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13FBECu;
            goto label_13fbec;
        }
    }
    ctx->pc = 0x13FB84u;
    // 0x13fb84: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x13fb84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x13fb88: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x13fb88u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x13fb8c: 0x90679748  lbu         $a3, -0x68B8($v1)
    ctx->pc = 0x13fb8cu;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940488)));
    // 0x13fb90: 0x3c05009c  lui         $a1, 0x9C
    ctx->pc = 0x13fb90u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)156 << 16));
    // 0x13fb94: 0x2484dc9d  addiu       $a0, $a0, -0x2363
    ctx->pc = 0x13fb94u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294958237));
    // 0x13fb98: 0x24a5db53  addiu       $a1, $a1, -0x24AD
    ctx->pc = 0x13fb98u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294957907));
    // 0x13fb9c: 0x730c0  sll         $a2, $a3, 3
    ctx->pc = 0x13fb9cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 7), 3));
    // 0x13fba0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x13fba0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x13fba4: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x13fba4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x13fba8: 0x2463dbc8  addiu       $v1, $v1, -0x2438
    ctx->pc = 0x13fba8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958024));
    // 0x13fbac: 0x630c0  sll         $a2, $a2, 3
    ctx->pc = 0x13fbacu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x13fbb0: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x13fbb0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x13fbb4: 0x638c0  sll         $a3, $a2, 3
    ctx->pc = 0x13fbb4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x13fbb8: 0x873021  addu        $a2, $a0, $a3
    ctx->pc = 0x13fbb8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 7)));
    // 0x13fbbc: 0xa72821  addu        $a1, $a1, $a3
    ctx->pc = 0x13fbbcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 7)));
    // 0x13fbc0: 0x672021  addu        $a0, $v1, $a3
    ctx->pc = 0x13fbc0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x13fbc4: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x13fbc4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13fbc8: 0x32940  sll         $a1, $v1, 5
    ctx->pc = 0x13fbc8u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 5));
    // 0x13fbcc: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x13fbccu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x13fbd0: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x13fbd0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x13fbd4: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x13fbd4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x13fbd8: 0x80a30000  lb          $v1, 0x0($a1)
    ctx->pc = 0x13fbd8u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x13fbdc: 0xa3a300a0  sb          $v1, 0xA0($sp)
    ctx->pc = 0x13fbdcu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 3));
    // 0x13fbe0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x13fbe0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13fbe4: 0x8c7e0010  lw          $fp, 0x10($v1)
    ctx->pc = 0x13fbe4u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x13fbe8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x13fbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_13fbec:
    // 0x13fbec: 0x5443001b  bnel        $v0, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x13FBECu;
    {
        const bool branch_taken_0x13fbec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x13fbec) {
            ctx->pc = 0x13FBF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13FBECu;
            // 0x13fbf0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13FC5Cu;
            goto label_13fc5c;
        }
    }
    ctx->pc = 0x13FBF4u;
    // 0x13fbf4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x13fbf4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x13fbf8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x13fbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x13fbfc: 0x90469720  lbu         $a2, -0x68E0($v0)
    ctx->pc = 0x13fbfcu;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940448)));
    // 0x13fc00: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x13fc00u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x13fc04: 0x2463dc9d  addiu       $v1, $v1, -0x2363
    ctx->pc = 0x13fc04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958237));
    // 0x13fc08: 0x2484db53  addiu       $a0, $a0, -0x24AD
    ctx->pc = 0x13fc08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957907));
    // 0x13fc0c: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x13fc0cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x13fc10: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x13fc10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x13fc14: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x13fc14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x13fc18: 0x2442dbc8  addiu       $v0, $v0, -0x2438
    ctx->pc = 0x13fc18u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294958024));
    // 0x13fc1c: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x13fc1cu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x13fc20: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x13fc20u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x13fc24: 0x530c0  sll         $a2, $a1, 3
    ctx->pc = 0x13fc24u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x13fc28: 0x662821  addu        $a1, $v1, $a2
    ctx->pc = 0x13fc28u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x13fc2c: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x13fc2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x13fc30: 0x461821  addu        $v1, $v0, $a2
    ctx->pc = 0x13fc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 6)));
    // 0x13fc34: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x13fc34u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13fc38: 0x22140  sll         $a0, $v0, 5
    ctx->pc = 0x13fc38u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 2), 5));
    // 0x13fc3c: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x13fc3cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x13fc40: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x13fc40u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x13fc44: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x13fc44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x13fc48: 0x80820000  lb          $v0, 0x0($a0)
    ctx->pc = 0x13fc48u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x13fc4c: 0xa3a200a0  sb          $v0, 0xA0($sp)
    ctx->pc = 0x13fc4cu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 160), (uint8_t)GPR_U32(ctx, 2));
    // 0x13fc50: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x13fc50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x13fc54: 0x8c5e0010  lw          $fp, 0x10($v0)
    ctx->pc = 0x13fc54u;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x13fc58: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x13fc58u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_13fc5c:
    // 0x13fc5c: 0xc060d5c  jal         func_183570
    ctx->pc = 0x13FC5Cu;
    SET_GPR_U32(ctx, 31, 0x13FC64u);
    ctx->pc = 0x13FC60u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FC5Cu;
            // 0x13fc60: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183570u;
    if (runtime->hasFunction(0x183570u)) {
        auto targetFn = runtime->lookupFunction(0x183570u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FC64u; }
        if (ctx->pc != 0x13FC64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183570_0x183570(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FC64u; }
        if (ctx->pc != 0x13FC64u) { return; }
    }
    ctx->pc = 0x13FC64u;
label_13fc64:
    // 0x13fc64: 0x10400019  beqz        $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x13FC64u;
    {
        const bool branch_taken_0x13fc64 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fc64) {
            ctx->pc = 0x13FCCCu;
            goto label_13fccc;
        }
    }
    ctx->pc = 0x13FC6Cu;
    // 0x13fc6c: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x13fc6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x13fc70: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x13fc70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x13fc74: 0xac43e8d0  sw          $v1, -0x1730($v0)
    ctx->pc = 0x13fc74u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961360), GPR_U32(ctx, 3));
    // 0x13fc78: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x13fc78u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fc7c: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x13fc7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x13fc80: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x13fc80u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x13fc84: 0x2442fff9  addiu       $v0, $v0, -0x7
    ctx->pc = 0x13fc84u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967289));
    // 0x13fc88: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x13fc88u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x13fc8c: 0x102000be  beqz        $at, . + 4 + (0xBE << 2)
    ctx->pc = 0x13FC8Cu;
    {
        const bool branch_taken_0x13fc8c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FC90u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FC8Cu;
            // 0x13fc90: 0x24160001  addiu       $s6, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fc8c) {
            ctx->pc = 0x13FF88u;
            goto label_13ff88;
        }
    }
    ctx->pc = 0x13FC94u;
    // 0x13fc94: 0x83a200a0  lb          $v0, 0xA0($sp)
    ctx->pc = 0x13fc94u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x13fc98: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x13fc98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fc9c: 0x2402001e  addiu       $v0, $zero, 0x1E
    ctx->pc = 0x13fc9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 30));
    // 0x13fca0: 0x546200ba  bnel        $v1, $v0, . + 4 + (0xBA << 2)
    ctx->pc = 0x13FCA0u;
    {
        const bool branch_taken_0x13fca0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13fca0) {
            ctx->pc = 0x13FCA4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13FCA0u;
            // 0x13fca4: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13FF8Cu;
            goto label_13ff8c;
        }
    }
    ctx->pc = 0x13FCA8u;
    // 0x13fca8: 0x97c20482  lhu         $v0, 0x482($fp)
    ctx->pc = 0x13fca8u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 1154)));
    // 0x13fcac: 0x2442ff7a  addiu       $v0, $v0, -0x86
    ctx->pc = 0x13fcacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967162));
    // 0x13fcb0: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x13fcb0u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x13fcb4: 0x102000b4  beqz        $at, . + 4 + (0xB4 << 2)
    ctx->pc = 0x13FCB4u;
    {
        const bool branch_taken_0x13fcb4 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fcb4) {
            ctx->pc = 0x13FF88u;
            goto label_13ff88;
        }
    }
    ctx->pc = 0x13FCBCu;
    // 0x13fcbc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x13fcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x13fcc0: 0xb02d  daddu       $s6, $zero, $zero
    ctx->pc = 0x13fcc0u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fcc4: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x13FCC4u;
    {
        const bool branch_taken_0x13fcc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FCC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FCC4u;
            // 0x13fcc8: 0xac40e8d0  sw          $zero, -0x1730($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961360), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fcc4) {
            ctx->pc = 0x13FF88u;
            goto label_13ff88;
        }
    }
    ctx->pc = 0x13FCCCu;
label_13fccc:
    // 0x13fccc: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x13fcccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x13fcd0: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x13fcd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x13fcd4: 0x90429780  lbu         $v0, -0x6880($v0)
    ctx->pc = 0x13fcd4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x13fcd8: 0x5443004f  bnel        $v0, $v1, . + 4 + (0x4F << 2)
    ctx->pc = 0x13FCD8u;
    {
        const bool branch_taken_0x13fcd8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x13fcd8) {
            ctx->pc = 0x13FCDCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13FCD8u;
            // 0x13fcdc: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13FE18u;
            goto label_13fe18;
        }
    }
    ctx->pc = 0x13FCE0u;
    // 0x13fce0: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x13fce0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x13fce4: 0x9063b240  lbu         $v1, -0x4DC0($v1)
    ctx->pc = 0x13fce4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947392)));
    // 0x13fce8: 0x1460004a  bnez        $v1, . + 4 + (0x4A << 2)
    ctx->pc = 0x13FCE8u;
    {
        const bool branch_taken_0x13fce8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13fce8) {
            ctx->pc = 0x13FE14u;
            goto label_13fe14;
        }
    }
    ctx->pc = 0x13FCF0u;
    // 0x13fcf0: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x13fcf0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x13fcf4: 0x9063b241  lbu         $v1, -0x4DBF($v1)
    ctx->pc = 0x13fcf4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947393)));
    // 0x13fcf8: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x13fcf8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x13fcfc: 0x10200045  beqz        $at, . + 4 + (0x45 << 2)
    ctx->pc = 0x13FCFCu;
    {
        const bool branch_taken_0x13fcfc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fcfc) {
            ctx->pc = 0x13FE14u;
            goto label_13fe14;
        }
    }
    ctx->pc = 0x13FD04u;
    // 0x13fd04: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x13fd04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x13fd08: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13fd08u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13fd0c: 0x9065b244  lbu         $a1, -0x4DBC($v1)
    ctx->pc = 0x13fd0cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947396)));
    // 0x13fd10: 0x10a40008  beq         $a1, $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13FD10u;
    {
        const bool branch_taken_0x13fd10 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x13fd10) {
            ctx->pc = 0x13FD34u;
            goto label_13fd34;
        }
    }
    ctx->pc = 0x13FD18u;
    // 0x13fd18: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x13fd18u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x13fd1c: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x13FD1Cu;
    {
        const bool branch_taken_0x13fd1c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x13fd1c) {
            ctx->pc = 0x13FD34u;
            goto label_13fd34;
        }
    }
    ctx->pc = 0x13FD24u;
    // 0x13fd24: 0x24a3fffb  addiu       $v1, $a1, -0x5
    ctx->pc = 0x13fd24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967291));
    // 0x13fd28: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x13fd28u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x13fd2c: 0x10200039  beqz        $at, . + 4 + (0x39 << 2)
    ctx->pc = 0x13FD2Cu;
    {
        const bool branch_taken_0x13fd2c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fd2c) {
            ctx->pc = 0x13FE14u;
            goto label_13fe14;
        }
    }
    ctx->pc = 0x13FD34u;
label_13fd34:
    // 0x13fd34: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x13fd34u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x13fd38: 0x8c63e8d0  lw          $v1, -0x1730($v1)
    ctx->pc = 0x13fd38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961360)));
    // 0x13fd3c: 0x58600007  blezl       $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x13FD3Cu;
    {
        const bool branch_taken_0x13fd3c = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x13fd3c) {
            ctx->pc = 0x13FD40u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13FD3Cu;
            // 0x13fd40: 0x83a300a0  lb          $v1, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13FD5Cu;
            goto label_13fd5c;
        }
    }
    ctx->pc = 0x13FD44u;
    // 0x13fd44: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x13fd44u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x13fd48: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x13fd48u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13fd4c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x13fd4cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x13fd50: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x13fd50u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fd54: 0x1000004d  b           . + 4 + (0x4D << 2)
    ctx->pc = 0x13FD54u;
    {
        const bool branch_taken_0x13fd54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FD58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FD54u;
            // 0x13fd58: 0xac64e8d0  sw          $a0, -0x1730($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961360), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fd54) {
            ctx->pc = 0x13FE8Cu;
            goto label_13fe8c;
        }
    }
    ctx->pc = 0x13FD5Cu;
label_13fd5c:
    // 0x13fd5c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x13fd5cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13fd60: 0x60282d  daddu       $a1, $v1, $zero
    ctx->pc = 0x13fd60u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fd64: 0x54a4000c  bnel        $a1, $a0, . + 4 + (0xC << 2)
    ctx->pc = 0x13FD64u;
    {
        const bool branch_taken_0x13fd64 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x13fd64) {
            ctx->pc = 0x13FD68u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13FD64u;
            // 0x13fd68: 0x24030026  addiu       $v1, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13FD98u;
            goto label_13fd98;
        }
    }
    ctx->pc = 0x13FD6Cu;
    // 0x13fd6c: 0x97c30482  lhu         $v1, 0x482($fp)
    ctx->pc = 0x13fd6cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 1154)));
    // 0x13fd70: 0x2463ff72  addiu       $v1, $v1, -0x8E
    ctx->pc = 0x13fd70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967154));
    // 0x13fd74: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x13fd74u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x13fd78: 0x50200045  beql        $at, $zero, . + 4 + (0x45 << 2)
    ctx->pc = 0x13FD78u;
    {
        const bool branch_taken_0x13fd78 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fd78) {
            ctx->pc = 0x13FD7Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13FD78u;
            // 0x13fd7c: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13FE90u;
            goto label_13fe90;
        }
    }
    ctx->pc = 0x13FD80u;
    // 0x13fd80: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x13fd80u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fd84: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x13fd84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x13fd88: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x13fd88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x13fd8c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x13fd8cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fd90: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x13FD90u;
    {
        const bool branch_taken_0x13fd90 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FD94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FD90u;
            // 0x13fd94: 0xac64e8d0  sw          $a0, -0x1730($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961360), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fd90) {
            ctx->pc = 0x13FE8Cu;
            goto label_13fe8c;
        }
    }
    ctx->pc = 0x13FD98u;
label_13fd98:
    // 0x13fd98: 0x54a3000c  bnel        $a1, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x13FD98u;
    {
        const bool branch_taken_0x13fd98 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x13fd98) {
            ctx->pc = 0x13FD9Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13FD98u;
            // 0x13fd9c: 0x24030029  addiu       $v1, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13FDCCu;
            goto label_13fdcc;
        }
    }
    ctx->pc = 0x13FDA0u;
    // 0x13fda0: 0x97c30482  lhu         $v1, 0x482($fp)
    ctx->pc = 0x13fda0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 1154)));
    // 0x13fda4: 0x2463ff7b  addiu       $v1, $v1, -0x85
    ctx->pc = 0x13fda4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967163));
    // 0x13fda8: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x13fda8u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x13fdac: 0x10200037  beqz        $at, . + 4 + (0x37 << 2)
    ctx->pc = 0x13FDACu;
    {
        const bool branch_taken_0x13fdac = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fdac) {
            ctx->pc = 0x13FE8Cu;
            goto label_13fe8c;
        }
    }
    ctx->pc = 0x13FDB4u;
    // 0x13fdb4: 0x80b02d  daddu       $s6, $a0, $zero
    ctx->pc = 0x13fdb4u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fdb8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x13fdb8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x13fdbc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x13fdbcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x13fdc0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x13fdc0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fdc4: 0x10000031  b           . + 4 + (0x31 << 2)
    ctx->pc = 0x13FDC4u;
    {
        const bool branch_taken_0x13fdc4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FDC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FDC4u;
            // 0x13fdc8: 0xac64e8d0  sw          $a0, -0x1730($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961360), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fdc4) {
            ctx->pc = 0x13FE8Cu;
            goto label_13fe8c;
        }
    }
    ctx->pc = 0x13FDCCu;
label_13fdcc:
    // 0x13fdcc: 0x14a3002f  bne         $a1, $v1, . + 4 + (0x2F << 2)
    ctx->pc = 0x13FDCCu;
    {
        const bool branch_taken_0x13fdcc = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x13fdcc) {
            ctx->pc = 0x13FE8Cu;
            goto label_13fe8c;
        }
    }
    ctx->pc = 0x13FDD4u;
    // 0x13fdd4: 0x97c40482  lhu         $a0, 0x482($fp)
    ctx->pc = 0x13fdd4u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 1154)));
    // 0x13fdd8: 0x240300a4  addiu       $v1, $zero, 0xA4
    ctx->pc = 0x13fdd8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
    // 0x13fddc: 0x50830008  beql        $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x13FDDCu;
    {
        const bool branch_taken_0x13fddc = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13fddc) {
            ctx->pc = 0x13FDE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13FDDCu;
            // 0x13fde0: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13FE00u;
            goto label_13fe00;
        }
    }
    ctx->pc = 0x13FDE4u;
    // 0x13fde4: 0x2403009e  addiu       $v1, $zero, 0x9E
    ctx->pc = 0x13fde4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    // 0x13fde8: 0x10830004  beq         $a0, $v1, . + 4 + (0x4 << 2)
    ctx->pc = 0x13FDE8u;
    {
        const bool branch_taken_0x13fde8 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 3));
        if (branch_taken_0x13fde8) {
            ctx->pc = 0x13FDFCu;
            goto label_13fdfc;
        }
    }
    ctx->pc = 0x13FDF0u;
    // 0x13fdf0: 0x2403009c  addiu       $v1, $zero, 0x9C
    ctx->pc = 0x13fdf0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    // 0x13fdf4: 0x14830025  bne         $a0, $v1, . + 4 + (0x25 << 2)
    ctx->pc = 0x13FDF4u;
    {
        const bool branch_taken_0x13fdf4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x13fdf4) {
            ctx->pc = 0x13FE8Cu;
            goto label_13fe8c;
        }
    }
    ctx->pc = 0x13FDFCu;
label_13fdfc:
    // 0x13fdfc: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x13fdfcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_13fe00:
    // 0x13fe00: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x13fe00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x13fe04: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x13fe04u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13fe08: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x13fe08u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fe0c: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x13FE0Cu;
    {
        const bool branch_taken_0x13fe0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FE10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FE0Cu;
            // 0x13fe10: 0xac64e8d0  sw          $a0, -0x1730($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 4294961360), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fe0c) {
            ctx->pc = 0x13FE8Cu;
            goto label_13fe8c;
        }
    }
    ctx->pc = 0x13FE14u;
label_13fe14:
    // 0x13fe14: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x13fe14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_13fe18:
    // 0x13fe18: 0x1443001c  bne         $v0, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x13FE18u;
    {
        const bool branch_taken_0x13fe18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x13fe18) {
            ctx->pc = 0x13FE8Cu;
            goto label_13fe8c;
        }
    }
    ctx->pc = 0x13FE20u;
    // 0x13fe20: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x13fe20u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x13fe24: 0x9063b240  lbu         $v1, -0x4DC0($v1)
    ctx->pc = 0x13fe24u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947392)));
    // 0x13fe28: 0x14600018  bnez        $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x13FE28u;
    {
        const bool branch_taken_0x13fe28 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x13fe28) {
            ctx->pc = 0x13FE8Cu;
            goto label_13fe8c;
        }
    }
    ctx->pc = 0x13FE30u;
    // 0x13fe30: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x13fe30u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x13fe34: 0x9063b241  lbu         $v1, -0x4DBF($v1)
    ctx->pc = 0x13fe34u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947393)));
    // 0x13fe38: 0x2c610002  sltiu       $at, $v1, 0x2
    ctx->pc = 0x13fe38u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x13fe3c: 0x10200013  beqz        $at, . + 4 + (0x13 << 2)
    ctx->pc = 0x13FE3Cu;
    {
        const bool branch_taken_0x13fe3c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fe3c) {
            ctx->pc = 0x13FE8Cu;
            goto label_13fe8c;
        }
    }
    ctx->pc = 0x13FE44u;
    // 0x13fe44: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x13fe44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x13fe48: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x13fe48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x13fe4c: 0x9063b244  lbu         $v1, -0x4DBC($v1)
    ctx->pc = 0x13fe4cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947396)));
    // 0x13fe50: 0x1464000e  bne         $v1, $a0, . + 4 + (0xE << 2)
    ctx->pc = 0x13FE50u;
    {
        const bool branch_taken_0x13fe50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x13fe50) {
            ctx->pc = 0x13FE8Cu;
            goto label_13fe8c;
        }
    }
    ctx->pc = 0x13FE58u;
    // 0x13fe58: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x13fe58u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x13fe5c: 0x8c63e8d8  lw          $v1, -0x1728($v1)
    ctx->pc = 0x13fe5cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961368)));
    // 0x13fe60: 0x1860000a  blez        $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x13FE60u;
    {
        const bool branch_taken_0x13fe60 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x13fe60) {
            ctx->pc = 0x13FE8Cu;
            goto label_13fe8c;
        }
    }
    ctx->pc = 0x13FE68u;
    // 0x13fe68: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x13fe68u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x13fe6c: 0x8c63e8d0  lw          $v1, -0x1730($v1)
    ctx->pc = 0x13fe6cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961360)));
    // 0x13fe70: 0x18600006  blez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x13FE70u;
    {
        const bool branch_taken_0x13fe70 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x13fe70) {
            ctx->pc = 0x13FE8Cu;
            goto label_13fe8c;
        }
    }
    ctx->pc = 0x13FE78u;
    // 0x13fe78: 0x2464ffff  addiu       $a0, $v1, -0x1
    ctx->pc = 0x13fe78u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x13fe7c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x13fe7cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13fe80: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x13fe80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x13fe84: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x13fe84u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fe88: 0xac64e8d0  sw          $a0, -0x1730($v1)
    ctx->pc = 0x13fe88u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961360), GPR_U32(ctx, 4));
label_13fe8c:
    // 0x13fe8c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x13fe8cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_13fe90:
    // 0x13fe90: 0x1443003d  bne         $v0, $v1, . + 4 + (0x3D << 2)
    ctx->pc = 0x13FE90u;
    {
        const bool branch_taken_0x13fe90 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x13fe90) {
            ctx->pc = 0x13FF88u;
            goto label_13ff88;
        }
    }
    ctx->pc = 0x13FE98u;
    // 0x13fe98: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x13fe98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x13fe9c: 0x8c42bee4  lw          $v0, -0x411C($v0)
    ctx->pc = 0x13fe9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950628)));
    // 0x13fea0: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x13fea0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x13fea4: 0x10400038  beqz        $v0, . + 4 + (0x38 << 2)
    ctx->pc = 0x13FEA4u;
    {
        const bool branch_taken_0x13fea4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fea4) {
            ctx->pc = 0x13FF88u;
            goto label_13ff88;
        }
    }
    ctx->pc = 0x13FEACu;
    // 0x13feac: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x13feacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x13feb0: 0x8c42e8d0  lw          $v0, -0x1730($v0)
    ctx->pc = 0x13feb0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294961360)));
    // 0x13feb4: 0x58400007  blezl       $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x13FEB4u;
    {
        const bool branch_taken_0x13feb4 = (GPR_S32(ctx, 2) <= 0);
        if (branch_taken_0x13feb4) {
            ctx->pc = 0x13FEB8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13FEB4u;
            // 0x13feb8: 0x83a200a0  lb          $v0, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13FED4u;
            goto label_13fed4;
        }
    }
    ctx->pc = 0x13FEBCu;
    // 0x13febc: 0x2443ffff  addiu       $v1, $v0, -0x1
    ctx->pc = 0x13febcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x13fec0: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x13fec0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fec4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x13fec4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x13fec8: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x13fec8u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13fecc: 0x1000002e  b           . + 4 + (0x2E << 2)
    ctx->pc = 0x13FECCu;
    {
        const bool branch_taken_0x13fecc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FECCu;
            // 0x13fed0: 0xac43e8d0  sw          $v1, -0x1730($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13fecc) {
            ctx->pc = 0x13FF88u;
            goto label_13ff88;
        }
    }
    ctx->pc = 0x13FED4u;
label_13fed4:
    // 0x13fed4: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x13fed4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13fed8: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x13fed8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fedc: 0x5483000c  bnel        $a0, $v1, . + 4 + (0xC << 2)
    ctx->pc = 0x13FEDCu;
    {
        const bool branch_taken_0x13fedc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x13fedc) {
            ctx->pc = 0x13FEE0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13FEDCu;
            // 0x13fee0: 0x24020026  addiu       $v0, $zero, 0x26 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 38));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13FF10u;
            goto label_13ff10;
        }
    }
    ctx->pc = 0x13FEE4u;
    // 0x13fee4: 0x97c20482  lhu         $v0, 0x482($fp)
    ctx->pc = 0x13fee4u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 1154)));
    // 0x13fee8: 0x2442ff72  addiu       $v0, $v0, -0x8E
    ctx->pc = 0x13fee8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967154));
    // 0x13feec: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x13feecu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x13fef0: 0x10200025  beqz        $at, . + 4 + (0x25 << 2)
    ctx->pc = 0x13FEF0u;
    {
        const bool branch_taken_0x13fef0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13fef0) {
            ctx->pc = 0x13FF88u;
            goto label_13ff88;
        }
    }
    ctx->pc = 0x13FEF8u;
    // 0x13fef8: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x13fef8u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fefc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x13fefcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x13ff00: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x13ff00u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x13ff04: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x13ff04u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ff08: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x13FF08u;
    {
        const bool branch_taken_0x13ff08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FF0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FF08u;
            // 0x13ff0c: 0xac43e8d0  sw          $v1, -0x1730($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ff08) {
            ctx->pc = 0x13FF88u;
            goto label_13ff88;
        }
    }
    ctx->pc = 0x13FF10u;
label_13ff10:
    // 0x13ff10: 0x5482000c  bnel        $a0, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x13FF10u;
    {
        const bool branch_taken_0x13ff10 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x13ff10) {
            ctx->pc = 0x13FF14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13FF10u;
            // 0x13ff14: 0x24020029  addiu       $v0, $zero, 0x29 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 41));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13FF44u;
            goto label_13ff44;
        }
    }
    ctx->pc = 0x13FF18u;
    // 0x13ff18: 0x97c20482  lhu         $v0, 0x482($fp)
    ctx->pc = 0x13ff18u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 1154)));
    // 0x13ff1c: 0x2442ff7b  addiu       $v0, $v0, -0x85
    ctx->pc = 0x13ff1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967163));
    // 0x13ff20: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x13ff20u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x13ff24: 0x10200018  beqz        $at, . + 4 + (0x18 << 2)
    ctx->pc = 0x13FF24u;
    {
        const bool branch_taken_0x13ff24 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ff24) {
            ctx->pc = 0x13FF88u;
            goto label_13ff88;
        }
    }
    ctx->pc = 0x13FF2Cu;
    // 0x13ff2c: 0x60b02d  daddu       $s6, $v1, $zero
    ctx->pc = 0x13ff2cu;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ff30: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x13ff30u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x13ff34: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x13ff34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x13ff38: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x13ff38u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ff3c: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x13FF3Cu;
    {
        const bool branch_taken_0x13ff3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x13FF40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x13FF3Cu;
            // 0x13ff40: 0xac43e8d0  sw          $v1, -0x1730($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294961360), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x13ff3c) {
            ctx->pc = 0x13FF88u;
            goto label_13ff88;
        }
    }
    ctx->pc = 0x13FF44u;
label_13ff44:
    // 0x13ff44: 0x14820010  bne         $a0, $v0, . + 4 + (0x10 << 2)
    ctx->pc = 0x13FF44u;
    {
        const bool branch_taken_0x13ff44 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        if (branch_taken_0x13ff44) {
            ctx->pc = 0x13FF88u;
            goto label_13ff88;
        }
    }
    ctx->pc = 0x13FF4Cu;
    // 0x13ff4c: 0x97c30482  lhu         $v1, 0x482($fp)
    ctx->pc = 0x13ff4cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 1154)));
    // 0x13ff50: 0x240200a4  addiu       $v0, $zero, 0xA4
    ctx->pc = 0x13ff50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 164));
    // 0x13ff54: 0x50620008  beql        $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x13FF54u;
    {
        const bool branch_taken_0x13ff54 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13ff54) {
            ctx->pc = 0x13FF58u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x13FF54u;
            // 0x13ff58: 0x24030005  addiu       $v1, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x13FF78u;
            goto label_13ff78;
        }
    }
    ctx->pc = 0x13FF5Cu;
    // 0x13ff5c: 0x2402009e  addiu       $v0, $zero, 0x9E
    ctx->pc = 0x13ff5cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    // 0x13ff60: 0x10620004  beq         $v1, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x13FF60u;
    {
        const bool branch_taken_0x13ff60 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x13ff60) {
            ctx->pc = 0x13FF74u;
            goto label_13ff74;
        }
    }
    ctx->pc = 0x13FF68u;
    // 0x13ff68: 0x2402009c  addiu       $v0, $zero, 0x9C
    ctx->pc = 0x13ff68u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 156));
    // 0x13ff6c: 0x14620006  bne         $v1, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x13FF6Cu;
    {
        const bool branch_taken_0x13ff6c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x13ff6c) {
            ctx->pc = 0x13FF88u;
            goto label_13ff88;
        }
    }
    ctx->pc = 0x13FF74u;
label_13ff74:
    // 0x13ff74: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x13ff74u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_13ff78:
    // 0x13ff78: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x13ff78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x13ff7c: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x13ff7cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ff80: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x13ff80u;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x13ff84: 0xac43e8d0  sw          $v1, -0x1730($v0)
    ctx->pc = 0x13ff84u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961360), GPR_U32(ctx, 3));
label_13ff88:
    // 0x13ff88: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x13ff88u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_13ff8c:
    // 0x13ff8c: 0xc060d80  jal         func_183600
    ctx->pc = 0x13FF8Cu;
    SET_GPR_U32(ctx, 31, 0x13FF94u);
    ctx->pc = 0x13FF90u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FF8Cu;
            // 0x13ff90: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183600u;
    if (runtime->hasFunction(0x183600u)) {
        auto targetFn = runtime->lookupFunction(0x183600u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FF94u; }
        if (ctx->pc != 0x13FF94u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183600_0x183600(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FF94u; }
        if (ctx->pc != 0x13FF94u) { return; }
    }
    ctx->pc = 0x13FF94u;
label_13ff94:
    // 0x13ff94: 0x10400024  beqz        $v0, . + 4 + (0x24 << 2)
    ctx->pc = 0x13FF94u;
    {
        const bool branch_taken_0x13ff94 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ff94) {
            ctx->pc = 0x140028u;
            goto label_140028;
        }
    }
    ctx->pc = 0x13FF9Cu;
    // 0x13ff9c: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x13ff9cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x13ffa0: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x13ffa0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ffa4: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x13ffa4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x13ffa8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x13ffa8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x13ffac: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x13ffacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x13ffb0: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x13ffb0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x13ffb4: 0x2442db50  addiu       $v0, $v0, -0x24B0
    ctx->pc = 0x13ffb4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957904));
    // 0x13ffb8: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x13ffb8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x13ffbc: 0x438021  addu        $s0, $v0, $v1
    ctx->pc = 0x13ffbcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_13ffc0:
    // 0x13ffc0: 0x8e0200a8  lw          $v0, 0xA8($s0)
    ctx->pc = 0x13ffc0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 168)));
    // 0x13ffc4: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x13FFC4u;
    {
        const bool branch_taken_0x13ffc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ffc4) {
            ctx->pc = 0x140018u;
            goto label_140018;
        }
    }
    ctx->pc = 0x13FFCCu;
    // 0x13ffcc: 0x8c530010  lw          $s3, 0x10($v0)
    ctx->pc = 0x13ffccu;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x13ffd0: 0x12600011  beqz        $s3, . + 4 + (0x11 << 2)
    ctx->pc = 0x13FFD0u;
    {
        const bool branch_taken_0x13ffd0 = (GPR_U64(ctx, 19) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ffd0) {
            ctx->pc = 0x140018u;
            goto label_140018;
        }
    }
    ctx->pc = 0x13FFD8u;
    // 0x13ffd8: 0x8e620490  lw          $v0, 0x490($s3)
    ctx->pc = 0x13ffd8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 1168)));
    // 0x13ffdc: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x13ffdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x13ffe0: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x13FFE0u;
    {
        const bool branch_taken_0x13ffe0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x13ffe0) {
            ctx->pc = 0x140018u;
            goto label_140018;
        }
    }
    ctx->pc = 0x13FFE8u;
    // 0x13ffe8: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x13ffe8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13ffec: 0xc04f6dc  jal         func_13DB70
    ctx->pc = 0x13FFECu;
    SET_GPR_U32(ctx, 31, 0x13FFF4u);
    ctx->pc = 0x13FFF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FFECu;
            // 0x13fff0: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB70u;
    if (runtime->hasFunction(0x13DB70u)) {
        auto targetFn = runtime->lookupFunction(0x13DB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FFF4u; }
        if (ctx->pc != 0x13FFF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DB70_0x13db70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x13FFF4u; }
        if (ctx->pc != 0x13FFF4u) { return; }
    }
    ctx->pc = 0x13FFF4u;
label_13fff4:
    // 0x13fff4: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x13fff4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x13fff8: 0xc04f874  jal         func_13E1D0
    ctx->pc = 0x13FFF8u;
    SET_GPR_U32(ctx, 31, 0x140000u);
    ctx->pc = 0x13FFFCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x13FFF8u;
            // 0x13fffc: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E1D0u;
    if (runtime->hasFunction(0x13E1D0u)) {
        auto targetFn = runtime->lookupFunction(0x13E1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140000u; }
        if (ctx->pc != 0x140000u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E1D0_0x13e1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140000u; }
        if (ctx->pc != 0x140000u) { return; }
    }
    ctx->pc = 0x140000u;
label_140000:
    // 0x140000: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x140000u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x140004: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x140004u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x140008: 0x260882d  daddu       $s1, $s3, $zero
    ctx->pc = 0x140008u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14000c: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x14000cu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140010: 0xac43e8d0  sw          $v1, -0x1730($v0)
    ctx->pc = 0x140010u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961360), GPR_U32(ctx, 3));
    // 0x140014: 0x0  nop
    ctx->pc = 0x140014u;
    // NOP
label_140018:
    // 0x140018: 0x26940001  addiu       $s4, $s4, 0x1
    ctx->pc = 0x140018u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 20), 1));
    // 0x14001c: 0x2a820006  slti        $v0, $s4, 0x6
    ctx->pc = 0x14001cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 20) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x140020: 0x1440ffe7  bnez        $v0, . + 4 + (-0x19 << 2)
    ctx->pc = 0x140020u;
    {
        const bool branch_taken_0x140020 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x140024u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140020u;
            // 0x140024: 0x26100004  addiu       $s0, $s0, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140020) {
            ctx->pc = 0x13FFC0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_13ffc0;
        }
    }
    ctx->pc = 0x140028u;
label_140028:
    // 0x140028: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x140028u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14002c: 0xc060da4  jal         func_183690
    ctx->pc = 0x14002Cu;
    SET_GPR_U32(ctx, 31, 0x140034u);
    ctx->pc = 0x140030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14002Cu;
            // 0x140030: 0x240282d  daddu       $a1, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x183690u;
    if (runtime->hasFunction(0x183690u)) {
        auto targetFn = runtime->lookupFunction(0x183690u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140034u; }
        if (ctx->pc != 0x140034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00183690_0x183690(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140034u; }
        if (ctx->pc != 0x140034u) { return; }
    }
    ctx->pc = 0x140034u;
label_140034:
    // 0x140034: 0x1040002c  beqz        $v0, . + 4 + (0x2C << 2)
    ctx->pc = 0x140034u;
    {
        const bool branch_taken_0x140034 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140034) {
            ctx->pc = 0x1400E8u;
            goto label_1400e8;
        }
    }
    ctx->pc = 0x14003Cu;
    // 0x14003c: 0x1210c0  sll         $v0, $s2, 3
    ctx->pc = 0x14003cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 18), 3));
    // 0x140040: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x140040u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140044: 0x521821  addu        $v1, $v0, $s2
    ctx->pc = 0x140044u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x140048: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x140048u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x14004c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x14004cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x140050: 0x721821  addu        $v1, $v1, $s2
    ctx->pc = 0x140050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x140054: 0x2442db50  addiu       $v0, $v0, -0x24B0
    ctx->pc = 0x140054u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957904));
    // 0x140058: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x140058u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x14005c: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x14005Cu;
    {
        const bool branch_taken_0x14005c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140060u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14005Cu;
            // 0x140060: 0x439021  addu        $s2, $v0, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14005c) {
            ctx->pc = 0x1400C0u;
            goto label_1400c0;
        }
    }
    ctx->pc = 0x140064u;
label_140064:
    // 0x140064: 0x10400014  beqz        $v0, . + 4 + (0x14 << 2)
    ctx->pc = 0x140064u;
    {
        const bool branch_taken_0x140064 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140064) {
            ctx->pc = 0x1400B8u;
            goto label_1400b8;
        }
    }
    ctx->pc = 0x14006Cu;
    // 0x14006c: 0x8c500010  lw          $s0, 0x10($v0)
    ctx->pc = 0x14006cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x140070: 0x12000011  beqz        $s0, . + 4 + (0x11 << 2)
    ctx->pc = 0x140070u;
    {
        const bool branch_taken_0x140070 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x140070) {
            ctx->pc = 0x1400B8u;
            goto label_1400b8;
        }
    }
    ctx->pc = 0x140078u;
    // 0x140078: 0x8e020490  lw          $v0, 0x490($s0)
    ctx->pc = 0x140078u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 1168)));
    // 0x14007c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14007cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x140080: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x140080u;
    {
        const bool branch_taken_0x140080 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140080) {
            ctx->pc = 0x1400B8u;
            goto label_1400b8;
        }
    }
    ctx->pc = 0x140088u;
    // 0x140088: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x140088u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x14008c: 0xc04f6dc  jal         func_13DB70
    ctx->pc = 0x14008Cu;
    SET_GPR_U32(ctx, 31, 0x140094u);
    ctx->pc = 0x140090u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x14008Cu;
            // 0x140090: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13DB70u;
    if (runtime->hasFunction(0x13DB70u)) {
        auto targetFn = runtime->lookupFunction(0x13DB70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140094u; }
        if (ctx->pc != 0x140094u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013DB70_0x13db70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140094u; }
        if (ctx->pc != 0x140094u) { return; }
    }
    ctx->pc = 0x140094u;
label_140094:
    // 0x140094: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x140094u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140098: 0xc04f874  jal         func_13E1D0
    ctx->pc = 0x140098u;
    SET_GPR_U32(ctx, 31, 0x1400A0u);
    ctx->pc = 0x14009Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140098u;
            // 0x14009c: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13E1D0u;
    if (runtime->hasFunction(0x13E1D0u)) {
        auto targetFn = runtime->lookupFunction(0x13E1D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1400A0u; }
        if (ctx->pc != 0x1400A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013E1D0_0x13e1d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1400A0u; }
        if (ctx->pc != 0x1400A0u) { return; }
    }
    ctx->pc = 0x1400A0u;
label_1400a0:
    // 0x1400a0: 0x24030005  addiu       $v1, $zero, 0x5
    ctx->pc = 0x1400a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x1400a4: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x1400a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x1400a8: 0x200882d  daddu       $s1, $s0, $zero
    ctx->pc = 0x1400a8u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1400ac: 0x24160001  addiu       $s6, $zero, 0x1
    ctx->pc = 0x1400acu;
    SET_GPR_S32(ctx, 22, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1400b0: 0xac43e8d0  sw          $v1, -0x1730($v0)
    ctx->pc = 0x1400b0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961360), GPR_U32(ctx, 3));
    // 0x1400b4: 0x0  nop
    ctx->pc = 0x1400b4u;
    // NOP
label_1400b8:
    // 0x1400b8: 0x26520004  addiu       $s2, $s2, 0x4
    ctx->pc = 0x1400b8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    // 0x1400bc: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x1400bcu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
label_1400c0:
    // 0x1400c0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x1400c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x1400c4: 0x9043f35b  lbu         $v1, -0xCA5($v0)
    ctx->pc = 0x1400c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964059)));
    // 0x1400c8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1400c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1400cc: 0x50620002  beql        $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1400CCu;
    {
        const bool branch_taken_0x1400cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1400cc) {
            ctx->pc = 0x1400D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1400CCu;
            // 0x1400d0: 0x24020008  addiu       $v0, $zero, 0x8 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1400D8u;
            goto label_1400d8;
        }
    }
    ctx->pc = 0x1400D4u;
    // 0x1400d4: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x1400d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
label_1400d8:
    // 0x1400d8: 0x262102a  slt         $v0, $s3, $v0
    ctx->pc = 0x1400d8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
    // 0x1400dc: 0x5440ffe1  bnel        $v0, $zero, . + 4 + (-0x1F << 2)
    ctx->pc = 0x1400DCu;
    {
        const bool branch_taken_0x1400dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1400dc) {
            ctx->pc = 0x1400E0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1400DCu;
            // 0x1400e0: 0x8e420100  lw          $v0, 0x100($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 256)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140064u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_140064;
        }
    }
    ctx->pc = 0x1400E4u;
    // 0x1400e4: 0x0  nop
    ctx->pc = 0x1400e4u;
    // NOP
label_1400e8:
    // 0x1400e8: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1400e8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1400ec: 0x90439780  lbu         $v1, -0x6880($v0)
    ctx->pc = 0x1400ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940544)));
    // 0x1400f0: 0x24020007  addiu       $v0, $zero, 0x7
    ctx->pc = 0x1400f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1400f4: 0x5462005a  bnel        $v1, $v0, . + 4 + (0x5A << 2)
    ctx->pc = 0x1400F4u;
    {
        const bool branch_taken_0x1400f4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x1400f4) {
            ctx->pc = 0x1400F8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1400F4u;
            // 0x1400f8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140260u;
            goto label_140260;
        }
    }
    ctx->pc = 0x1400FCu;
    // 0x1400fc: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x1400fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x140100: 0x8c42bee4  lw          $v0, -0x411C($v0)
    ctx->pc = 0x140100u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294950628)));
    // 0x140104: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x140104u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x140108: 0x10400054  beqz        $v0, . + 4 + (0x54 << 2)
    ctx->pc = 0x140108u;
    {
        const bool branch_taken_0x140108 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x140108) {
            ctx->pc = 0x14025Cu;
            goto label_14025c;
        }
    }
    ctx->pc = 0x140110u;
    // 0x140110: 0x97c20482  lhu         $v0, 0x482($fp)
    ctx->pc = 0x140110u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 30), 1154)));
    // 0x140114: 0x2403003f  addiu       $v1, $zero, 0x3F
    ctx->pc = 0x140114u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 63));
    // 0x140118: 0x54430008  bnel        $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x140118u;
    {
        const bool branch_taken_0x140118 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x140118) {
            ctx->pc = 0x14011Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140118u;
            // 0x14011c: 0x83a300a0  lb          $v1, 0xA0($sp) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14013Cu;
            goto label_14013c;
        }
    }
    ctx->pc = 0x140120u;
    // 0x140120: 0x8ea30490  lw          $v1, 0x490($s5)
    ctx->pc = 0x140120u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1168)));
    // 0x140124: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x140124u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x140128: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x140128u;
    {
        const bool branch_taken_0x140128 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x140128) {
            ctx->pc = 0x140138u;
            goto label_140138;
        }
    }
    ctx->pc = 0x140130u;
    // 0x140130: 0x1000004a  b           . + 4 + (0x4A << 2)
    ctx->pc = 0x140130u;
    {
        const bool branch_taken_0x140130 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140134u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140130u;
            // 0x140134: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140130) {
            ctx->pc = 0x14025Cu;
            goto label_14025c;
        }
    }
    ctx->pc = 0x140138u;
label_140138:
    // 0x140138: 0x83a300a0  lb          $v1, 0xA0($sp)
    ctx->pc = 0x140138u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 29), 160)));
label_14013c:
    // 0x14013c: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x14013cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x140140: 0x2403000b  addiu       $v1, $zero, 0xB
    ctx->pc = 0x140140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
    // 0x140144: 0x5483000e  bnel        $a0, $v1, . + 4 + (0xE << 2)
    ctx->pc = 0x140144u;
    {
        const bool branch_taken_0x140144 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x140144) {
            ctx->pc = 0x140148u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140144u;
            // 0x140148: 0x24030027  addiu       $v1, $zero, 0x27 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140180u;
            goto label_140180;
        }
    }
    ctx->pc = 0x14014Cu;
    // 0x14014c: 0x2403007f  addiu       $v1, $zero, 0x7F
    ctx->pc = 0x14014cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 127));
    // 0x140150: 0x50430042  beql        $v0, $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x140150u;
    {
        const bool branch_taken_0x140150 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x140150) {
            ctx->pc = 0x140154u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140150u;
            // 0x140154: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x14025Cu;
            goto label_14025c;
        }
    }
    ctx->pc = 0x140158u;
    // 0x140158: 0x24030080  addiu       $v1, $zero, 0x80
    ctx->pc = 0x140158u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x14015c: 0x10430005  beq         $v0, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x14015Cu;
    {
        const bool branch_taken_0x14015c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 3));
        if (branch_taken_0x14015c) {
            ctx->pc = 0x140174u;
            goto label_140174;
        }
    }
    ctx->pc = 0x140164u;
    // 0x140164: 0x2442ff90  addiu       $v0, $v0, -0x70
    ctx->pc = 0x140164u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967184));
    // 0x140168: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x140168u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x14016c: 0x1020003b  beqz        $at, . + 4 + (0x3B << 2)
    ctx->pc = 0x14016Cu;
    {
        const bool branch_taken_0x14016c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14016c) {
            ctx->pc = 0x14025Cu;
            goto label_14025c;
        }
    }
    ctx->pc = 0x140174u;
label_140174:
    // 0x140174: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x140174u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140178: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x140178u;
    {
        const bool branch_taken_0x140178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x140178) {
            ctx->pc = 0x14025Cu;
            goto label_14025c;
        }
    }
    ctx->pc = 0x140180u;
label_140180:
    // 0x140180: 0x5483000b  bnel        $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x140180u;
    {
        const bool branch_taken_0x140180 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x140180) {
            ctx->pc = 0x140184u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140180u;
            // 0x140184: 0x24030025  addiu       $v1, $zero, 0x25 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 37));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1401B0u;
            goto label_1401b0;
        }
    }
    ctx->pc = 0x140188u;
    // 0x140188: 0x2442ffbb  addiu       $v0, $v0, -0x45
    ctx->pc = 0x140188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967227));
    // 0x14018c: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x14018cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x140190: 0x10200032  beqz        $at, . + 4 + (0x32 << 2)
    ctx->pc = 0x140190u;
    {
        const bool branch_taken_0x140190 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x140190) {
            ctx->pc = 0x14025Cu;
            goto label_14025c;
        }
    }
    ctx->pc = 0x140198u;
    // 0x140198: 0x8ea20490  lw          $v0, 0x490($s5)
    ctx->pc = 0x140198u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 1168)));
    // 0x14019c: 0x30422000  andi        $v0, $v0, 0x2000
    ctx->pc = 0x14019cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)8192);
    // 0x1401a0: 0x1440002e  bnez        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1401A0u;
    {
        const bool branch_taken_0x1401a0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1401a0) {
            ctx->pc = 0x14025Cu;
            goto label_14025c;
        }
    }
    ctx->pc = 0x1401A8u;
    // 0x1401a8: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x1401A8u;
    {
        const bool branch_taken_0x1401a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1401ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1401A8u;
            // 0x1401ac: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1401a8) {
            ctx->pc = 0x14025Cu;
            goto label_14025c;
        }
    }
    ctx->pc = 0x1401B0u;
label_1401b0:
    // 0x1401b0: 0x54830007  bnel        $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1401B0u;
    {
        const bool branch_taken_0x1401b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1401b0) {
            ctx->pc = 0x1401B4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1401B0u;
            // 0x1401b4: 0x24030011  addiu       $v1, $zero, 0x11 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1401D0u;
            goto label_1401d0;
        }
    }
    ctx->pc = 0x1401B8u;
    // 0x1401b8: 0x2442ff92  addiu       $v0, $v0, -0x6E
    ctx->pc = 0x1401b8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967186));
    // 0x1401bc: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x1401bcu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x1401c0: 0x10200026  beqz        $at, . + 4 + (0x26 << 2)
    ctx->pc = 0x1401C0u;
    {
        const bool branch_taken_0x1401c0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x1401c0) {
            ctx->pc = 0x14025Cu;
            goto label_14025c;
        }
    }
    ctx->pc = 0x1401C8u;
    // 0x1401c8: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x1401C8u;
    {
        const bool branch_taken_0x1401c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1401CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1401C8u;
            // 0x1401cc: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1401c8) {
            ctx->pc = 0x14025Cu;
            goto label_14025c;
        }
    }
    ctx->pc = 0x1401D0u;
label_1401d0:
    // 0x1401d0: 0x54830006  bnel        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1401D0u;
    {
        const bool branch_taken_0x1401d0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1401d0) {
            ctx->pc = 0x1401D4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1401D0u;
            // 0x1401d4: 0x24030003  addiu       $v1, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1401ECu;
            goto label_1401ec;
        }
    }
    ctx->pc = 0x1401D8u;
    // 0x1401d8: 0x2403003e  addiu       $v1, $zero, 0x3E
    ctx->pc = 0x1401d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 62));
    // 0x1401dc: 0x1443001f  bne         $v0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x1401DCu;
    {
        const bool branch_taken_0x1401dc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1401dc) {
            ctx->pc = 0x14025Cu;
            goto label_14025c;
        }
    }
    ctx->pc = 0x1401E4u;
    // 0x1401e4: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x1401E4u;
    {
        const bool branch_taken_0x1401e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1401E8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1401E4u;
            // 0x1401e8: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1401e4) {
            ctx->pc = 0x14025Cu;
            goto label_14025c;
        }
    }
    ctx->pc = 0x1401ECu;
label_1401ec:
    // 0x1401ec: 0x54830006  bnel        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x1401ECu;
    {
        const bool branch_taken_0x1401ec = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1401ec) {
            ctx->pc = 0x1401F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1401ECu;
            // 0x1401f0: 0x24030014  addiu       $v1, $zero, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140208u;
            goto label_140208;
        }
    }
    ctx->pc = 0x1401F4u;
    // 0x1401f4: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x1401f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x1401f8: 0x14430018  bne         $v0, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x1401F8u;
    {
        const bool branch_taken_0x1401f8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1401f8) {
            ctx->pc = 0x14025Cu;
            goto label_14025c;
        }
    }
    ctx->pc = 0x140200u;
    // 0x140200: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x140200u;
    {
        const bool branch_taken_0x140200 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140204u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140200u;
            // 0x140204: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140200) {
            ctx->pc = 0x14025Cu;
            goto label_14025c;
        }
    }
    ctx->pc = 0x140208u;
label_140208:
    // 0x140208: 0x54830006  bnel        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x140208u;
    {
        const bool branch_taken_0x140208 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x140208) {
            ctx->pc = 0x14020Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140208u;
            // 0x14020c: 0x2403002d  addiu       $v1, $zero, 0x2D (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140224u;
            goto label_140224;
        }
    }
    ctx->pc = 0x140210u;
    // 0x140210: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x140210u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x140214: 0x14430011  bne         $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x140214u;
    {
        const bool branch_taken_0x140214 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x140214) {
            ctx->pc = 0x14025Cu;
            goto label_14025c;
        }
    }
    ctx->pc = 0x14021Cu;
    // 0x14021c: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x14021Cu;
    {
        const bool branch_taken_0x14021c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x140220u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14021Cu;
            // 0x140220: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14021c) {
            ctx->pc = 0x14025Cu;
            goto label_14025c;
        }
    }
    ctx->pc = 0x140224u;
label_140224:
    // 0x140224: 0x54830006  bnel        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x140224u;
    {
        const bool branch_taken_0x140224 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x140224) {
            ctx->pc = 0x140228u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140224u;
            // 0x140228: 0x2403002a  addiu       $v1, $zero, 0x2A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 42));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140240u;
            goto label_140240;
        }
    }
    ctx->pc = 0x14022Cu;
    // 0x14022c: 0x24030047  addiu       $v1, $zero, 0x47
    ctx->pc = 0x14022cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 71));
    // 0x140230: 0x1443000a  bne         $v0, $v1, . + 4 + (0xA << 2)
    ctx->pc = 0x140230u;
    {
        const bool branch_taken_0x140230 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x140230) {
            ctx->pc = 0x14025Cu;
            goto label_14025c;
        }
    }
    ctx->pc = 0x140238u;
    // 0x140238: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x140238u;
    {
        const bool branch_taken_0x140238 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14023Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140238u;
            // 0x14023c: 0x24170001  addiu       $s7, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140238) {
            ctx->pc = 0x14025Cu;
            goto label_14025c;
        }
    }
    ctx->pc = 0x140240u;
label_140240:
    // 0x140240: 0x14830006  bne         $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x140240u;
    {
        const bool branch_taken_0x140240 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x140240) {
            ctx->pc = 0x14025Cu;
            goto label_14025c;
        }
    }
    ctx->pc = 0x140248u;
    // 0x140248: 0x2442ff85  addiu       $v0, $v0, -0x7B
    ctx->pc = 0x140248u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967173));
    // 0x14024c: 0x2c410002  sltiu       $at, $v0, 0x2
    ctx->pc = 0x14024cu;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)2) ? 1 : 0);
    // 0x140250: 0x10200002  beqz        $at, . + 4 + (0x2 << 2)
    ctx->pc = 0x140250u;
    {
        const bool branch_taken_0x140250 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x140250) {
            ctx->pc = 0x14025Cu;
            goto label_14025c;
        }
    }
    ctx->pc = 0x140258u;
    // 0x140258: 0x24170001  addiu       $s7, $zero, 0x1
    ctx->pc = 0x140258u;
    SET_GPR_S32(ctx, 23, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_14025c:
    // 0x14025c: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x14025cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
label_140260:
    // 0x140260: 0xc04f360  jal         func_13CD80
    ctx->pc = 0x140260u;
    SET_GPR_U32(ctx, 31, 0x140268u);
    ctx->pc = 0x140264u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x140260u;
            // 0x140264: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CD80u;
    if (runtime->hasFunction(0x13CD80u)) {
        auto targetFn = runtime->lookupFunction(0x13CD80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140268u; }
        if (ctx->pc != 0x140268u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CD80_0x13cd80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140268u; }
        if (ctx->pc != 0x140268u) { return; }
    }
    ctx->pc = 0x140268u;
label_140268:
    // 0x140268: 0x12c0002d  beqz        $s6, . + 4 + (0x2D << 2)
    ctx->pc = 0x140268u;
    {
        const bool branch_taken_0x140268 = (GPR_U64(ctx, 22) == GPR_U64(ctx, 0));
        if (branch_taken_0x140268) {
            ctx->pc = 0x140320u;
            goto label_140320;
        }
    }
    ctx->pc = 0x140270u;
    // 0x140270: 0x8ea40238  lw          $a0, 0x238($s5)
    ctx->pc = 0x140270u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 568)));
    // 0x140274: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x140274u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x140278: 0x34840040  ori         $a0, $a0, 0x40
    ctx->pc = 0x140278u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)64);
    // 0x14027c: 0x12e3001a  beq         $s7, $v1, . + 4 + (0x1A << 2)
    ctx->pc = 0x14027Cu;
    {
        const bool branch_taken_0x14027c = (GPR_U64(ctx, 23) == GPR_U64(ctx, 3));
        ctx->pc = 0x140280u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x14027Cu;
            // 0x140280: 0xaea40238  sw          $a0, 0x238($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 568), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14027c) {
            ctx->pc = 0x1402E8u;
            goto label_1402e8;
        }
    }
    ctx->pc = 0x140284u;
    // 0x140284: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x140284u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140288: 0x52e7000e  beql        $s7, $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x140288u;
    {
        const bool branch_taken_0x140288 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 7));
        if (branch_taken_0x140288) {
            ctx->pc = 0x14028Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140288u;
            // 0x14028c: 0x8ea3023c  lw          $v1, 0x23C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 572)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1402C4u;
            goto label_1402c4;
        }
    }
    ctx->pc = 0x140290u;
    // 0x140290: 0x52e00003  beql        $s7, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x140290u;
    {
        const bool branch_taken_0x140290 = (GPR_U64(ctx, 23) == GPR_U64(ctx, 0));
        if (branch_taken_0x140290) {
            ctx->pc = 0x140294u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140290u;
            // 0x140294: 0x8ea3023c  lw          $v1, 0x23C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 572)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1402A0u;
            goto label_1402a0;
        }
    }
    ctx->pc = 0x140298u;
    // 0x140298: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x140298u;
    {
        const bool branch_taken_0x140298 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14029Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140298u;
            // 0x14029c: 0x86a3020c  lh          $v1, 0x20C($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 524)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x140298) {
            ctx->pc = 0x140304u;
            goto label_140304;
        }
    }
    ctx->pc = 0x1402A0u;
label_1402a0:
    // 0x1402a0: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x1402a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1402a4: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x1402a4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1402a8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x1402a8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1402ac: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1402acu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1402b0: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1402b0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1402b4: 0xc05a888  jal         func_16A220
    ctx->pc = 0x1402B4u;
    SET_GPR_U32(ctx, 31, 0x1402BCu);
    ctx->pc = 0x1402B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1402B4u;
            // 0x1402b8: 0xaea2023c  sw          $v0, 0x23C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 572), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (runtime->hasFunction(0x16A220u)) {
        auto targetFn = runtime->lookupFunction(0x16A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1402BCu; }
        if (ctx->pc != 0x1402BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A220_0x16a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1402BCu; }
        if (ctx->pc != 0x1402BCu) { return; }
    }
    ctx->pc = 0x1402BCu;
label_1402bc:
    // 0x1402bc: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1402BCu;
    {
        const bool branch_taken_0x1402bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1402bc) {
            ctx->pc = 0x140300u;
            goto label_140300;
        }
    }
    ctx->pc = 0x1402C4u;
label_1402c4:
    // 0x1402c4: 0x2402ff7f  addiu       $v0, $zero, -0x81
    ctx->pc = 0x1402c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967167));
    // 0x1402c8: 0x8fa400bc  lw          $a0, 0xBC($sp)
    ctx->pc = 0x1402c8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x1402cc: 0x24050007  addiu       $a1, $zero, 0x7
    ctx->pc = 0x1402ccu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1402d0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x1402d0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1402d4: 0x621024  and         $v0, $v1, $v0
    ctx->pc = 0x1402d4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & GPR_U64(ctx, 2));
    // 0x1402d8: 0xc05a888  jal         func_16A220
    ctx->pc = 0x1402D8u;
    SET_GPR_U32(ctx, 31, 0x1402E0u);
    ctx->pc = 0x1402DCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1402D8u;
            // 0x1402dc: 0xaea2023c  sw          $v0, 0x23C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 572), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x16A220u;
    if (runtime->hasFunction(0x16A220u)) {
        auto targetFn = runtime->lookupFunction(0x16A220u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1402E0u; }
        if (ctx->pc != 0x1402E0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0016A220_0x16a220(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1402E0u; }
        if (ctx->pc != 0x1402E0u) { return; }
    }
    ctx->pc = 0x1402E0u;
label_1402e0:
    // 0x1402e0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1402E0u;
    {
        const bool branch_taken_0x1402e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1402e0) {
            ctx->pc = 0x140300u;
            goto label_140300;
        }
    }
    ctx->pc = 0x1402E8u;
label_1402e8:
    // 0x1402e8: 0x8ea2023c  lw          $v0, 0x23C($s5)
    ctx->pc = 0x1402e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 21), 572)));
    // 0x1402ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x1402ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1402f0: 0x2a0202d  daddu       $a0, $s5, $zero
    ctx->pc = 0x1402f0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1402f4: 0x34420080  ori         $v0, $v0, 0x80
    ctx->pc = 0x1402f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)128);
    // 0x1402f8: 0xc04f388  jal         func_13CE20
    ctx->pc = 0x1402F8u;
    SET_GPR_U32(ctx, 31, 0x140300u);
    ctx->pc = 0x1402FCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1402F8u;
            // 0x1402fc: 0xaea2023c  sw          $v0, 0x23C($s5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 21), 572), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x13CE20u;
    if (runtime->hasFunction(0x13CE20u)) {
        auto targetFn = runtime->lookupFunction(0x13CE20u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140300u; }
        if (ctx->pc != 0x140300u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0013CE20_0x13ce20(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x140300u; }
        if (ctx->pc != 0x140300u) { return; }
    }
    ctx->pc = 0x140300u;
label_140300:
    // 0x140300: 0x86a3020c  lh          $v1, 0x20C($s5)
    ctx->pc = 0x140300u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 524)));
label_140304:
    // 0x140304: 0x50600004  beql        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x140304u;
    {
        const bool branch_taken_0x140304 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x140304) {
            ctx->pc = 0x140308u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x140304u;
            // 0x140308: 0x86a30228  lh          $v1, 0x228($s5) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 552)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x140318u;
            goto label_140318;
        }
    }
    ctx->pc = 0x14030Cu;
    // 0x14030c: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x14030cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x140310: 0xa6a3020c  sh          $v1, 0x20C($s5)
    ctx->pc = 0x140310u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 524), (uint16_t)GPR_U32(ctx, 3));
    // 0x140314: 0x86a30228  lh          $v1, 0x228($s5)
    ctx->pc = 0x140314u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 21), 552)));
label_140318:
    // 0x140318: 0xa6a3022a  sh          $v1, 0x22A($s5)
    ctx->pc = 0x140318u;
    WRITE16(ADD32(GPR_U32(ctx, 21), 554), (uint16_t)GPR_U32(ctx, 3));
    // 0x14031c: 0xa6a00228  sh          $zero, 0x228($s5)
    ctx->pc = 0x14031cu;
    WRITE16(ADD32(GPR_U32(ctx, 21), 552), (uint16_t)GPR_U32(ctx, 0));
label_140320:
    // 0x140320: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x140320u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_140324:
    // 0x140324: 0x7bbe0080  lq          $fp, 0x80($sp)
    ctx->pc = 0x140324u;
    SET_GPR_VEC(ctx, 30, READ128(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x140328: 0x7bb70070  lq          $s7, 0x70($sp)
    ctx->pc = 0x140328u;
    SET_GPR_VEC(ctx, 23, READ128(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x14032c: 0x7bb60060  lq          $s6, 0x60($sp)
    ctx->pc = 0x14032cu;
    SET_GPR_VEC(ctx, 22, READ128(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x140330: 0x7bb50050  lq          $s5, 0x50($sp)
    ctx->pc = 0x140330u;
    SET_GPR_VEC(ctx, 21, READ128(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x140334: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x140334u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x140338: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x140338u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x14033c: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x14033cu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x140340: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x140340u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x140344: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x140344u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x140348: 0x3e00008  jr          $ra
    ctx->pc = 0x140348u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14034Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x140348u;
            // 0x14034c: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x140350u;
    ctx->pc = 0x140350u;
}
