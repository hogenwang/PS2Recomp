#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028B948
// Address: 0x28b948 - 0x28bcc0
void sub_0028B948_0x28b948(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028B948_0x28b948");
#endif

    switch (ctx->pc) {
        case 0x28b97cu: goto label_28b97c;
        case 0x28b998u: goto label_28b998;
        case 0x28b9fcu: goto label_28b9fc;
        case 0x28ba1cu: goto label_28ba1c;
        case 0x28ba2cu: goto label_28ba2c;
        case 0x28bad4u: goto label_28bad4;
        case 0x28bb08u: goto label_28bb08;
        case 0x28bb1cu: goto label_28bb1c;
        case 0x28bb30u: goto label_28bb30;
        case 0x28bb48u: goto label_28bb48;
        case 0x28bb70u: goto label_28bb70;
        case 0x28bb88u: goto label_28bb88;
        case 0x28bbc8u: goto label_28bbc8;
        case 0x28bc00u: goto label_28bc00;
        case 0x28bc30u: goto label_28bc30;
        case 0x28bc44u: goto label_28bc44;
        case 0x28bc60u: goto label_28bc60;
        case 0x28bc80u: goto label_28bc80;
        case 0x28bc90u: goto label_28bc90;
        case 0x28bca8u: goto label_28bca8;
        default: break;
    }

    ctx->pc = 0x28b948u;

label_28b948:
    // 0x28b948: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x28b948u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x28b94c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x28b94cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b950: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28b950u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28b954: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x28b954u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x28b958: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x28b958u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x28b95c: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28B95Cu;
    {
        const bool branch_taken_0x28b95c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B960u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B95Cu;
            // 0x28b960: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b95c) {
            ctx->pc = 0x28B984u;
            goto label_28b984;
        }
    }
    ctx->pc = 0x28B964u;
    // 0x28b964: 0x10a00007  beqz        $a1, . + 4 + (0x7 << 2)
    ctx->pc = 0x28B964u;
    {
        const bool branch_taken_0x28b964 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B968u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B964u;
            // 0x28b968: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b964) {
            ctx->pc = 0x28B984u;
            goto label_28b984;
        }
    }
    ctx->pc = 0x28B96Cu;
    // 0x28b96c: 0x8c870020  lw          $a3, 0x20($a0)
    ctx->pc = 0x28b96cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 32)));
    // 0x28b970: 0xa0202d  daddu       $a0, $a1, $zero
    ctx->pc = 0x28b970u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b974: 0xc0497d6  jal         func_125F58
    ctx->pc = 0x28B974u;
    SET_GPR_U32(ctx, 31, 0x28B97Cu);
    ctx->pc = 0x28B978u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B974u;
            // 0x28b978: 0x200282d  daddu       $a1, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125F58u;
    if (runtime->hasFunction(0x125F58u)) {
        auto targetFn = runtime->lookupFunction(0x125F58u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B97Cu; }
        if (ctx->pc != 0x28B97Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125F58_0x125f58(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B97Cu; }
        if (ctx->pc != 0x28B97Cu) { return; }
    }
    ctx->pc = 0x28B97Cu;
label_28b97c:
    // 0x28b97c: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x28b97cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b980: 0x202180b  movn        $v1, $s0, $v0
    ctx->pc = 0x28b980u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 16));
label_28b984:
    // 0x28b984: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x28b984u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28b988: 0x60102d  daddu       $v0, $v1, $zero
    ctx->pc = 0x28b988u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b98c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28b98cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28b990: 0x3e00008  jr          $ra
    ctx->pc = 0x28B990u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28B994u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B990u;
            // 0x28b994: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28B998u;
