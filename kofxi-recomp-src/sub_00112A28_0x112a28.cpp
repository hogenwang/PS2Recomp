#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00112A28
// Address: 0x112a28 - 0x112ce8
void sub_00112A28_0x112a28(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00112A28_0x112a28");
#endif

    switch (ctx->pc) {
        case 0x112a68u: goto label_112a68;
        case 0x112a74u: goto label_112a74;
        case 0x112aa0u: goto label_112aa0;
        case 0x112aecu: goto label_112aec;
        case 0x112b14u: goto label_112b14;
        case 0x112b50u: goto label_112b50;
        case 0x112b8cu: goto label_112b8c;
        case 0x112bd8u: goto label_112bd8;
        case 0x112bf0u: goto label_112bf0;
        case 0x112c48u: goto label_112c48;
        case 0x112c58u: goto label_112c58;
        case 0x112c60u: goto label_112c60;
        case 0x112c74u: goto label_112c74;
        case 0x112c84u: goto label_112c84;
        case 0x112c9cu: goto label_112c9c;
        case 0x112cacu: goto label_112cac;
        case 0x112cb4u: goto label_112cb4;
        default: break;
    }

    ctx->pc = 0x112a28u;

    // 0x112a28: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x112a28u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x112a2c: 0xffb600a0  sd          $s6, 0xA0($sp)
    ctx->pc = 0x112a2cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 22));
    // 0x112a30: 0xffb10050  sd          $s1, 0x50($sp)
    ctx->pc = 0x112a30u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 17));
    // 0x112a34: 0xc0b02d  daddu       $s6, $a2, $zero
    ctx->pc = 0x112a34u;
    SET_GPR_U64(ctx, 22, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112a38: 0xffbe00c0  sd          $fp, 0xC0($sp)
    ctx->pc = 0x112a38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 30));
    // 0x112a3c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x112a3cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112a40: 0xffb20060  sd          $s2, 0x60($sp)
    ctx->pc = 0x112a40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 18));
    // 0x112a44: 0x3c1e0041  lui         $fp, 0x41
    ctx->pc = 0x112a44u;
    SET_GPR_S32(ctx, 30, (int32_t)((uint32_t)65 << 16));
    // 0x112a48: 0xffb00040  sd          $s0, 0x40($sp)
    ctx->pc = 0x112a48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 16));
    // 0x112a4c: 0x27d28280  addiu       $s2, $fp, -0x7D80
    ctx->pc = 0x112a4cu;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 30), 4294935168));
    // 0x112a50: 0xffbf00d0  sd          $ra, 0xD0($sp)
    ctx->pc = 0x112a50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 208), GPR_U64(ctx, 31));
    // 0x112a54: 0xffb700b0  sd          $s7, 0xB0($sp)
    ctx->pc = 0x112a54u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 23));
    // 0x112a58: 0xffb50090  sd          $s5, 0x90($sp)
    ctx->pc = 0x112a58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 21));
    // 0x112a5c: 0xffb40080  sd          $s4, 0x80($sp)
    ctx->pc = 0x112a5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 20));
    // 0x112a60: 0xc0445b2  jal         func_1116C8
    ctx->pc = 0x112A60u;
    SET_GPR_U32(ctx, 31, 0x112A68u);
    ctx->pc = 0x112A64u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112A60u;
            // 0x112a64: 0xffb30070  sd          $s3, 0x70($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 19));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1116C8u;
    if (runtime->hasFunction(0x1116C8u)) {
        auto targetFn = runtime->lookupFunction(0x1116C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112A68u; }
        if (ctx->pc != 0x112A68u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001116C8_0x1116c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112A68u; }
        if (ctx->pc != 0x112A68u) { return; }
    }
    ctx->pc = 0x112A68u;
