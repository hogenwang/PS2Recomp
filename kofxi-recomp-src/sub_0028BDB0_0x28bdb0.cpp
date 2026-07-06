#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0028BDB0
// Address: 0x28bdb0 - 0x28c230
void sub_0028BDB0_0x28bdb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0028BDB0_0x28bdb0");
#endif

    switch (ctx->pc) {
        case 0x28bdd4u: goto label_28bdd4;
        case 0x28bde8u: goto label_28bde8;
        case 0x28bdf4u: goto label_28bdf4;
        case 0x28be04u: goto label_28be04;
        case 0x28be14u: goto label_28be14;
        case 0x28be30u: goto label_28be30;
        case 0x28be98u: goto label_28be98;
        case 0x28beb8u: goto label_28beb8;
        case 0x28bfecu: goto label_28bfec;
        case 0x28c02cu: goto label_28c02c;
        case 0x28c084u: goto label_28c084;
        case 0x28c0a0u: goto label_28c0a0;
        case 0x28c0f8u: goto label_28c0f8;
        case 0x28c118u: goto label_28c118;
        case 0x28c128u: goto label_28c128;
        case 0x28c140u: goto label_28c140;
        case 0x28c184u: goto label_28c184;
        case 0x28c1a0u: goto label_28c1a0;
        case 0x28c1bcu: goto label_28c1bc;
        case 0x28c1f0u: goto label_28c1f0;
        case 0x28c204u: goto label_28c204;
        default: break;
    }

    ctx->pc = 0x28bdb0u;

label_28bdb0:
    // 0x28bdb0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x28bdb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x28bdb4: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x28bdb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28bdb8: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28bdb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28bdbc: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28bdbcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bdc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28bdc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28bdc4: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x28bdc4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bdc8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x28bdc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x28bdcc: 0xc0491f2  jal         func_1247C8
    ctx->pc = 0x28BDCCu;
    SET_GPR_U32(ctx, 31, 0x28BDD4u);
    ctx->pc = 0x28BDD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28BDCCu;
            // 0x28bdd0: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1247C8u;
    if (runtime->hasFunction(0x1247C8u)) {
        auto targetFn = runtime->lookupFunction(0x1247C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BDD4u; }
        if (ctx->pc != 0x28BDD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001247C8_0x1247c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BDD4u; }
        if (ctx->pc != 0x28BDD4u) { return; }
    }
    ctx->pc = 0x28BDD4u;