label_28b998:
    // 0x28b998: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x28b998u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x28b99c: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x28b99cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x28b9a0: 0xffb30050  sd          $s3, 0x50($sp)
    ctx->pc = 0x28b9a0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 19));
    // 0x28b9a4: 0x2c620088  sltiu       $v0, $v1, 0x88
    ctx->pc = 0x28b9a4u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)136) ? 1 : 0);
    // 0x28b9a8: 0xffb20040  sd          $s2, 0x40($sp)
    ctx->pc = 0x28b9a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 18));
    // 0x28b9ac: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x28b9acu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28b9b0: 0xffb10030  sd          $s1, 0x30($sp)
    ctx->pc = 0x28b9b0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 17));
    // 0x28b9b4: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x28b9b4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b9b8: 0xffb00020  sd          $s0, 0x20($sp)
    ctx->pc = 0x28b9b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 16));
    // 0x28b9bc: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x28b9bcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b9c0: 0xffbf0060  sd          $ra, 0x60($sp)
    ctx->pc = 0x28b9c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 31));
    // 0x28b9c4: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28b9c4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b9c8: 0x10400084  beqz        $v0, . + 4 + (0x84 << 2)
    ctx->pc = 0x28B9C8u;
    {
        const bool branch_taken_0x28b9c8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28B9CCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B9C8u;
            // 0x28b9cc: 0x8e060020  lw          $a2, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b9c8) {
            ctx->pc = 0x28BBDCu;
            goto label_28bbdc;
        }
    }
    ctx->pc = 0x28B9D0u;
    // 0x28b9d0: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28b9d0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28b9d4: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28b9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28b9d8: 0x2442a850  addiu       $v0, $v0, -0x57B0
    ctx->pc = 0x28b9d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944848));
    // 0x28b9dc: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28b9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28b9e0: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28b9e0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28b9e4: 0x800008  jr          $a0
    ctx->pc = 0x28B9E4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28B9ECu: goto label_28b9ec;
            case 0x28BA04u: goto label_28ba04;
            case 0x28BA14u: goto label_28ba14;
            case 0x28BA24u: goto label_28ba24;
            case 0x28BA44u: goto label_28ba44;
            case 0x28BAF0u: goto label_28baf0;
            case 0x28BB9Cu: goto label_28bb9c;
            case 0x28BBACu: goto label_28bbac;
            case 0x28BBB4u: goto label_28bbb4;
            case 0x28BBC0u: goto label_28bbc0;
            case 0x28BBD4u: goto label_28bbd4;
            case 0x28BBDCu: goto label_28bbdc;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28B9ECu;
label_28b9ec:
    // 0x28b9ec: 0xc0202d  daddu       $a0, $a2, $zero
    ctx->pc = 0x28b9ecu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b9f0: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28b9f0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28b9f4: 0xc04954c  jal         func_125530
    ctx->pc = 0x28B9F4u;
    SET_GPR_U32(ctx, 31, 0x28B9FCu);
    ctx->pc = 0x28B9F8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28B9F4u;
            // 0x28b9f8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125530u;
    if (runtime->hasFunction(0x125530u)) {
        auto targetFn = runtime->lookupFunction(0x125530u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B9FCu; }
        if (ctx->pc != 0x28B9FCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125530_0x125530(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28B9FCu; }
        if (ctx->pc != 0x28B9FCu) { return; }
    }
    ctx->pc = 0x28B9FCu;
label_28b9fc:
    // 0x28b9fc: 0x10000073  b           . + 4 + (0x73 << 2)
    ctx->pc = 0x28B9FCu;
    {
        const bool branch_taken_0x28b9fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BA00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28B9FCu;
            // 0x28ba00: 0x2403ffff  addiu       $v1, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28b9fc) {
            ctx->pc = 0x28BBCCu;
            goto label_28bbcc;
        }
    }
    ctx->pc = 0x28BA04u;
label_28ba04:
    // 0x28ba04: 0x94c2000c  lhu         $v0, 0xC($a2)
    ctx->pc = 0x28ba04u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 12)));
    // 0x28ba08: 0x2117a  dsrl        $v0, $v0, 5
    ctx->pc = 0x28ba08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> 5);
    // 0x28ba0c: 0x10000074  b           . + 4 + (0x74 << 2)
    ctx->pc = 0x28BA0Cu;
    {
        const bool branch_taken_0x28ba0c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BA10u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BA0Cu;
            // 0x28ba10: 0x30530001  andi        $s3, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ba0c) {
            ctx->pc = 0x28BBE0u;
            goto label_28bbe0;
        }
    }
    ctx->pc = 0x28BA14u;