label_112a68:
    // 0x112a68: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x112a68u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112a6c: 0xc0446d2  jal         func_111B48
    ctx->pc = 0x112A6Cu;
    SET_GPR_U32(ctx, 31, 0x112A74u);
    ctx->pc = 0x112A70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112A6Cu;
            // 0x112a70: 0x24040003  addiu       $a0, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111B48u;
    if (runtime->hasFunction(0x111B48u)) {
        auto targetFn = runtime->lookupFunction(0x111B48u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112A74u; }
        if (ctx->pc != 0x112A74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B48_0x111b48(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112A74u; }
        if (ctx->pc != 0x112A74u) { return; }
    }
    ctx->pc = 0x112A74u;
label_112a74:
    // 0x112a74: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x112a74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x112a78: 0x8c62873c  lw          $v0, -0x78C4($v1)
    ctx->pc = 0x112a78u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294936380)));
    // 0x112a7c: 0x10400006  beqz        $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x112A7Cu;
    {
        const bool branch_taken_0x112a7c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x112a7c) {
            ctx->pc = 0x112A98u;
            goto label_112a98;
        }
    }
    ctx->pc = 0x112A84u;
    // 0x112a84: 0x12000004  beqz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x112A84u;
    {
        const bool branch_taken_0x112a84 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        if (branch_taken_0x112a84) {
            ctx->pc = 0x112A98u;
            goto label_112a98;
        }
    }
    ctx->pc = 0x112A8Cu;
    // 0x112a8c: 0x8e170004  lw          $s7, 0x4($s0)
    ctx->pc = 0x112a8cu;
    SET_GPR_S32(ctx, 23, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x112a90: 0x16e00005  bnez        $s7, . + 4 + (0x5 << 2)
    ctx->pc = 0x112A90u;
    {
        const bool branch_taken_0x112a90 = (GPR_U64(ctx, 23) != GPR_U64(ctx, 0));
        ctx->pc = 0x112A94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112A90u;
            // 0x112a94: 0x3c020041  lui         $v0, 0x41 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112a90) {
            ctx->pc = 0x112AA8u;
            goto label_112aa8;
        }
    }
    ctx->pc = 0x112A98u;
label_112a98:
    // 0x112a98: 0xc0446de  jal         func_111B78
    ctx->pc = 0x112A98u;
    SET_GPR_U32(ctx, 31, 0x112AA0u);
    ctx->pc = 0x111B78u;
    if (runtime->hasFunction(0x111B78u)) {
        auto targetFn = runtime->lookupFunction(0x111B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112AA0u; }
        if (ctx->pc != 0x112AA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B78_0x111b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112AA0u; }
        if (ctx->pc != 0x112AA0u) { return; }
    }
    ctx->pc = 0x112AA0u;
label_112aa0:
    // 0x112aa0: 0x10000085  b           . + 4 + (0x85 << 2)
    ctx->pc = 0x112AA0u;
    {
        const bool branch_taken_0x112aa0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112AA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112AA0u;
            // 0x112aa4: 0x2402fff7  addiu       $v0, $zero, -0x9 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112aa0) {
            ctx->pc = 0x112CB8u;
            goto label_112cb8;
        }
    }
    ctx->pc = 0x112AA8u;
label_112aa8:
    // 0x112aa8: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x112aa8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x112aac: 0x24429780  addiu       $v0, $v0, -0x6880
    ctx->pc = 0x112aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940544));
    // 0x112ab0: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x112ab0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x112ab4: 0x2021023  subu        $v0, $s0, $v0
    ctx->pc = 0x112ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x112ab8: 0xae44000c  sw          $a0, 0xC($s2)
    ctx->pc = 0x112ab8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 12), GPR_U32(ctx, 4));
    // 0x112abc: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x112abcu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x112ac0: 0x2463a8c0  addiu       $v1, $v1, -0x5740
    ctx->pc = 0x112ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294944960));
    // 0x112ac4: 0xae42002c  sw          $v0, 0x2C($s2)
    ctx->pc = 0x112ac4u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 44), GPR_U32(ctx, 2));
    // 0x112ac8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x112ac8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x112acc: 0xafa50014  sw          $a1, 0x14($sp)
    ctx->pc = 0x112accu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 5));
    // 0x112ad0: 0x27a40010  addiu       $a0, $sp, 0x10
    ctx->pc = 0x112ad0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
    // 0x112ad4: 0xafa30024  sw          $v1, 0x24($sp)
    ctx->pc = 0x112ad4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 36), GPR_U32(ctx, 3));
    // 0x112ad8: 0x32f08000  andi        $s0, $s7, 0x8000
    ctx->pc = 0x112ad8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 23) & (uint64_t)(uint16_t)32768);
    // 0x112adc: 0xae560014  sw          $s6, 0x14($s2)
    ctx->pc = 0x112adcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 20), GPR_U32(ctx, 22));
    // 0x112ae0: 0xae510010  sw          $s1, 0x10($s2)
    ctx->pc = 0x112ae0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 16), GPR_U32(ctx, 17));
    // 0x112ae4: 0xc043318  jal         func_10CC60
    ctx->pc = 0x112AE4u;
    SET_GPR_U32(ctx, 31, 0x112AECu);
    ctx->pc = 0x112AE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112AE4u;
            // 0x112ae8: 0xafa00018  sw          $zero, 0x18($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 24), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC60u;
    if (runtime->hasFunction(0x10CC60u)) {
        auto targetFn = runtime->lookupFunction(0x10CC60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112AECu; }
        if (ctx->pc != 0x112AECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallCreateSemaWrapper_0x10cc60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112AECu; }
        if (ctx->pc != 0x112AECu) { return; }
    }
    ctx->pc = 0x112AECu;