label_28bdd4:
    // 0x28bdd4: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x28bdd4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x28bdd8: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x28bdd8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bddc: 0x220302d  daddu       $a2, $s1, $zero
    ctx->pc = 0x28bddcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bde0: 0xc044a8a  jal         func_112A28
    ctx->pc = 0x28BDE0u;
    SET_GPR_U32(ctx, 31, 0x28BDE8u);
    ctx->pc = 0x28BDE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28BDE0u;
            // 0x28bde4: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112A28u;
    if (runtime->hasFunction(0x112A28u)) {
        auto targetFn = runtime->lookupFunction(0x112A28u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BDE8u; }
        if (ctx->pc != 0x28BDE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00112A28_0x112a28(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BDE8u; }
        if (ctx->pc != 0x28BDE8u) { return; }
    }
    ctx->pc = 0x28BDE8u;
label_28bde8:
    // 0x28bde8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28bde8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bdec: 0xc0a13ac  jal         func_284EB0
    ctx->pc = 0x28BDECu;
    SET_GPR_U32(ctx, 31, 0x28BDF4u);
    ctx->pc = 0x28BDF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28BDECu;
            // 0x28bdf0: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284EB0u;
    if (runtime->hasFunction(0x284EB0u)) {
        auto targetFn = runtime->lookupFunction(0x284EB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BDF4u; }
        if (ctx->pc != 0x28BDF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284EB0_0x284eb0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BDF4u; }
        if (ctx->pc != 0x28BDF4u) { return; }
    }
    ctx->pc = 0x28BDF4u;
label_28bdf4:
    // 0x28bdf4: 0x1e000008  bgtz        $s0, . + 4 + (0x8 << 2)
    ctx->pc = 0x28BDF4u;
    {
        const bool branch_taken_0x28bdf4 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x28BDF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BDF4u;
            // 0x28bdf8: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bdf4) {
            ctx->pc = 0x28BE18u;
            goto label_28be18;
        }
    }
    ctx->pc = 0x28BDFCu;
    // 0x28bdfc: 0xc0ae5c2  jal         func_2B9708
    ctx->pc = 0x28BDFCu;
    SET_GPR_U32(ctx, 31, 0x28BE04u);
    ctx->pc = 0x28BE00u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28BDFCu;
            // 0x28be00: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2B9708u;
    if (runtime->hasFunction(0x2B9708u)) {
        auto targetFn = runtime->lookupFunction(0x2B9708u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BE04u; }
        if (ctx->pc != 0x28BE04u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002B9708_0x2b9708(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BE04u; }
        if (ctx->pc != 0x28BE04u) { return; }
    }
    ctx->pc = 0x28BE04u;
label_28be04:
    // 0x28be04: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x28BE04u;
    {
        const bool branch_taken_0x28be04 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BE08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BE04u;
            // 0x28be08: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be04) {
            ctx->pc = 0x28BE18u;
            goto label_28be18;
        }
    }
    ctx->pc = 0x28BE0Cu;
    // 0x28be0c: 0xc0a13a2  jal         func_284E88
    ctx->pc = 0x28BE0Cu;
    SET_GPR_U32(ctx, 31, 0x28BE14u);
    ctx->pc = 0x28BE10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28BE0Cu;
            // 0x28be10: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x284E88u;
    if (runtime->hasFunction(0x284E88u)) {
        auto targetFn = runtime->lookupFunction(0x284E88u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BE14u; }
        if (ctx->pc != 0x28BE14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00284E88_0x284e88(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BE14u; }
        if (ctx->pc != 0x28BE14u) { return; }
    }
    ctx->pc = 0x28BE14u;
label_28be14:
    // 0x28be14: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x28be14u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_28be18:
    // 0x28be18: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x28be18u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28be1c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28be1cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28be20: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28be20u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28be24: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28be24u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28be28: 0x3e00008  jr          $ra
    ctx->pc = 0x28BE28u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28BE2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BE28u;
            // 0x28be2c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28BE30u;
label_28be30:
    // 0x28be30: 0x27bdff60  addiu       $sp, $sp, -0xA0
    ctx->pc = 0x28be30u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967136));
    // 0x28be34: 0x24a3ffff  addiu       $v1, $a1, -0x1
    ctx->pc = 0x28be34u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x28be38: 0xffb30080  sd          $s3, 0x80($sp)
    ctx->pc = 0x28be38u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 19));
    // 0x28be3c: 0x2c620088  sltiu       $v0, $v1, 0x88
    ctx->pc = 0x28be3cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)136) ? 1 : 0);
    // 0x28be40: 0xffb20070  sd          $s2, 0x70($sp)
    ctx->pc = 0x28be40u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 18));
    // 0x28be44: 0x24130001  addiu       $s3, $zero, 0x1
    ctx->pc = 0x28be44u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28be48: 0xffb10060  sd          $s1, 0x60($sp)
    ctx->pc = 0x28be48u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 17));
    // 0x28be4c: 0xe0902d  daddu       $s2, $a3, $zero
    ctx->pc = 0x28be4cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28be50: 0xffb00050  sd          $s0, 0x50($sp)
    ctx->pc = 0x28be50u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 16));
    // 0x28be54: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x28be54u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28be58: 0xffbf0090  sd          $ra, 0x90($sp)
    ctx->pc = 0x28be58u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 31));
    // 0x28be5c: 0x1040009d  beqz        $v0, . + 4 + (0x9D << 2)
    ctx->pc = 0x28BE5Cu;
    {
        const bool branch_taken_0x28be5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BE60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BE5Cu;
            // 0x28be60: 0x80802d  daddu       $s0, $a0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28be5c) {
            ctx->pc = 0x28C0D4u;
            goto label_28c0d4;
        }
    }
    ctx->pc = 0x28BE64u;
    // 0x28be64: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28be64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28be68: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x28be68u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x28be6c: 0x2442ab00  addiu       $v0, $v0, -0x5500
    ctx->pc = 0x28be6cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945536));
    // 0x28be70: 0x621821  addu        $v1, $v1, $v0
    ctx->pc = 0x28be70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x28be74: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x28be74u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x28be78: 0x800008  jr          $a0
    ctx->pc = 0x28BE78u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x28BE80u: goto label_28be80;
            case 0x28BE84u: goto label_28be84;
            case 0x28BEA8u: goto label_28bea8;
            case 0x28BEC0u: goto label_28bec0;
            case 0x28C024u: goto label_28c024;
            case 0x28C048u: goto label_28c048;
            case 0x28C06Cu: goto label_28c06c;
            case 0x28C0B8u: goto label_28c0b8;
            case 0x28C0C0u: goto label_28c0c0;
            case 0x28C0CCu: goto label_28c0cc;
            case 0x28C0D4u: goto label_28c0d4;
            case 0x28C0D8u: goto label_28c0d8;
            default: break;
        }
        return;
    }
    ctx->pc = 0x28BE80u;
label_28be80:
    // 0x28be80: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x28be80u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28be84:
    // 0x28be84: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x28be84u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x28be88: 0x11283c  dsll32      $a1, $s1, 0
    ctx->pc = 0x28be88u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) << (32 + 0));
    // 0x28be8c: 0x5283f  dsra32      $a1, $a1, 0
    ctx->pc = 0x28be8cu;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 0));
    // 0x28be90: 0xc04495e  jal         func_112578
    ctx->pc = 0x28BE90u;
    SET_GPR_U32(ctx, 31, 0x28BE98u);
    ctx->pc = 0x28BE94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28BE90u;
            // 0x28be94: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112578u;
    if (runtime->hasFunction(0x112578u)) {
        auto targetFn = runtime->lookupFunction(0x112578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BE98u; }
        if (ctx->pc != 0x28BE98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00112578_0x112578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BE98u; }
        if (ctx->pc != 0x28BE98u) { return; }
    }
    ctx->pc = 0x28BE98u;
label_28be98:
    // 0x28be98: 0x511826  xor         $v1, $v0, $s1
    ctx->pc = 0x28be98u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 17));
    // 0x28be9c: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x28be9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28bea0: 0x1000008d  b           . + 4 + (0x8D << 2)
    ctx->pc = 0x28BEA0u;
    {
        const bool branch_taken_0x28bea0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BEA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BEA0u;
            // 0x28bea4: 0x43980b  movn        $s3, $v0, $v1 (Delay Slot)
        if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 19, GPR_VEC(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bea0) {
            ctx->pc = 0x28C0D8u;
            goto label_28c0d8;
        }
    }
    ctx->pc = 0x28BEA8u;