label_28ba14:
    // 0x28ba14: 0xc049680  jal         func_125A00
    ctx->pc = 0x28BA14u;
    SET_GPR_U32(ctx, 31, 0x28BA1Cu);
    ctx->pc = 0x28BA18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28BA14u;
            // 0x28ba18: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x125A00u;
    if (runtime->hasFunction(0x125A00u)) {
        auto targetFn = runtime->lookupFunction(0x125A00u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BA1Cu; }
        if (ctx->pc != 0x28BA1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00125A00_0x125a00(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BA1Cu; }
        if (ctx->pc != 0x28BA1Cu) { return; }
    }
    ctx->pc = 0x28BA1Cu;
label_28ba1c:
    // 0x28ba1c: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x28BA1Cu;
    {
        const bool branch_taken_0x28ba1c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BA20u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BA1Cu;
            // 0x28ba20: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ba1c) {
            ctx->pc = 0x28BBE0u;
            goto label_28bbe0;
        }
    }
    ctx->pc = 0x28BA24u;
label_28ba24:
    // 0x28ba24: 0xc0a2e2a  jal         func_28B8A8
    ctx->pc = 0x28BA24u;
    SET_GPR_U32(ctx, 31, 0x28BA2Cu);
    ctx->pc = 0x28BA28u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28BA24u;
            // 0x28ba28: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B8A8u;
    if (runtime->hasFunction(0x28B8A8u)) {
        auto targetFn = runtime->lookupFunction(0x28B8A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BA2Cu; }
        if (ctx->pc != 0x28BA2Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B8A8_0x28b8a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BA2Cu; }
        if (ctx->pc != 0x28BA2Cu) { return; }
    }
    ctx->pc = 0x28BA2Cu;
label_28ba2c:
    // 0x28ba2c: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x28ba2cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x28ba30: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28ba30u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28ba34: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x28ba34u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x28ba38: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x28ba38u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x28ba3c: 0x10000068  b           . + 4 + (0x68 << 2)
    ctx->pc = 0x28BA3Cu;
    {
        const bool branch_taken_0x28ba3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BA40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BA3Cu;
            // 0x28ba40: 0xae120020  sw          $s2, 0x20($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 18));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ba3c) {
            ctx->pc = 0x28BBE0u;
            goto label_28bbe0;
        }
    }
    ctx->pc = 0x28BA44u;
label_28ba44:
    // 0x28ba44: 0x32220008  andi        $v0, $s1, 0x8
    ctx->pc = 0x28ba44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
    // 0x28ba48: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x28BA48u;
    {
        const bool branch_taken_0x28ba48 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BA4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BA48u;
            // 0x28ba4c: 0x32220002  andi        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ba48) {
            ctx->pc = 0x28BA70u;
            goto label_28ba70;
        }
    }
    ctx->pc = 0x28BA50u;
    // 0x28ba50: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28BA50u;
    {
        const bool branch_taken_0x28ba50 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BA54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BA50u;
            // 0x28ba54: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ba50) {
            ctx->pc = 0x28BA64u;
            goto label_28ba64;
        }
    }
    ctx->pc = 0x28BA58u;
    // 0x28ba58: 0x2443a810  addiu       $v1, $v0, -0x57F0
    ctx->pc = 0x28ba58u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944784));
    // 0x28ba5c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x28BA5Cu;
    {
        const bool branch_taken_0x28ba5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BA60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BA5Cu;
            // 0x28ba60: 0x9444a810  lhu         $a0, -0x57F0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294944784)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ba5c) {
            ctx->pc = 0x28BA8Cu;
            goto label_28ba8c;
        }
    }
    ctx->pc = 0x28BA64u;
label_28ba64:
    // 0x28ba64: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28ba64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28ba68: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x28BA68u;
    {
        const bool branch_taken_0x28ba68 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BA6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BA68u;
            // 0x28ba6c: 0x9443a818  lhu         $v1, -0x57E8($v0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294944792)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ba68) {
            ctx->pc = 0x28BAE0u;
            goto label_28bae0;
        }
    }
    ctx->pc = 0x28BA70u;