label_112aec:
    // 0x112aec: 0x40a82d  daddu       $s5, $v0, $zero
    ctx->pc = 0x112aecu;
    SET_GPR_U64(ctx, 21, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112af0: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x112af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x112af4: 0x27a20030  addiu       $v0, $sp, 0x30
    ctx->pc = 0x112af4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
    // 0x112af8: 0xae430008  sw          $v1, 0x8($s2)
    ctx->pc = 0x112af8u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 8), GPR_U32(ctx, 3));
    // 0x112afc: 0xae420004  sw          $v0, 0x4($s2)
    ctx->pc = 0x112afcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4), GPR_U32(ctx, 2));
    // 0x112b00: 0x12000024  beqz        $s0, . + 4 + (0x24 << 2)
    ctx->pc = 0x112B00u;
    {
        const bool branch_taken_0x112b00 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x112B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112B00u;
            // 0x112b04: 0xafd58280  sw          $s5, -0x7D80($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 4294935168), GPR_U32(ctx, 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112b00) {
            ctx->pc = 0x112B94u;
            goto label_112b94;
        }
    }
    ctx->pc = 0x112B08u;
    // 0x112b08: 0x3c130036  lui         $s3, 0x36
    ctx->pc = 0x112b08u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)54 << 16));
    // 0x112b0c: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x112B0Cu;
    SET_GPR_U32(ctx, 31, 0x112B14u);
    ctx->pc = 0x112B10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112B0Cu;
            // 0x112b10: 0x8e64874c  lw          $a0, -0x78B4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936396)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112B14u; }
        if (ctx->pc != 0x112B14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112B14u; }
        if (ctx->pc != 0x112B14u) { return; }
    }
    ctx->pc = 0x112B14u;
label_112b14:
    // 0x112b14: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x112b14u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x112b18: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x112b18u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112b1c: 0x8ce386b8  lw          $v1, -0x7948($a3)
    ctx->pc = 0x112b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 7), 4294936248)));
    // 0x112b20: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x112b20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x112b24: 0x14620008  bne         $v1, $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x112B24u;
    {
        const bool branch_taken_0x112b24 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x112B28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112B24u;
            // 0x112b28: 0x200a02d  daddu       $s4, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112b24) {
            ctx->pc = 0x112B48u;
            goto label_112b48;
        }
    }
    ctx->pc = 0x112B2Cu;
    // 0x112b2c: 0x8fc38280  lw          $v1, -0x7D80($fp)
    ctx->pc = 0x112b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294935168)));
    // 0x112b30: 0x3230000f  andi        $s0, $s1, 0xF
    ctx->pc = 0x112b30u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x112b34: 0x31023  negu        $v0, $v1
    ctx->pc = 0x112b34u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 3)));
    // 0x112b38: 0xace386b8  sw          $v1, -0x7948($a3)
    ctx->pc = 0x112b38u;
    WRITE32(ADD32(GPR_U32(ctx, 7), 4294936248), GPR_U32(ctx, 3));
    // 0x112b3c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x112B3Cu;
    {
        const bool branch_taken_0x112b3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112B3Cu;
            // 0x112b40: 0xafc28280  sw          $v0, -0x7D80($fp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 30), 4294935168), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112b3c) {
            ctx->pc = 0x112B84u;
            goto label_112b84;
        }
    }
    ctx->pc = 0x112B44u;
    // 0x112b44: 0x0  nop
    ctx->pc = 0x112b44u;
    // NOP
label_112b48:
    // 0x112b48: 0x3230000f  andi        $s0, $s1, 0xF
    ctx->pc = 0x112b48u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x112b4c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x112b4cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