label_28bea8:
    // 0x28bea8: 0x8e04001c  lw          $a0, 0x1C($s0)
    ctx->pc = 0x28bea8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x28beac: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28beacu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28beb0: 0xc04495e  jal         func_112578
    ctx->pc = 0x28BEB0u;
    SET_GPR_U32(ctx, 31, 0x28BEB8u);
    ctx->pc = 0x28BEB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28BEB0u;
            // 0x28beb4: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112578u;
    if (runtime->hasFunction(0x112578u)) {
        auto targetFn = runtime->lookupFunction(0x112578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BEB8u; }
        if (ctx->pc != 0x28BEB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00112578_0x112578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BEB8u; }
        if (ctx->pc != 0x28BEB8u) { return; }
    }
    ctx->pc = 0x28BEB8u;
label_28beb8:
    // 0x28beb8: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x28BEB8u;
    {
        const bool branch_taken_0x28beb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BEBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BEB8u;
            // 0x28bebc: 0x40982d  daddu       $s3, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28beb8) {
            ctx->pc = 0x28C0D8u;
            goto label_28c0d8;
        }
    }
    ctx->pc = 0x28BEC0u;
label_28bec0:
    // 0x28bec0: 0x32220008  andi        $v0, $s1, 0x8
    ctx->pc = 0x28bec0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)8);
    // 0x28bec4: 0x1040001c  beqz        $v0, . + 4 + (0x1C << 2)
    ctx->pc = 0x28BEC4u;
    {
        const bool branch_taken_0x28bec4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BEC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BEC4u;
            // 0x28bec8: 0x32220002  andi        $v0, $s1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bec4) {
            ctx->pc = 0x28BF38u;
            goto label_28bf38;
        }
    }
    ctx->pc = 0x28BECCu;
    // 0x28becc: 0x1040000c  beqz        $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x28BECCu;
    {
        const bool branch_taken_0x28becc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BED0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BECCu;
            // 0x28bed0: 0x3c030040  lui         $v1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28becc) {
            ctx->pc = 0x28BF00u;
            goto label_28bf00;
        }
    }
    ctx->pc = 0x28BED4u;
    // 0x28bed4: 0x240b0203  addiu       $t3, $zero, 0x203
    ctx->pc = 0x28bed4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 515));
    // 0x28bed8: 0x2462aa70  addiu       $v0, $v1, -0x5590
    ctx->pc = 0x28bed8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945392));
    // 0x28bedc: 0xdc65aa70  ld          $a1, -0x5590($v1)
    ctx->pc = 0x28bedcu;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 4294945392)));
    // 0x28bee0: 0x90460014  lbu         $a2, 0x14($v0)
    ctx->pc = 0x28bee0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x28bee4: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x28bee4u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x28bee8: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x28bee8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x28beec: 0xffa50000  sd          $a1, 0x0($sp)
    ctx->pc = 0x28beecu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 5));
    // 0x28bef0: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x28bef0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x28bef4: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x28bef4u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28bef8: 0x10000046  b           . + 4 + (0x46 << 2)
    ctx->pc = 0x28BEF8u;
    {
        const bool branch_taken_0x28bef8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BEFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BEF8u;
            // 0x28befc: 0xa3a60014  sb          $a2, 0x14($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 20), (uint8_t)GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bef8) {
            ctx->pc = 0x28C014u;
            goto label_28c014;
        }
    }
    ctx->pc = 0x28BF00u;
label_28bf00:
    // 0x28bf00: 0x3c030040  lui         $v1, 0x40
    ctx->pc = 0x28bf00u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)64 << 16));
    // 0x28bf04: 0x240b0202  addiu       $t3, $zero, 0x202
    ctx->pc = 0x28bf04u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 514));
    // 0x28bf08: 0x2462aa88  addiu       $v0, $v1, -0x5578
    ctx->pc = 0x28bf08u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 4294945416));
    // 0x28bf0c: 0xdc66aa88  ld          $a2, -0x5578($v1)
    ctx->pc = 0x28bf0cu;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 4294945416)));
    // 0x28bf10: 0x90470016  lbu         $a3, 0x16($v0)
    ctx->pc = 0x28bf10u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x28bf14: 0xdc430008  ld          $v1, 0x8($v0)
    ctx->pc = 0x28bf14u;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x28bf18: 0x8c440010  lw          $a0, 0x10($v0)
    ctx->pc = 0x28bf18u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x28bf1c: 0x94450014  lhu         $a1, 0x14($v0)
    ctx->pc = 0x28bf1cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 20)));
    // 0x28bf20: 0xffa60000  sd          $a2, 0x0($sp)
    ctx->pc = 0x28bf20u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 6));
    // 0x28bf24: 0xffa30008  sd          $v1, 0x8($sp)
    ctx->pc = 0x28bf24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 3));
    // 0x28bf28: 0xafa40010  sw          $a0, 0x10($sp)
    ctx->pc = 0x28bf28u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 16), GPR_U32(ctx, 4));
    // 0x28bf2c: 0xa7a50014  sh          $a1, 0x14($sp)
    ctx->pc = 0x28bf2cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 20), (uint16_t)GPR_U32(ctx, 5));
    // 0x28bf30: 0x10000038  b           . + 4 + (0x38 << 2)
    ctx->pc = 0x28BF30u;
    {
        const bool branch_taken_0x28bf30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BF34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BF30u;
            // 0x28bf34: 0xa3a70016  sb          $a3, 0x16($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 22), (uint8_t)GPR_U32(ctx, 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bf30) {
            ctx->pc = 0x28C014u;
            goto label_28c014;
        }
    }
    ctx->pc = 0x28BF38u;