label_28ba70:
    // 0x28ba70: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x28ba70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x28ba74: 0x32220006  andi        $v0, $s1, 0x6
    ctx->pc = 0x28ba74u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)6);
    // 0x28ba78: 0x14430008  bne         $v0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x28BA78u;
    {
        const bool branch_taken_0x28ba78 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x28BA7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BA78u;
            // 0x28ba7c: 0x32220004  andi        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ba78) {
            ctx->pc = 0x28BA9Cu;
            goto label_28ba9c;
        }
    }
    ctx->pc = 0x28BA80u;
    // 0x28ba80: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28ba80u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28ba84: 0x2443a820  addiu       $v1, $v0, -0x57E0
    ctx->pc = 0x28ba84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294944800));
    // 0x28ba88: 0x9444a820  lhu         $a0, -0x57E0($v0)
    ctx->pc = 0x28ba88u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294944800)));
label_28ba8c:
    // 0x28ba8c: 0x90650002  lbu         $a1, 0x2($v1)
    ctx->pc = 0x28ba8cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 2)));
    // 0x28ba90: 0xa7a40000  sh          $a0, 0x0($sp)
    ctx->pc = 0x28ba90u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 4));
    // 0x28ba94: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x28BA94u;
    {
        const bool branch_taken_0x28ba94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BA98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BA94u;
            // 0x28ba98: 0xa3a50002  sb          $a1, 0x2($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 2), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ba94) {
            ctx->pc = 0x28BAE4u;
            goto label_28bae4;
        }
    }
    ctx->pc = 0x28BA9Cu;
label_28ba9c:
    // 0x28ba9c: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28BA9Cu;
    {
        const bool branch_taken_0x28ba9c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BAA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BA9Cu;
            // 0x28baa0: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28ba9c) {
            ctx->pc = 0x28BAACu;
            goto label_28baac;
        }
    }
    ctx->pc = 0x28BAA4u;
    // 0x28baa4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x28BAA4u;
    {
        const bool branch_taken_0x28baa4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BAA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BAA4u;
            // 0x28baa8: 0x9443a828  lhu         $v1, -0x57D8($v0) (Delay Slot)
        SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294944808)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28baa4) {
            ctx->pc = 0x28BAE0u;
            goto label_28bae0;
        }
    }
    ctx->pc = 0x28BAACu;
label_28baac:
    // 0x28baac: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x28baacu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x28bab0: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x28BAB0u;
    {
        const bool branch_taken_0x28bab0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BAB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BAB0u;
            // 0x28bab4: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bab0) {
            ctx->pc = 0x28BADCu;
            goto label_28badc;
        }
    }
    ctx->pc = 0x28BAB8u;
    // 0x28bab8: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x28bab8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x28babc: 0x2405006e  addiu       $a1, $zero, 0x6E
    ctx->pc = 0x28babcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x28bac0: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x28bac0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x28bac4: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28bac4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bac8: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28bac8u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bacc: 0xc0a5648  jal         func_295920
    ctx->pc = 0x28BACCu;
    SET_GPR_U32(ctx, 31, 0x28BAD4u);
    ctx->pc = 0x28BAD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28BACCu;
            // 0x28bad0: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BAD4u; }
        if (ctx->pc != 0x28BAD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BAD4u; }
        if (ctx->pc != 0x28BAD4u) { return; }
    }
    ctx->pc = 0x28BAD4u;
label_28bad4:
    // 0x28bad4: 0x10000043  b           . + 4 + (0x43 << 2)
    ctx->pc = 0x28BAD4u;
    {
        const bool branch_taken_0x28bad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BAD4u;
            // 0x28bad8: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bad4) {
            ctx->pc = 0x28BBE4u;
            goto label_28bbe4;
        }
    }
    ctx->pc = 0x28BADCu;
label_28badc:
    // 0x28badc: 0x9443a830  lhu         $v1, -0x57D0($v0)
    ctx->pc = 0x28badcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294944816)));
label_28bae0:
    // 0x28bae0: 0xa7a30000  sh          $v1, 0x0($sp)
    ctx->pc = 0x28bae0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 0), (uint16_t)GPR_U32(ctx, 3));