label_112b50:
    // 0x112b50: 0x28c20020  slti        $v0, $a2, 0x20
    ctx->pc = 0x112b50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x112b54: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x112B54u;
    {
        const bool branch_taken_0x112b54 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x112B58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112B54u;
            // 0x112b58: 0x61080  sll         $v0, $a2, 2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112b54) {
            ctx->pc = 0x112B84u;
            goto label_112b84;
        }
    }
    ctx->pc = 0x112B5Cu;
    // 0x112b5c: 0x24e386b8  addiu       $v1, $a3, -0x7948
    ctx->pc = 0x112b5cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), 4294936248));
    // 0x112b60: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x112b60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x112b64: 0x2404ffff  addiu       $a0, $zero, -0x1
    ctx->pc = 0x112b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x112b68: 0x8ca20000  lw          $v0, 0x0($a1)
    ctx->pc = 0x112b68u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x112b6c: 0x1444fff8  bne         $v0, $a0, . + 4 + (-0x8 << 2)
    ctx->pc = 0x112B6Cu;
    {
        const bool branch_taken_0x112b6c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        ctx->pc = 0x112B70u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112B6Cu;
            // 0x112b70: 0x24c60001  addiu       $a2, $a2, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112b6c) {
            ctx->pc = 0x112B50u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_112b50;
        }
    }
    ctx->pc = 0x112B74u;
    // 0x112b74: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x112b74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x112b78: 0x21823  negu        $v1, $v0
    ctx->pc = 0x112b78u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 2)));
    // 0x112b7c: 0xaca20000  sw          $v0, 0x0($a1)
    ctx->pc = 0x112b7cu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 2));
    // 0x112b80: 0xae430000  sw          $v1, 0x0($s2)
    ctx->pc = 0x112b80u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 3));
label_112b84:
    // 0x112b84: 0xc043320  jal         func_10CC80
    ctx->pc = 0x112B84u;
    SET_GPR_U32(ctx, 31, 0x112B8Cu);
    ctx->pc = 0x112B88u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112B84u;
            // 0x112b88: 0x8e64874c  lw          $a0, -0x78B4($s3) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 4294936396)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (runtime->hasFunction(0x10CC80u)) {
        auto targetFn = runtime->lookupFunction(0x10CC80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112B8Cu; }
        if (ctx->pc != 0x112B8Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC80_0x10cc80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112B8Cu; }
        if (ctx->pc != 0x112B8Cu) { return; }
    }
    ctx->pc = 0x112B8Cu;
label_112b8c:
    // 0x112b8c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x112B8Cu;
    {
        const bool branch_taken_0x112b8c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x112b8c) {
            ctx->pc = 0x112B9Cu;
            goto label_112b9c;
        }
    }
    ctx->pc = 0x112B94u;
label_112b94:
    // 0x112b94: 0x3230000f  andi        $s0, $s1, 0xF
    ctx->pc = 0x112b94u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)15);
    // 0x112b98: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x112b98u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_112b9c:
    // 0x112b9c: 0x16000003  bnez        $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x112B9Cu;
    {
        const bool branch_taken_0x112b9c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x112BA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112B9Cu;
            // 0x112ba0: 0x111102  srl         $v0, $s1, 4 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 17), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112b9c) {
            ctx->pc = 0x112BACu;
            goto label_112bac;
        }
    }
    ctx->pc = 0x112BA4u;
    // 0x112ba4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x112BA4u;
    {
        const bool branch_taken_0x112ba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112BA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112BA4u;
            // 0x112ba8: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112ba4) {
            ctx->pc = 0x112BB8u;
            goto label_112bb8;
        }
    }
    ctx->pc = 0x112BACu;