label_28bf38:
    // 0x28bf38: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x28bf38u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x28bf3c: 0x32220006  andi        $v0, $s1, 0x6
    ctx->pc = 0x28bf3cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)6);
    // 0x28bf40: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x28BF40u;
    {
        const bool branch_taken_0x28bf40 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        ctx->pc = 0x28BF44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BF40u;
            // 0x28bf44: 0x32220004  andi        $v0, $s1, 0x4 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)4);
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bf40) {
            ctx->pc = 0x28BF68u;
            goto label_28bf68;
        }
    }
    ctx->pc = 0x28BF48u;
    // 0x28bf48: 0x3c020040  lui         $v0, 0x40
    ctx->pc = 0x28bf48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
    // 0x28bf4c: 0x240b0003  addiu       $t3, $zero, 0x3
    ctx->pc = 0x28bf4cu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x28bf50: 0x2443aaa0  addiu       $v1, $v0, -0x5560
    ctx->pc = 0x28bf50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945440));
    // 0x28bf54: 0xdc44aaa0  ld          $a0, -0x5560($v0)
    ctx->pc = 0x28bf54u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 4294945440)));
    // 0x28bf58: 0x90650008  lbu         $a1, 0x8($v1)
    ctx->pc = 0x28bf58u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x28bf5c: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x28bf5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x28bf60: 0x1000002c  b           . + 4 + (0x2C << 2)
    ctx->pc = 0x28BF60u;
    {
        const bool branch_taken_0x28bf60 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BF64u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BF60u;
            // 0x28bf64: 0xa3a50008  sb          $a1, 0x8($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 8), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bf60) {
            ctx->pc = 0x28C014u;
            goto label_28c014;
        }
    }
    ctx->pc = 0x28BF68u;
label_28bf68:
    // 0x28bf68: 0x10400016  beqz        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x28BF68u;
    {
        const bool branch_taken_0x28bf68 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BF6Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BF68u;
            // 0x28bf6c: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bf68) {
            ctx->pc = 0x28BFC4u;
            goto label_28bfc4;
        }
    }
    ctx->pc = 0x28BF70u;
    // 0x28bf70: 0x3c040040  lui         $a0, 0x40
    ctx->pc = 0x28bf70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)64 << 16));
    // 0x28bf74: 0x2442aab0  addiu       $v0, $v0, -0x5550
    ctx->pc = 0x28bf74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945456));
    // 0x28bf78: 0x2483aac0  addiu       $v1, $a0, -0x5540
    ctx->pc = 0x28bf78u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945472));
    // 0x28bf7c: 0x9049000a  lbu         $t1, 0xA($v0)
    ctx->pc = 0x28bf7cu;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 10)));
    // 0x28bf80: 0x240b0602  addiu       $t3, $zero, 0x602
    ctx->pc = 0x28bf80u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1538));
    // 0x28bf84: 0x94450008  lhu         $a1, 0x8($v0)
    ctx->pc = 0x28bf84u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x28bf88: 0xdc88aac0  ld          $t0, -0x5540($a0)
    ctx->pc = 0x28bf88u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 4294945472)));
    // 0x28bf8c: 0x906a0022  lbu         $t2, 0x22($v1)
    ctx->pc = 0x28bf8cu;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 34)));
    // 0x28bf90: 0xdc620008  ld          $v0, 0x8($v1)
    ctx->pc = 0x28bf90u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x28bf94: 0xdc640010  ld          $a0, 0x10($v1)
    ctx->pc = 0x28bf94u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x28bf98: 0xdc660018  ld          $a2, 0x18($v1)
    ctx->pc = 0x28bf98u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x28bf9c: 0x94670020  lhu         $a3, 0x20($v1)
    ctx->pc = 0x28bf9cu;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 32)));
    // 0x28bfa0: 0xa7a50008  sh          $a1, 0x8($sp)
    ctx->pc = 0x28bfa0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 5));
    // 0x28bfa4: 0xa3a9000a  sb          $t1, 0xA($sp)
    ctx->pc = 0x28bfa4u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 10), (uint8_t)GPR_U32(ctx, 9));
    // 0x28bfa8: 0xffa80000  sd          $t0, 0x0($sp)
    ctx->pc = 0x28bfa8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 8));
    // 0x28bfac: 0xffa20008  sd          $v0, 0x8($sp)
    ctx->pc = 0x28bfacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 2));
    // 0x28bfb0: 0xffa40010  sd          $a0, 0x10($sp)
    ctx->pc = 0x28bfb0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 4));
    // 0x28bfb4: 0xffa60018  sd          $a2, 0x18($sp)
    ctx->pc = 0x28bfb4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 6));
    // 0x28bfb8: 0xa7a70020  sh          $a3, 0x20($sp)
    ctx->pc = 0x28bfb8u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 32), (uint16_t)GPR_U32(ctx, 7));
    // 0x28bfbc: 0x10000015  b           . + 4 + (0x15 << 2)
    ctx->pc = 0x28BFBCu;
    {
        const bool branch_taken_0x28bfbc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BFC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BFBCu;
            // 0x28bfc0: 0xa3aa0022  sb          $t2, 0x22($sp) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 29), 34), (uint8_t)GPR_U32(ctx, 10));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bfbc) {
            ctx->pc = 0x28C014u;
            goto label_28c014;
        }
    }
    ctx->pc = 0x28BFC4u;