label_28bae4:
    // 0x28bae4: 0xafb20010  sw          $s2, 0x10($sp)
    ctx->pc = 0x28bae4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 18));
    // 0x28bae8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x28BAE8u;
    {
        const bool branch_taken_0x28bae8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BAECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BAE8u;
            // 0x28baec: 0xafbd0014  sw          $sp, 0x14($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bae8) {
            ctx->pc = 0x28BB00u;
            goto label_28bb00;
        }
    }
    ctx->pc = 0x28BAF0u;
label_28baf0:
    // 0x28baf0: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x28baf0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x28baf4: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x28baf4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28baf8: 0xafa20014  sw          $v0, 0x14($sp)
    ctx->pc = 0x28baf8u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 20), GPR_U32(ctx, 2));
    // 0x28bafc: 0xafa30010  sw          $v1, 0x10($sp)
    ctx->pc = 0x28bafcu;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 3));
label_28bb00:
    // 0x28bb00: 0xc0a2e2a  jal         func_28B8A8
    ctx->pc = 0x28BB00u;
    SET_GPR_U32(ctx, 31, 0x28BB08u);
    ctx->pc = 0x28BB04u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28BB00u;
            // 0x28bb04: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B8A8u;
    if (runtime->hasFunction(0x28B8A8u)) {
        auto targetFn = runtime->lookupFunction(0x28B8A8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BB08u; }
        if (ctx->pc != 0x28BB08u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028B8A8_0x28b8a8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BB08u; }
        if (ctx->pc != 0x28BB08u) { return; }
    }
    ctx->pc = 0x28BB08u;
label_28bb08:
    // 0x28bb08: 0x32230001  andi        $v1, $s1, 0x1
    ctx->pc = 0x28bb08u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x28bb0c: 0x8fa40010  lw          $a0, 0x10($sp)
    ctx->pc = 0x28bb0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28bb10: 0x8fa50014  lw          $a1, 0x14($sp)
    ctx->pc = 0x28bb10u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x28bb14: 0xc0493e0  jal         func_124F80
    ctx->pc = 0x28BB14u;
    SET_GPR_U32(ctx, 31, 0x28BB1Cu);
    ctx->pc = 0x28BB18u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28BB14u;
            // 0x28bb18: 0xae030010  sw          $v1, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
    ctx->pc = 0x124F80u;
    if (runtime->hasFunction(0x124F80u)) {
        auto targetFn = runtime->lookupFunction(0x124F80u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BB1Cu; }
        if (ctx->pc != 0x28BB1Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00124F80_0x124f80(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BB1Cu; }
        if (ctx->pc != 0x28BB1Cu) { return; }
    }
    ctx->pc = 0x28BB1Cu;
label_28bb1c:
    // 0x28bb1c: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x28bb1cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bb20: 0x14c0001b  bnez        $a2, . + 4 + (0x1B << 2)
    ctx->pc = 0x28BB20u;
    {
        const bool branch_taken_0x28bb20 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BB24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BB20u;
            // 0x28bb24: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bb20) {
            ctx->pc = 0x28BB90u;
            goto label_28bb90;
        }
    }
    ctx->pc = 0x28BB28u;
    // 0x28bb28: 0xc0491f2  jal         func_1247C8
    ctx->pc = 0x28BB28u;
    SET_GPR_U32(ctx, 31, 0x28BB30u);
    ctx->pc = 0x28BB2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28BB28u;
            // 0x28bb2c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1247C8u;
    if (runtime->hasFunction(0x1247C8u)) {
        auto targetFn = runtime->lookupFunction(0x1247C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BB30u; }
        if (ctx->pc != 0x28BB30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001247C8_0x1247c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BB30u; }
        if (ctx->pc != 0x28BB30u) { return; }
    }
    ctx->pc = 0x28BB30u;
label_28bb30:
    // 0x28bb30: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x28bb30u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x28bb34: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x28bb34u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x28bb38: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x28bb38u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28bb3c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28bb3cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bb40: 0xc0a5648  jal         func_295920
    ctx->pc = 0x28BB40u;
    SET_GPR_U32(ctx, 31, 0x28BB48u);
    ctx->pc = 0x28BB44u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28BB40u;
            // 0x28bb44: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BB48u; }
        if (ctx->pc != 0x28BB48u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BB48u; }
        if (ctx->pc != 0x28BB48u) { return; }
    }
    ctx->pc = 0x28BB48u;