label_112bac:
    // 0x112bac: 0x2623fff0  addiu       $v1, $s1, -0x10
    ctx->pc = 0x112bacu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967280));
    // 0x112bb0: 0x21100  sll         $v0, $v0, 4
    ctx->pc = 0x112bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 4));
    // 0x112bb4: 0x438023  subu        $s0, $v0, $v1
    ctx->pc = 0x112bb4u;
    SET_GPR_S32(ctx, 16, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
label_112bb8:
    // 0x112bb8: 0x2d0182a  slt         $v1, $s6, $s0
    ctx->pc = 0x112bb8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 22) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x112bbc: 0x3c132000  lui         $s3, 0x2000
    ctx->pc = 0x112bbcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)8192 << 16));
    // 0x112bc0: 0x2f31024  and         $v0, $s7, $s3
    ctx->pc = 0x112bc0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 23) & GPR_U64(ctx, 19));
    // 0x112bc4: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x112BC4u;
    {
        const bool branch_taken_0x112bc4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x112BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112BC4u;
            // 0x112bc8: 0x2c3800b  movn        $s0, $s6, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112bc4) {
            ctx->pc = 0x112BD8u;
            goto label_112bd8;
        }
    }
    ctx->pc = 0x112BCCu;
    // 0x112bcc: 0x2c0282d  daddu       $a1, $s6, $zero
    ctx->pc = 0x112bccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 22) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112bd0: 0xc0440be  jal         func_1102F8
    ctx->pc = 0x112BD0u;
    SET_GPR_U32(ctx, 31, 0x112BD8u);
    ctx->pc = 0x112BD4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112BD0u;
            // 0x112bd4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1102F8u;
    if (runtime->hasFunction(0x1102F8u)) {
        auto targetFn = runtime->lookupFunction(0x1102F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112BD8u; }
        if (ctx->pc != 0x112BD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001102F8_0x1102f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112BD8u; }
        if (ctx->pc != 0x112BD8u) { return; }
    }
    ctx->pc = 0x112BD8u;
label_112bd8:
    // 0x112bd8: 0x2338825  or          $s1, $s1, $s3
    ctx->pc = 0x112bd8u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) | GPR_U64(ctx, 19));
    // 0x112bdc: 0xae500018  sw          $s0, 0x18($s2)
    ctx->pc = 0x112bdcu;
    WRITE32(ADD32(GPR_U32(ctx, 18), 24), GPR_U32(ctx, 16));
    // 0x112be0: 0x1a00000b  blez        $s0, . + 4 + (0xB << 2)
    ctx->pc = 0x112BE0u;
    {
        const bool branch_taken_0x112be0 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x112BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112BE0u;
            // 0x112be4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112be0) {
            ctx->pc = 0x112C10u;
            goto label_112c10;
        }
    }
    ctx->pc = 0x112BE8u;
    // 0x112be8: 0x2646001c  addiu       $a2, $s2, 0x1C
    ctx->pc = 0x112be8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 28));
    // 0x112bec: 0x0  nop
    ctx->pc = 0x112becu;
    // NOP
label_112bf0:
    // 0x112bf0: 0x2251021  addu        $v0, $s1, $a1
    ctx->pc = 0x112bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 5)));
    // 0x112bf4: 0xc52021  addu        $a0, $a2, $a1
    ctx->pc = 0x112bf4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 5)));
    // 0x112bf8: 0x90430000  lbu         $v1, 0x0($v0)
    ctx->pc = 0x112bf8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x112bfc: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x112bfcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x112c00: 0xb0102a  slt         $v0, $a1, $s0
    ctx->pc = 0x112c00u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 5) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x112c04: 0xa0830000  sb          $v1, 0x0($a0)
    ctx->pc = 0x112c04u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x112c08: 0x1440fff9  bnez        $v0, . + 4 + (-0x7 << 2)
    ctx->pc = 0x112C08u;
    {
        const bool branch_taken_0x112c08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x112c08) {
            ctx->pc = 0x112BF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_112bf0;
        }
    }
    ctx->pc = 0x112C10u;
label_112c10:
    // 0x112c10: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x112c10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x112c14: 0x27c78280  addiu       $a3, $fp, -0x7D80
    ctx->pc = 0x112c14u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 30), 4294935168));
    // 0x112c18: 0x24508ec0  addiu       $s0, $v0, -0x7140
    ctx->pc = 0x112c18u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294938304));
    // 0x112c1c: 0xafa00000  sw          $zero, 0x0($sp)
    ctx->pc = 0x112c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 0));
    // 0x112c20: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x112c20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x112c24: 0xafb40008  sw          $s4, 0x8($sp)
    ctx->pc = 0x112c24u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 8), GPR_U32(ctx, 20));
    // 0x112c28: 0x24449980  addiu       $a0, $v0, -0x6680
    ctx->pc = 0x112c28u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294941056));
    // 0x112c2c: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x112c2cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x112c30: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x112c30u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112c34: 0x24080030  addiu       $t0, $zero, 0x30
    ctx->pc = 0x112c34u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x112c38: 0x200482d  daddu       $t1, $s0, $zero
    ctx->pc = 0x112c38u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x112c3c: 0x240a0004  addiu       $t2, $zero, 0x4
    ctx->pc = 0x112c3cu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x112c40: 0xc044576  jal         func_1115D8
    ctx->pc = 0x112C40u;
    SET_GPR_U32(ctx, 31, 0x112C48u);
    ctx->pc = 0x112C44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112C40u;
            // 0x112c44: 0x582d  daddu       $t3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1115D8u;
    if (runtime->hasFunction(0x1115D8u)) {
        auto targetFn = runtime->lookupFunction(0x1115D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112C48u; }
        if (ctx->pc != 0x112C48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001115D8_0x1115d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112C48u; }
        if (ctx->pc != 0x112C48u) { return; }
    }
    ctx->pc = 0x112C48u;