label_28bfc4:
    // 0x28bfc4: 0x32220002  andi        $v0, $s1, 0x2
    ctx->pc = 0x28bfc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)2);
    // 0x28bfc8: 0x1440000a  bnez        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x28BFC8u;
    {
        const bool branch_taken_0x28bfc8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x28BFCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BFC8u;
            // 0x28bfcc: 0x3c020040  lui         $v0, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bfc8) {
            ctx->pc = 0x28BFF4u;
            goto label_28bff4;
        }
    }
    ctx->pc = 0x28BFD0u;
    // 0x28bfd0: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x28bfd0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x28bfd4: 0x2405006e  addiu       $a1, $zero, 0x6E
    ctx->pc = 0x28bfd4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 110));
    // 0x28bfd8: 0x24060064  addiu       $a2, $zero, 0x64
    ctx->pc = 0x28bfd8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 100));
    // 0x28bfdc: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x28bfdcu;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bfe0: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x28bfe0u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28bfe4: 0xc0a5648  jal         func_295920
    ctx->pc = 0x28BFE4u;
    SET_GPR_U32(ctx, 31, 0x28BFECu);
    ctx->pc = 0x28BFE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28BFE4u;
            // 0x28bfe8: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x295920u;
    if (runtime->hasFunction(0x295920u)) {
        auto targetFn = runtime->lookupFunction(0x295920u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BFECu; }
        if (ctx->pc != 0x28BFECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00295920_0x295920(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28BFECu; }
        if (ctx->pc != 0x28BFECu) { return; }
    }
    ctx->pc = 0x28BFECu;
label_28bfec:
    // 0x28bfec: 0x1000003b  b           . + 4 + (0x3B << 2)
    ctx->pc = 0x28BFECu;
    {
        const bool branch_taken_0x28bfec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28BFF0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28BFECu;
            // 0x28bff0: 0x260102d  daddu       $v0, $s3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28bfec) {
            ctx->pc = 0x28C0DCu;
            goto label_28c0dc;
        }
    }
    ctx->pc = 0x28BFF4u;
label_28bff4:
    // 0x28bff4: 0x240b0001  addiu       $t3, $zero, 0x1
    ctx->pc = 0x28bff4u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28bff8: 0x2443aae8  addiu       $v1, $v0, -0x5518
    ctx->pc = 0x28bff8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), 4294945512));
    // 0x28bffc: 0xdc44aae8  ld          $a0, -0x5518($v0)
    ctx->pc = 0x28bffcu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 2), 4294945512)));
    // 0x28c000: 0x9065000a  lbu         $a1, 0xA($v1)
    ctx->pc = 0x28c000u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 10)));
    // 0x28c004: 0x94620008  lhu         $v0, 0x8($v1)
    ctx->pc = 0x28c004u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x28c008: 0xffa40000  sd          $a0, 0x0($sp)
    ctx->pc = 0x28c008u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 4));
    // 0x28c00c: 0xa7a20008  sh          $v0, 0x8($sp)
    ctx->pc = 0x28c00cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 8), (uint16_t)GPR_U32(ctx, 2));
    // 0x28c010: 0xa3a5000a  sb          $a1, 0xA($sp)
    ctx->pc = 0x28c010u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 10), (uint8_t)GPR_U32(ctx, 5));
label_28c014:
    // 0x28c014: 0xafab0048  sw          $t3, 0x48($sp)
    ctx->pc = 0x28c014u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 72), GPR_U32(ctx, 11));
    // 0x28c018: 0xafb20040  sw          $s2, 0x40($sp)
    ctx->pc = 0x28c018u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 18));
    // 0x28c01c: 0x10000017  b           . + 4 + (0x17 << 2)
    ctx->pc = 0x28C01Cu;
    {
        const bool branch_taken_0x28c01c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C020u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C01Cu;
            // 0x28c020: 0xafbd0044  sw          $sp, 0x44($sp) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 29));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c01c) {
            ctx->pc = 0x28C07Cu;
            goto label_28c07c;
        }
    }
    ctx->pc = 0x28C024u;
label_28c024:
    // 0x28c024: 0xc0a2f30  jal         func_28BCC0
    ctx->pc = 0x28C024u;
    SET_GPR_U32(ctx, 31, 0x28C02Cu);
    ctx->pc = 0x28C028u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C024u;
            // 0x28c028: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28BCC0u;
    if (runtime->hasFunction(0x28BCC0u)) {
        auto targetFn = runtime->lookupFunction(0x28BCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C02Cu; }
        if (ctx->pc != 0x28C02Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028BCC0_0x28bcc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C02Cu; }
        if (ctx->pc != 0x28C02Cu) { return; }
    }
    ctx->pc = 0x28C02Cu;
label_28c02c:
    // 0x28c02c: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x28c02cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28c030: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x28c030u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x28c034: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x28c034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x28c038: 0xae020010  sw          $v0, 0x10($s0)
    ctx->pc = 0x28c038u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
    // 0x28c03c: 0xae04000c  sw          $a0, 0xC($s0)
    ctx->pc = 0x28c03cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 4));
    // 0x28c040: 0x10000025  b           . + 4 + (0x25 << 2)
    ctx->pc = 0x28C040u;
    {
        const bool branch_taken_0x28c040 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C044u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C040u;
            // 0x28c044: 0xae03001c  sw          $v1, 0x1C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c040) {
            ctx->pc = 0x28C0D8u;
            goto label_28c0d8;
        }
    }
    ctx->pc = 0x28C048u;