label_28bb48:
    // 0x28bb48: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x28bb48u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x28bb4c: 0x3c070040  lui         $a3, 0x40
    ctx->pc = 0x28bb4cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)64 << 16));
    // 0x28bb50: 0x3c090040  lui         $t1, 0x40
    ctx->pc = 0x28bb50u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)64 << 16));
    // 0x28bb54: 0x8fa60010  lw          $a2, 0x10($sp)
    ctx->pc = 0x28bb54u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28bb58: 0x8fa80014  lw          $t0, 0x14($sp)
    ctx->pc = 0x28bb58u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 20)));
    // 0x28bb5c: 0x2529a848  addiu       $t1, $t1, -0x57B8
    ctx->pc = 0x28bb5cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294944840));
    // 0x28bb60: 0x24a5a838  addiu       $a1, $a1, -0x57C8
    ctx->pc = 0x28bb60u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294944824));
    // 0x28bb64: 0x24e7a840  addiu       $a3, $a3, -0x57C0
    ctx->pc = 0x28bb64u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294944832));
    // 0x28bb68: 0xc0a57ee  jal         func_295FB8
    ctx->pc = 0x28BB68u;
    SET_GPR_U32(ctx, 31, 0x28BB70u);
    ctx->pc = 0x28BB6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28BB68u;
            // 0x28bb6c: 0x24040005  addiu       $a0, $zero, 0x5 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295FB8u;
    if (runtime->hasFunction(0x295FB8u)) {
        auto targetFn = runtime->lookupFunction(0x295FB8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BB70u; }
        if (ctx->pc != 0x28BB70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295FB8_0x295fb8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BB70u; }
        if (ctx->pc != 0x28BB70u) { return; }
    }
    ctx->pc = 0x28BB70u;
label_28bb70:
    // 0x28bb70: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x28bb70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x28bb74: 0x2405006e  addiu       $a1, $zero, 0x6E
    ctx->pc = 0x28bb74u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x28bb78: 0x24060802  addiu       $a2, $zero, 0x802
    ctx->pc = 0x28bb78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2050));
    // 0x28bb7c: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28bb7cu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bb80: 0xc0a5648  jal         func_295920
    ctx->pc = 0x28BB80u;
    SET_GPR_U32(ctx, 31, 0x28BB88u);
    ctx->pc = 0x28BB84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28BB80u;
            // 0x28bb84: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BB88u; }
        if (ctx->pc != 0x28BB88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BB88u; }
        if (ctx->pc != 0x28BB88u) { return; }
    }
    ctx->pc = 0x28BB88u;
label_28bb88:
    // 0x28bb88: 0x10000016  b           . + 4 + (0x16 << 2)
    ctx->pc = 0x28BB88u;
    {
        const bool branch_taken_0x28bb88 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BB8Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BB88u;
            // 0x28bb8c: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bb88) {
            ctx->pc = 0x28BBE4u;
            goto label_28bbe4;
        }
    }
    ctx->pc = 0x28BB90u;
label_28bb90:
    // 0x28bb90: 0xae060020  sw          $a2, 0x20($s0)
    ctx->pc = 0x28bb90u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 32), GPR_U32(ctx, 6));
    // 0x28bb94: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x28BB94u;
    {
        const bool branch_taken_0x28bb94 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BB98u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BB94u;
            // 0x28bb98: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bb94) {
            ctx->pc = 0x28BBE0u;
            goto label_28bbe0;
        }
    }
    ctx->pc = 0x28BB9Cu;
label_28bb9c:
    // 0x28bb9c: 0x56400010  bnel        $s2, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x28BB9Cu;
    {
        const bool branch_taken_0x28bb9c = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        if (branch_taken_0x28bb9c) {
            ctx->pc = 0x28BBA0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28BB9Cu;
            // 0x28bba0: 0xae460000  sw          $a2, 0x0($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28BBE0u;
            goto label_28bbe0;
        }
    }
    ctx->pc = 0x28BBA4u;
    // 0x28bba4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x28BBA4u;
    {
        const bool branch_taken_0x28bba4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BBA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BBA4u;
            // 0x28bba8: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bba4) {
            ctx->pc = 0x28BBE4u;
            goto label_28bbe4;
        }
    }
    ctx->pc = 0x28BBACu;