label_112c48:
    // 0x112c48: 0x4410007  bgez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x112C48u;
    {
        const bool branch_taken_0x112c48 = (GPR_S32(ctx, 2) >= 0);
        ctx->pc = 0x112C4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112C48u;
            // 0x112c4c: 0x3c022000  lui         $v0, 0x2000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)8192 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112c48) {
            ctx->pc = 0x112C68u;
            goto label_112c68;
        }
    }
    ctx->pc = 0x112C50u;
    // 0x112c50: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x112C50u;
    SET_GPR_U32(ctx, 31, 0x112C58u);
    ctx->pc = 0x112C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112C50u;
            // 0x112c54: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112C58u; }
        if (ctx->pc != 0x112C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112C58u; }
        if (ctx->pc != 0x112C58u) { return; }
    }
    ctx->pc = 0x112C58u;
label_112c58:
    // 0x112c58: 0xc0446de  jal         func_111B78
    ctx->pc = 0x112C58u;
    SET_GPR_U32(ctx, 31, 0x112C60u);
    ctx->pc = 0x111B78u;
    if (runtime->hasFunction(0x111B78u)) {
        auto targetFn = runtime->lookupFunction(0x111B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112C60u; }
        if (ctx->pc != 0x112C60u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B78_0x111b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112C60u; }
        if (ctx->pc != 0x112C60u) { return; }
    }
    ctx->pc = 0x112C60u;
label_112c60:
    // 0x112c60: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x112C60u;
    {
        const bool branch_taken_0x112c60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112C64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112C60u;
            // 0x112c64: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112c60) {
            ctx->pc = 0x112CB8u;
            goto label_112cb8;
        }
    }
    ctx->pc = 0x112C68u;
label_112c68:
    // 0x112c68: 0x2021025  or          $v0, $s0, $v0
    ctx->pc = 0x112c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 16) | GPR_U64(ctx, 2));
    // 0x112c6c: 0xc0446de  jal         func_111B78
    ctx->pc = 0x112C6Cu;
    SET_GPR_U32(ctx, 31, 0x112C74u);
    ctx->pc = 0x112C70u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112C6Cu;
            // 0x112c70: 0x8c500000  lw          $s0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x111B78u;
    if (runtime->hasFunction(0x111B78u)) {
        auto targetFn = runtime->lookupFunction(0x111B78u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112C74u; }
        if (ctx->pc != 0x112C74u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00111B78_0x111b78(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112C74u; }
        if (ctx->pc != 0x112C74u) { return; }
    }
    ctx->pc = 0x112C74u;
label_112c74:
    // 0x112c74: 0x16000005  bnez        $s0, . + 4 + (0x5 << 2)
    ctx->pc = 0x112C74u;
    {
        const bool branch_taken_0x112c74 = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        if (branch_taken_0x112c74) {
            ctx->pc = 0x112C8Cu;
            goto label_112c8c;
        }
    }
    ctx->pc = 0x112C7Cu;
    // 0x112c7c: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x112C7Cu;
    SET_GPR_U32(ctx, 31, 0x112C84u);
    ctx->pc = 0x112C80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112C7Cu;
            // 0x112c80: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112C84u; }
        if (ctx->pc != 0x112C84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112C84u; }
        if (ctx->pc != 0x112C84u) { return; }
    }
    ctx->pc = 0x112C84u;
label_112c84:
    // 0x112c84: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x112C84u;
    {
        const bool branch_taken_0x112c84 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112C88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112C84u;
            // 0x112c88: 0x2402fff5  addiu       $v0, $zero, -0xB (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967285));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112c84) {
            ctx->pc = 0x112CB8u;
            goto label_112cb8;
        }
    }
    ctx->pc = 0x112C8Cu;