label_28c048:
    // 0x28c048: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x28c048u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x28c04c: 0x10400022  beqz        $v0, . + 4 + (0x22 << 2)
    ctx->pc = 0x28C04Cu;
    {
        const bool branch_taken_0x28c04c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C050u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C04Cu;
            // 0x28c050: 0x2413ffff  addiu       $s3, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c04c) {
            ctx->pc = 0x28C0D8u;
            goto label_28c0d8;
        }
    }
    ctx->pc = 0x28C054u;
    // 0x28c054: 0x52400020  beql        $s2, $zero, . + 4 + (0x20 << 2)
    ctx->pc = 0x28C054u;
    {
        const bool branch_taken_0x28c054 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c054) {
            ctx->pc = 0x28C058u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28C054u;
            // 0x28c058: 0x8e13001c  lw          $s3, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28C0D8u;
            goto label_28c0d8;
        }
    }
    ctx->pc = 0x28C05Cu;
    // 0x28c05c: 0x8e02001c  lw          $v0, 0x1C($s0)
    ctx->pc = 0x28c05cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
    // 0x28c060: 0xae420000  sw          $v0, 0x0($s2)
    ctx->pc = 0x28c060u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 0), GPR_U32(ctx, 2));
    // 0x28c064: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x28C064u;
    {
        const bool branch_taken_0x28c064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C064u;
            // 0x28c068: 0x8e13001c  lw          $s3, 0x1C($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c064) {
            ctx->pc = 0x28C0D8u;
            goto label_28c0d8;
        }
    }
    ctx->pc = 0x28C06Cu;
label_28c06c:
    // 0x28c06c: 0x8e420000  lw          $v0, 0x0($s2)
    ctx->pc = 0x28c06cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28c070: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x28c070u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x28c074: 0xafa20040  sw          $v0, 0x40($sp)
    ctx->pc = 0x28c074u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 64), GPR_U32(ctx, 2));
    // 0x28c078: 0xafa30044  sw          $v1, 0x44($sp)
    ctx->pc = 0x28c078u;
    WRITE32(ADD32(GPR_U32(ctx, 29), 68), GPR_U32(ctx, 3));
label_28c07c:
    // 0x28c07c: 0xc0a2f30  jal         func_28BCC0
    ctx->pc = 0x28C07Cu;
    SET_GPR_U32(ctx, 31, 0x28C084u);
    ctx->pc = 0x28C080u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C07Cu;
            // 0x28c080: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28BCC0u;
    if (runtime->hasFunction(0x28BCC0u)) {
        auto targetFn = runtime->lookupFunction(0x28BCC0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C084u; }
        if (ctx->pc != 0x28C084u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0028BCC0_0x28bcc0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C084u; }
        if (ctx->pc != 0x28C084u) { return; }
    }
    ctx->pc = 0x28C084u;
label_28c084:
    // 0x28c084: 0x8e430000  lw          $v1, 0x0($s2)
    ctx->pc = 0x28c084u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x28c088: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x28c088u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x28c08c: 0x8fa40040  lw          $a0, 0x40($sp)
    ctx->pc = 0x28c08cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28c090: 0x8fa50048  lw          $a1, 0x48($sp)
    ctx->pc = 0x28c090u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 72)));
    // 0x28c094: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x28c094u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x28c098: 0xc04485c  jal         func_112170
    ctx->pc = 0x28C098u;
    SET_GPR_U32(ctx, 31, 0x28C0A0u);
    ctx->pc = 0x28C09Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C098u;
            // 0x28c09c: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112170u;
    if (runtime->hasFunction(0x112170u)) {
        auto targetFn = runtime->lookupFunction(0x112170u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C0A0u; }
        if (ctx->pc != 0x28C0A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00112170_0x112170(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C0A0u; }
        if (ctx->pc != 0x28C0A0u) { return; }
    }
    ctx->pc = 0x28C0A0u;
label_28c0a0:
    // 0x28c0a0: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x28c0a0u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c0a4: 0x460000b  bltz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x28C0A4u;
    {
        const bool branch_taken_0x28c0a4 = (GPR_S32(ctx, 3) < 0);
        ctx->pc = 0x28C0A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C0A4u;
            // 0x28c0a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c0a4) {
            ctx->pc = 0x28C0D4u;
            goto label_28c0d4;
        }
    }
    ctx->pc = 0x28C0ACu;
    // 0x28c0ac: 0xae03001c  sw          $v1, 0x1C($s0)
    ctx->pc = 0x28c0acu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 28), GPR_U32(ctx, 3));
    // 0x28c0b0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x28C0B0u;
    {
        const bool branch_taken_0x28c0b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C0B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C0B0u;
            // 0x28c0b4: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c0b0) {
            ctx->pc = 0x28C0D8u;
            goto label_28c0d8;
        }
    }
    ctx->pc = 0x28C0B8u;
label_28c0b8:
    // 0x28c0b8: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x28C0B8u;
    {
        const bool branch_taken_0x28c0b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C0BCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C0B8u;
            // 0x28c0bc: 0x8e130010  lw          $s3, 0x10($s0) (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c0b8) {
            ctx->pc = 0x28C0D8u;
            goto label_28c0d8;
        }
    }
    ctx->pc = 0x28C0C0u;
label_28c0c0:
    // 0x28c0c0: 0x32220001  andi        $v0, $s1, 0x1
    ctx->pc = 0x28c0c0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)1);
    // 0x28c0c4: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x28C0C4u;
    {
        const bool branch_taken_0x28c0c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C0C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C0C4u;
            // 0x28c0c8: 0xae020010  sw          $v0, 0x10($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c0c4) {
            ctx->pc = 0x28C0D8u;
            goto label_28c0d8;
        }
    }
    ctx->pc = 0x28C0CCu;
label_28c0cc:
    // 0x28c0cc: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x28C0CCu;
    {
        const bool branch_taken_0x28c0cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C0D0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C0CCu;
            // 0x28c0d0: 0x24130001  addiu       $s3, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c0cc) {
            ctx->pc = 0x28C0D8u;
            goto label_28c0d8;
        }
    }
    ctx->pc = 0x28C0D4u;
label_28c0d4:
    // 0x28c0d4: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x28c0d4u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_28c0d8:
    // 0x28c0d8: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x28c0d8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