label_28bbac:
    // 0x28bbac: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x28BBACu;
    {
        const bool branch_taken_0x28bbac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BBB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BBACu;
            // 0x28bbb0: 0x8e130010  lw          $s3, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bbac) {
            ctx->pc = 0x28BBE0u;
            goto label_28bbe0;
        }
    }
    ctx->pc = 0x28BBB4u;
label_28bbb4:
    // 0x28bbb4: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x28bbb4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x28bbb8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x28BBB8u;
    {
        const bool branch_taken_0x28bbb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BBBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BBB8u;
            // 0x28bbbc: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bbb8) {
            ctx->pc = 0x28BBE0u;
            goto label_28bbe0;
        }
    }
    ctx->pc = 0x28BBC0u;
label_28bbc0:
    // 0x28bbc0: 0xc049258  jal         func_124960
    ctx->pc = 0x28BBC0u;
    SET_GPR_U32(ctx, 31, 0x28BBC8u);
    ctx->pc = 0x28BBC4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28BBC0u;
            // 0x28bbc4: 0x8e040020  lw          $a0, 0x20($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x124960u;
    if (runtime->hasFunction(0x124960u)) {
        auto targetFn = runtime->lookupFunction(0x124960u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BBC8u; }
        if (ctx->pc != 0x28BBC8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00124960_0x124960(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BBC8u; }
        if (ctx->pc != 0x28BBC8u) { return; }
    }
    ctx->pc = 0x28BBC8u;
label_28bbc8:
    // 0x28bbc8: 0x2403ffff  addiu       $v1, $zero, -0x1
    ctx->pc = 0x28bbc8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_28bbcc:
    // 0x28bbcc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28BBCCu;
    {
        const bool branch_taken_0x28bbcc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BBD0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BBCCu;
            // 0x28bbd0: 0x62980b  movn        $s3, $v1, $v0 (Delay Slot)
        if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bbcc) {
            ctx->pc = 0x28BBE0u;
            goto label_28bbe0;
        }
    }
    ctx->pc = 0x28BBD4u;
label_28bbd4:
    // 0x28bbd4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28BBD4u;
    {
        const bool branch_taken_0x28bbd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BBD4u;
            // 0x28bbd8: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bbd4) {
            ctx->pc = 0x28BBE0u;
            goto label_28bbe0;
        }
    }
    ctx->pc = 0x28BBDCu;
label_28bbdc:
    // 0x28bbdc: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x28bbdcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28bbe0:
    // 0x28bbe0: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x28bbe0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28bbe4:
    // 0x28bbe4: 0xdfbf0060  ld          $ra, 0x60($sp)
    ctx->pc = 0x28bbe4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28bbe8: 0xdfb30050  ld          $s3, 0x50($sp)
    ctx->pc = 0x28bbe8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28bbec: 0xdfb20040  ld          $s2, 0x40($sp)
    ctx->pc = 0x28bbecu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28bbf0: 0xdfb10030  ld          $s1, 0x30($sp)
    ctx->pc = 0x28bbf0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28bbf4: 0xdfb00020  ld          $s0, 0x20($sp)
    ctx->pc = 0x28bbf4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28bbf8: 0x3e00008  jr          $ra
    ctx->pc = 0x28BBF8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BBFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BBF8u;
            // 0x28bbfc: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28BC00u;