label_112c8c:
    // 0x112c8c: 0x12800005  beqz        $s4, . + 4 + (0x5 << 2)
    ctx->pc = 0x112C8Cu;
    {
        const bool branch_taken_0x112c8c = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x112c8c) {
            ctx->pc = 0x112CA4u;
            goto label_112ca4;
        }
    }
    ctx->pc = 0x112C94u;
    // 0x112c94: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x112C94u;
    SET_GPR_U32(ctx, 31, 0x112C9Cu);
    ctx->pc = 0x112C98u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112C94u;
            // 0x112c98: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112C9Cu; }
        if (ctx->pc != 0x112C9Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112C9Cu; }
        if (ctx->pc != 0x112C9Cu) { return; }
    }
    ctx->pc = 0x112C9Cu;
label_112c9c:
    // 0x112c9c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x112C9Cu;
    {
        const bool branch_taken_0x112c9c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x112CA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112C9Cu;
            // 0x112ca0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x112c9c) {
            ctx->pc = 0x112CB8u;
            goto label_112cb8;
        }
    }
    ctx->pc = 0x112CA4u;
label_112ca4:
    // 0x112ca4: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x112CA4u;
    SET_GPR_U32(ctx, 31, 0x112CACu);
    ctx->pc = 0x112CA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112CA4u;
            // 0x112ca8: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (runtime->hasFunction(0x10CCA0u)) {
        auto targetFn = runtime->lookupFunction(0x10CCA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112CACu; }
        if (ctx->pc != 0x112CACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiSyscallWaitSemaWrapper_0x10cca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112CACu; }
        if (ctx->pc != 0x112CACu) { return; }
    }
    ctx->pc = 0x112CACu;
label_112cac:
    // 0x112cac: 0xc04331c  jal         func_10CC70
    ctx->pc = 0x112CACu;
    SET_GPR_U32(ctx, 31, 0x112CB4u);
    ctx->pc = 0x112CB0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x112CACu;
            // 0x112cb0: 0x2a0202d  daddu       $a0, $s5, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 21) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC70u;
    if (runtime->hasFunction(0x10CC70u)) {
        auto targetFn = runtime->lookupFunction(0x10CC70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112CB4u; }
        if (ctx->pc != 0x112CB4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC70_0x10cc70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x112CB4u; }
        if (ctx->pc != 0x112CB4u) { return; }
    }
    ctx->pc = 0x112CB4u;
label_112cb4:
    // 0x112cb4: 0x8fa20030  lw          $v0, 0x30($sp)
    ctx->pc = 0x112cb4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 48)));
label_112cb8:
    // 0x112cb8: 0xdfbf00d0  ld          $ra, 0xD0($sp)
    ctx->pc = 0x112cb8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 208)));
    // 0x112cbc: 0xdfbe00c0  ld          $fp, 0xC0($sp)
    ctx->pc = 0x112cbcu;
    SET_GPR_U64(ctx, 30, READ64(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x112cc0: 0xdfb700b0  ld          $s7, 0xB0($sp)
    ctx->pc = 0x112cc0u;
    SET_GPR_U64(ctx, 23, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x112cc4: 0xdfb600a0  ld          $s6, 0xA0($sp)
    ctx->pc = 0x112cc4u;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x112cc8: 0xdfb50090  ld          $s5, 0x90($sp)
    ctx->pc = 0x112cc8u;
    SET_GPR_U64(ctx, 21, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x112ccc: 0xdfb40080  ld          $s4, 0x80($sp)
    ctx->pc = 0x112cccu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x112cd0: 0xdfb30070  ld          $s3, 0x70($sp)
    ctx->pc = 0x112cd0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x112cd4: 0xdfb20060  ld          $s2, 0x60($sp)
    ctx->pc = 0x112cd4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x112cd8: 0xdfb10050  ld          $s1, 0x50($sp)
    ctx->pc = 0x112cd8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x112cdc: 0xdfb00040  ld          $s0, 0x40($sp)
    ctx->pc = 0x112cdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x112ce0: 0x3e00008  jr          $ra
    ctx->pc = 0x112CE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x112CE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x112CE0u;
            // 0x112ce4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x112CE8u;
    ctx->pc = 0x112ce8u;
}