label_28c0dc:
    // 0x28c0dc: 0xdfbf0090  ld          $ra, 0x90($sp)
    ctx->pc = 0x28c0dcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x28c0e0: 0xdfb30080  ld          $s3, 0x80($sp)
    ctx->pc = 0x28c0e0u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x28c0e4: 0xdfb20070  ld          $s2, 0x70($sp)
    ctx->pc = 0x28c0e4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x28c0e8: 0xdfb10060  ld          $s1, 0x60($sp)
    ctx->pc = 0x28c0e8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x28c0ec: 0xdfb00050  ld          $s0, 0x50($sp)
    ctx->pc = 0x28c0ecu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28c0f0: 0x3e00008  jr          $ra
    ctx->pc = 0x28C0F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C0F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C0F0u;
            // 0x28c0f4: 0x27bd00a0  addiu       $sp, $sp, 0xA0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28C0F8u;
label_28c0f8:
    // 0x28c0f8: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x28c0f8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x28c0fc: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28c0fcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28c100: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28c100u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28c104: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28c104u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c108: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x28c108u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c10c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x28c10cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x28c110: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x28C110u;
    SET_GPR_U32(ctx, 31, 0x28C118u);
    ctx->pc = 0x28C114u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C110u;
            // 0x28c114: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C118u; }
        if (ctx->pc != 0x28C118u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C118u; }
        if (ctx->pc != 0x28C118u) { return; }
    }
    ctx->pc = 0x28C118u;
label_28c118:
    // 0x28c118: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x28c118u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c11c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x28c11cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c120: 0xc0a2f6c  jal         func_28BDB0
    ctx->pc = 0x28C120u;
    SET_GPR_U32(ctx, 31, 0x28C128u);
    ctx->pc = 0x28C124u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C120u;
            // 0x28c124: 0x40302d  daddu       $a2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x28BDB0u;
    goto label_28bdb0;
    ctx->pc = 0x28C128u;
label_28c128:
    // 0x28c128: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x28c128u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28c12c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28c12cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28c130: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28c130u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28c134: 0x3e00008  jr          $ra
    ctx->pc = 0x28C134u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C138u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C134u;
            // 0x28c138: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28C13Cu;
    // 0x28c13c: 0x0  nop
    ctx->pc = 0x28c13cu;
    // NOP
label_28c140:
    // 0x28c140: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x28c140u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x28c144: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x28c144u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x28c148: 0xffb40040  sd          $s4, 0x40($sp)
    ctx->pc = 0x28c148u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 20));
    // 0x28c14c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x28c14cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c150: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x28c150u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x28c154: 0xa02d  daddu       $s4, $zero, $zero
    ctx->pc = 0x28c154u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c158: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x28c158u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x28c15c: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x28c15cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c160: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x28c160u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x28c164: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x28c164u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c168: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x28c168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x28c16c: 0x1a00000e  blez        $s0, . + 4 + (0xE << 2)
    ctx->pc = 0x28C16Cu;
    {
        const bool branch_taken_0x28c16c = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x28C170u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C16Cu;
            // 0x28c170: 0xa2200000  sb          $zero, 0x0($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c16c) {
            ctx->pc = 0x28C1A8u;
            goto label_28c1a8;
        }
    }
    ctx->pc = 0x28C174u;
    // 0x28c174: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x28c174u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x28c178: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x28c178u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c17c: 0xc04495e  jal         func_112578
    ctx->pc = 0x28C17Cu;
    SET_GPR_U32(ctx, 31, 0x28C184u);
    ctx->pc = 0x28C180u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C17Cu;
            // 0x28c180: 0x24060001  addiu       $a2, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112578u;
    if (runtime->hasFunction(0x112578u)) {
        auto targetFn = runtime->lookupFunction(0x112578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C184u; }
        if (ctx->pc != 0x28C184u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00112578_0x112578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C184u; }
        if (ctx->pc != 0x28C184u) { return; }
    }
    ctx->pc = 0x28C184u;
label_28c184:
    // 0x28c184: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x28c184u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c188: 0x2402ffff  addiu       $v0, $zero, -0x1
    ctx->pc = 0x28c188u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x28c18c: 0x12620006  beq         $s3, $v0, . + 4 + (0x6 << 2)
    ctx->pc = 0x28C18Cu;
    {
        const bool branch_taken_0x28c18c = (GPR_U64(ctx, 19) == GPR_U64(ctx, 2));
        ctx->pc = 0x28C190u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C18Cu;
            // 0x28c190: 0x2606ffff  addiu       $a2, $s0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c18c) {
            ctx->pc = 0x28C1A8u;
            goto label_28c1a8;
        }
    }
    ctx->pc = 0x28C194u;
    // 0x28c194: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x28c194u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x28c198: 0xc0449ee  jal         func_1127B8
    ctx->pc = 0x28C198u;
    SET_GPR_U32(ctx, 31, 0x28C1A0u);
    ctx->pc = 0x28C19Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C198u;
            // 0x28c19c: 0x220282d  daddu       $a1, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1127B8u;
    if (runtime->hasFunction(0x1127B8u)) {
        auto targetFn = runtime->lookupFunction(0x1127B8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C1A0u; }
        if (ctx->pc != 0x28C1A0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001127B8_0x1127b8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C1A0u; }
        if (ctx->pc != 0x28C1A0u) { return; }
    }
    ctx->pc = 0x28C1A0u;