label_28bc00:
    // 0x28bc00: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28bc00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28bc04: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x28bc04u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bc08: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28bc08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28bc0c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28bc0cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28bc10: 0xa0802d  daddu       $s0, $a1, $zero
    ctx->pc = 0x28bc10u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bc14: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28bc14u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28bc18: 0xc0282d  daddu       $a1, $a2, $zero
    ctx->pc = 0x28bc18u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bc1c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x28bc1cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x28bc20: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28bc20u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bc24: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28bc24u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bc28: 0xc04929c  jal         func_124A70
    ctx->pc = 0x28BC28u;
    SET_GPR_U32(ctx, 31, 0x28BC30u);
    ctx->pc = 0x28BC2Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28BC28u;
            // 0x28bc2c: 0x8c460020  lw          $a2, 0x20($v0) (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x124A70u;
    if (runtime->hasFunction(0x124A70u)) {
        auto targetFn = runtime->lookupFunction(0x124A70u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BC30u; }
        if (ctx->pc != 0x28BC30u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00124A70_0x124a70(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BC30u; }
        if (ctx->pc != 0x28BC30u) { return; }
    }
    ctx->pc = 0x28BC30u;
label_28bc30:
    // 0x28bc30: 0x82030000  lb          $v1, 0x0($s0)
    ctx->pc = 0x28bc30u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x28bc34: 0x10600005  beqz        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x28BC34u;
    {
        const bool branch_taken_0x28bc34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BC34u;
            // 0x28bc38: 0x220102d  daddu       $v0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bc34) {
            ctx->pc = 0x28BC4Cu;
            goto label_28bc4c;
        }
    }
    ctx->pc = 0x28BC3Cu;
    // 0x28bc3c: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x28BC3Cu;
    SET_GPR_U32(ctx, 31, 0x28BC44u);
    ctx->pc = 0x28BC40u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28BC3Cu;
            // 0x28bc40: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BC44u; }
        if (ctx->pc != 0x28BC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BC44u; }
        if (ctx->pc != 0x28BC44u) { return; }
    }
    ctx->pc = 0x28BC44u;
label_28bc44:
    // 0x28bc44: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x28bc44u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bc48: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x28bc48u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
label_28bc4c:
    // 0x28bc4c: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28bc4cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28bc50: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28bc50u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28bc54: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28bc54u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28bc58: 0x3e00008  jr          $ra
    ctx->pc = 0x28BC58u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BC5Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BC58u;
            // 0x28bc5c: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28BC60u;
label_28bc60:
    // 0x28bc60: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28bc60u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28bc64: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28bc64u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28bc68: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28bc68u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28bc6c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28bc6cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bc70: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28bc70u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bc74: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28bc74u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28bc78: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x28BC78u;
    SET_GPR_U32(ctx, 31, 0x28BC80u);
    ctx->pc = 0x28BC7Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28BC78u;
            // 0x28bc7c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BC80u; }
        if (ctx->pc != 0x28BC80u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BC80u; }
        if (ctx->pc != 0x28BC80u) { return; }
    }
    ctx->pc = 0x28BC80u;
label_28bc80:
    // 0x28bc80: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28bc80u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bc84: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28bc84u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bc88: 0xc0a2e52  jal         func_28B948
    ctx->pc = 0x28BC88u;
    SET_GPR_U32(ctx, 31, 0x28BC90u);
    ctx->pc = 0x28BC8Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28BC88u;
            // 0x28bc8c: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28B948u;
    goto label_28b948;
    ctx->pc = 0x28BC90u;
label_28bc90:
    // 0x28bc90: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28bc90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28bc94: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28bc94u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28bc98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28bc98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28bc9c: 0x3e00008  jr          $ra
    ctx->pc = 0x28BC9Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BCA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BC9Cu;
            // 0x28bca0: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28BCA4u;
    // 0x28bca4: 0x0  nop
    ctx->pc = 0x28bca4u;
    // NOP
label_28bca8:
    // 0x28bca8: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x28bca8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28bcac: 0xac800014  sw          $zero, 0x14($a0)
    ctx->pc = 0x28bcacu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 20), GPR_U32(ctx, 0));
    // 0x28bcb0: 0xac80000c  sw          $zero, 0xC($a0)
    ctx->pc = 0x28bcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 12), GPR_U32(ctx, 0));
    // 0x28bcb4: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x28bcb4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x28bcb8: 0x3e00008  jr          $ra
    ctx->pc = 0x28BCB8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BCBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BCB8u;
            // 0x28bcbc: 0xac800020  sw          $zero, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28BCC0u;
    ctx->pc = 0x28bcc0u;
}