label_28c1a0:
    // 0x28c1a0: 0x1c400003  bgtz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x28C1A0u;
    {
        const bool branch_taken_0x28c1a0 = (GPR_S32(ctx, 2) > 0);
        ctx->pc = 0x28C1A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C1A0u;
            // 0x28c1a4: 0x3c050040  lui         $a1, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c1a0) {
            ctx->pc = 0x28C1B0u;
            goto label_28c1b0;
        }
    }
    ctx->pc = 0x28C1A8u;
label_28c1a8:
    // 0x28c1a8: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x28C1A8u;
    {
        const bool branch_taken_0x28c1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x28C1ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C1A8u;
            // 0x28c1ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x28c1a8) {
            ctx->pc = 0x28C210u;
            goto label_28c210;
        }
    }
    ctx->pc = 0x28C1B0u;
label_28c1b0:
    // 0x28c1b0: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x28c1b0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c1b4: 0xc04a822  jal         func_12A088
    ctx->pc = 0x28C1B4u;
    SET_GPR_U32(ctx, 31, 0x28C1BCu);
    ctx->pc = 0x28C1B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C1B4u;
            // 0x28c1b8: 0x24a5ad20  addiu       $a1, $a1, -0x52E0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294946080));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A088u;
    if (runtime->hasFunction(0x12A088u)) {
        auto targetFn = runtime->lookupFunction(0x12A088u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C1BCu; }
        if (ctx->pc != 0x28C1BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A088_0x12a088(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C1BCu; }
        if (ctx->pc != 0x28C1BCu) { return; }
    }
    ctx->pc = 0x28C1BCu;
label_28c1bc:
    // 0x28c1bc: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x28c1bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c1c0: 0x2302021  addu        $a0, $s1, $s0
    ctx->pc = 0x28c1c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x28c1c4: 0x80830000  lb          $v1, 0x0($a0)
    ctx->pc = 0x28c1c4u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x28c1c8: 0x26100001  addiu       $s0, $s0, 0x1
    ctx->pc = 0x28c1c8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x28c1cc: 0x3863000a  xori        $v1, $v1, 0xA
    ctx->pc = 0x28c1ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) ^ (uint64_t)(uint16_t)10);
    // 0x28c1d0: 0x43800b  movn        $s0, $v0, $v1
    ctx->pc = 0x28c1d0u;
    if (GPR_U64(ctx, 3) != 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
    // 0x28c1d4: 0x2301021  addu        $v0, $s1, $s0
    ctx->pc = 0x28c1d4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x28c1d8: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x28c1d8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x28c1dc: 0x82230000  lb          $v1, 0x0($s1)
    ctx->pc = 0x28c1dcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x28c1e0: 0x50600005  beql        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x28C1E0u;
    {
        const bool branch_taken_0x28c1e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x28c1e0) {
            ctx->pc = 0x28C1E4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x28C1E0u;
            // 0x28c1e4: 0x8e44001c  lw          $a0, 0x1C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x28C1F8u;
            goto label_28c1f8;
        }
    }
    ctx->pc = 0x28C1E8u;
    // 0x28c1e8: 0xc04a83e  jal         func_12A0F8
    ctx->pc = 0x28C1E8u;
    SET_GPR_U32(ctx, 31, 0x28C1F0u);
    ctx->pc = 0x28C1ECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C1E8u;
            // 0x28c1ec: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x12A0F8u;
    if (runtime->hasFunction(0x12A0F8u)) {
        auto targetFn = runtime->lookupFunction(0x12A0F8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C1F0u; }
        if (ctx->pc != 0x28C1F0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0012A0F8_0x12a0f8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C1F0u; }
        if (ctx->pc != 0x28C1F0u) { return; }
    }
    ctx->pc = 0x28C1F0u;
label_28c1f0:
    // 0x28c1f0: 0x40a02d  daddu       $s4, $v0, $zero
    ctx->pc = 0x28c1f0u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x28c1f4: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x28c1f4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
label_28c1f8:
    // 0x28c1f8: 0x2702821  addu        $a1, $s3, $s0
    ctx->pc = 0x28c1f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), GPR_U32(ctx, 16)));
    // 0x28c1fc: 0xc04495e  jal         func_112578
    ctx->pc = 0x28C1FCu;
    SET_GPR_U32(ctx, 31, 0x28C204u);
    ctx->pc = 0x28C200u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x28C1FCu;
            // 0x28c200: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x112578u;
    if (runtime->hasFunction(0x112578u)) {
        auto targetFn = runtime->lookupFunction(0x112578u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C204u; }
        if (ctx->pc != 0x28C204u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00112578_0x112578(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x28C204u; }
        if (ctx->pc != 0x28C204u) { return; }
    }
    ctx->pc = 0x28C204u;
label_28c204:
    // 0x28c204: 0x21027  nor         $v0, $zero, $v0
    ctx->pc = 0x28c204u;
    SET_GPR_U64(ctx, 2, ~(GPR_U64(ctx, 0) | GPR_U64(ctx, 2)));
    // 0x28c208: 0x2a00a  movz        $s4, $zero, $v0
    ctx->pc = 0x28c208u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 20, GPR_VEC(ctx, 0));
    // 0x28c20c: 0x280102d  daddu       $v0, $s4, $zero
    ctx->pc = 0x28c20cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
label_28c210:
    // 0x28c210: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x28c210u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x28c214: 0xdfb40040  ld          $s4, 0x40($sp)
    ctx->pc = 0x28c214u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x28c218: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x28c218u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x28c21c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x28c21cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x28c220: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x28c220u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x28c224: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x28c224u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x28c228: 0x3e00008  jr          $ra
    ctx->pc = 0x28C228u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x28C22Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x28C228u;
            // 0x28c22c: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x28C230u;
    ctx->pc = 0x28c230u;
}
