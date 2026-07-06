#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0019B970
// Address: 0x19b970 - 0x19be10
void sub_0019B970_0x19b970(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0019B970_0x19b970");
#endif

    switch (ctx->pc) {
        case 0x19b9ccu: goto label_19b9cc;
        case 0x19ba00u: goto label_19ba00;
        case 0x19bae4u: goto label_19bae4;
        case 0x19bb14u: goto label_19bb14;
        case 0x19bb44u: goto label_19bb44;
        case 0x19bb84u: goto label_19bb84;
        case 0x19bbc4u: goto label_19bbc4;
        case 0x19bbd0u: goto label_19bbd0;
        case 0x19bbe4u: goto label_19bbe4;
        case 0x19bc14u: goto label_19bc14;
        case 0x19bc44u: goto label_19bc44;
        case 0x19bc84u: goto label_19bc84;
        case 0x19bcbcu: goto label_19bcbc;
        case 0x19bcd0u: goto label_19bcd0;
        case 0x19bcdcu: goto label_19bcdc;
        case 0x19bcf0u: goto label_19bcf0;
        case 0x19bd20u: goto label_19bd20;
        case 0x19bd6cu: goto label_19bd6c;
        case 0x19bd7cu: goto label_19bd7c;
        case 0x19bdacu: goto label_19bdac;
        case 0x19bdf8u: goto label_19bdf8;
        default: break;
    }

    ctx->pc = 0x19b970u;

    // 0x19b970: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x19b970u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x19b974: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x19b974u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x19b978: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x19b978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x19b97c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19b97cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19b980: 0xa040d4f8  sb          $zero, -0x2B08($v0)
    ctx->pc = 0x19b980u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294956280), (uint8_t)GPR_U32(ctx, 0));
    // 0x19b984: 0x3c044170  lui         $a0, 0x4170
    ctx->pc = 0x19b984u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16752 << 16));
    // 0x19b988: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19b988u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19b98c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19b98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19b990: 0xac64d580  sw          $a0, -0x2A80($v1)
    ctx->pc = 0x19b990u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956416), GPR_U32(ctx, 4));
    // 0x19b994: 0x24a5ef18  addiu       $a1, $a1, -0x10E8
    ctx->pc = 0x19b994u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294962968));
    // 0x19b998: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19b998u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19b99c: 0xac40d524  sw          $zero, -0x2ADC($v0)
    ctx->pc = 0x19b99cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956324), GPR_U32(ctx, 0));
    // 0x19b9a0: 0xac60d520  sw          $zero, -0x2AE0($v1)
    ctx->pc = 0x19b9a0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956320), GPR_U32(ctx, 0));
    // 0x19b9a4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19b9a4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19b9a8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19b9a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19b9ac: 0x3c04001a  lui         $a0, 0x1A
    ctx->pc = 0x19b9acu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)26 << 16));
    // 0x19b9b0: 0xac60d528  sw          $zero, -0x2AD8($v1)
    ctx->pc = 0x19b9b0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956328), GPR_U32(ctx, 0));
    // 0x19b9b4: 0x2484ba00  addiu       $a0, $a0, -0x4600
    ctx->pc = 0x19b9b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294949376));
    // 0x19b9b8: 0xac40d52c  sw          $zero, -0x2AD4($v0)
    ctx->pc = 0x19b9b8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956332), GPR_U32(ctx, 0));
    // 0x19b9bc: 0x24060004  addiu       $a2, $zero, 0x4
    ctx->pc = 0x19b9bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x19b9c0: 0x24070003  addiu       $a3, $zero, 0x3
    ctx->pc = 0x19b9c0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x19b9c4: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x19B9C4u;
    SET_GPR_U32(ctx, 31, 0x19B9CCu);
    ctx->pc = 0x19B9C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19B9C4u;
            // 0x19b9c8: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B9CCu; }
        if (ctx->pc != 0x19B9CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19B9CCu; }
        if (ctx->pc != 0x19B9CCu) { return; }
    }
    ctx->pc = 0x19B9CCu;
label_19b9cc:
    // 0x19b9cc: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x19B9CCu;
    {
        const bool branch_taken_0x19b9cc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x19b9cc) {
            ctx->pc = 0x19B9D0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19B9CCu;
            // 0x19b9d0: 0x2404ffff  addiu       $a0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19B9E4u;
            goto label_19b9e4;
        }
    }
    ctx->pc = 0x19B9D4u;
    // 0x19b9d4: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x19b9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x19b9d8: 0xa0600001  sb          $zero, 0x1($v1)
    ctx->pc = 0x19b9d8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x19b9dc: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x19B9DCu;
    {
        const bool branch_taken_0x19b9dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19B9E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B9DCu;
            // 0x19b9e0: 0xa0600000  sb          $zero, 0x0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19b9dc) {
            ctx->pc = 0x19B9ECu;
            goto label_19b9ec;
        }
    }
    ctx->pc = 0x19B9E4u;
label_19b9e4:
    // 0x19b9e4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19b9e4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19b9e8: 0xa064d4f8  sb          $a0, -0x2B08($v1)
    ctx->pc = 0x19b9e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294956280), (uint8_t)GPR_U32(ctx, 4));
label_19b9ec:
    // 0x19b9ec: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x19b9ecu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19b9f0: 0x3e00008  jr          $ra
    ctx->pc = 0x19B9F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19B9F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19B9F0u;
            // 0x19b9f4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19B9F8u;
    // 0x19b9f8: 0x0  nop
    ctx->pc = 0x19b9f8u;
    // NOP
    // 0x19b9fc: 0x0  nop
    ctx->pc = 0x19b9fcu;
    // NOP
label_19ba00:
    // 0x19ba00: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x19ba00u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x19ba04: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x19ba04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x19ba08: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x19ba08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x19ba0c: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x19ba0cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x19ba10: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x19ba10u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x19ba14: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x19ba14u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19ba18: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x19ba18u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x19ba1c: 0x8c910010  lw          $s1, 0x10($a0)
    ctx->pc = 0x19ba1cu;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x19ba20: 0x3c10009c  lui         $s0, 0x9C
    ctx->pc = 0x19ba20u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)156 << 16));
    // 0x19ba24: 0x92260001  lbu         $a2, 0x1($s1)
    ctx->pc = 0x19ba24u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 1)));
    // 0x19ba28: 0x10c300dc  beq         $a2, $v1, . + 4 + (0xDC << 2)
    ctx->pc = 0x19BA28u;
    {
        const bool branch_taken_0x19ba28 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        ctx->pc = 0x19BA2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BA28u;
            // 0x19ba2c: 0x2610d500  addiu       $s0, $s0, -0x2B00 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294956288));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19ba28) {
            ctx->pc = 0x19BD9Cu;
            goto label_19bd9c;
        }
    }
    ctx->pc = 0x19BA30u;
    // 0x19ba30: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x19ba30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x19ba34: 0x10c300cf  beq         $a2, $v1, . + 4 + (0xCF << 2)
    ctx->pc = 0x19BA34u;
    {
        const bool branch_taken_0x19ba34 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x19ba34) {
            ctx->pc = 0x19BD74u;
            goto label_19bd74;
        }
    }
    ctx->pc = 0x19BA3Cu;
    // 0x19ba3c: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x19ba3cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x19ba40: 0x10c300b3  beq         $a2, $v1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x19BA40u;
    {
        const bool branch_taken_0x19ba40 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x19ba40) {
            ctx->pc = 0x19BD10u;
            goto label_19bd10;
        }
    }
    ctx->pc = 0x19BA48u;
    // 0x19ba48: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x19ba48u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x19ba4c: 0x10c300a6  beq         $a2, $v1, . + 4 + (0xA6 << 2)
    ctx->pc = 0x19BA4Cu;
    {
        const bool branch_taken_0x19ba4c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x19ba4c) {
            ctx->pc = 0x19BCE8u;
            goto label_19bce8;
        }
    }
    ctx->pc = 0x19BA54u;
    // 0x19ba54: 0x24030033  addiu       $v1, $zero, 0x33
    ctx->pc = 0x19ba54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x19ba58: 0x10c30084  beq         $a2, $v1, . + 4 + (0x84 << 2)
    ctx->pc = 0x19BA58u;
    {
        const bool branch_taken_0x19ba58 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x19ba58) {
            ctx->pc = 0x19BC6Cu;
            goto label_19bc6c;
        }
    }
    ctx->pc = 0x19BA60u;
    // 0x19ba60: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x19ba60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x19ba64: 0x10c30075  beq         $a2, $v1, . + 4 + (0x75 << 2)
    ctx->pc = 0x19BA64u;
    {
        const bool branch_taken_0x19ba64 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x19ba64) {
            ctx->pc = 0x19BC3Cu;
            goto label_19bc3c;
        }
    }
    ctx->pc = 0x19BA6Cu;
    // 0x19ba6c: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x19ba6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x19ba70: 0x10c30064  beq         $a2, $v1, . + 4 + (0x64 << 2)
    ctx->pc = 0x19BA70u;
    {
        const bool branch_taken_0x19ba70 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x19ba70) {
            ctx->pc = 0x19BC04u;
            goto label_19bc04;
        }
    }
    ctx->pc = 0x19BA78u;
    // 0x19ba78: 0x24050030  addiu       $a1, $zero, 0x30
    ctx->pc = 0x19ba78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 48));
    // 0x19ba7c: 0x10c50057  beq         $a2, $a1, . + 4 + (0x57 << 2)
    ctx->pc = 0x19BA7Cu;
    {
        const bool branch_taken_0x19ba7c = (GPR_U64(ctx, 6) == GPR_U64(ctx, 5));
        if (branch_taken_0x19ba7c) {
            ctx->pc = 0x19BBDCu;
            goto label_19bbdc;
        }
    }
    ctx->pc = 0x19BA84u;
    // 0x19ba84: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x19ba84u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x19ba88: 0x10c30038  beq         $a2, $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x19BA88u;
    {
        const bool branch_taken_0x19ba88 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x19ba88) {
            ctx->pc = 0x19BB6Cu;
            goto label_19bb6c;
        }
    }
    ctx->pc = 0x19BA90u;
    // 0x19ba90: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x19ba90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x19ba94: 0x10c30029  beq         $a2, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x19BA94u;
    {
        const bool branch_taken_0x19ba94 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x19ba94) {
            ctx->pc = 0x19BB3Cu;
            goto label_19bb3c;
        }
    }
    ctx->pc = 0x19BA9Cu;
    // 0x19ba9c: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x19ba9cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x19baa0: 0x10c30018  beq         $a2, $v1, . + 4 + (0x18 << 2)
    ctx->pc = 0x19BAA0u;
    {
        const bool branch_taken_0x19baa0 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 3));
        if (branch_taken_0x19baa0) {
            ctx->pc = 0x19BB04u;
            goto label_19bb04;
        }
    }
    ctx->pc = 0x19BAA8u;
    // 0x19baa8: 0x24040020  addiu       $a0, $zero, 0x20
    ctx->pc = 0x19baa8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x19baac: 0x10c4000b  beq         $a2, $a0, . + 4 + (0xB << 2)
    ctx->pc = 0x19BAACu;
    {
        const bool branch_taken_0x19baac = (GPR_U64(ctx, 6) == GPR_U64(ctx, 4));
        if (branch_taken_0x19baac) {
            ctx->pc = 0x19BADCu;
            goto label_19badc;
        }
    }
    ctx->pc = 0x19BAB4u;
    // 0x19bab4: 0x10c00003  beqz        $a2, . + 4 + (0x3 << 2)
    ctx->pc = 0x19BAB4u;
    {
        const bool branch_taken_0x19bab4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bab4) {
            ctx->pc = 0x19BAC4u;
            goto label_19bac4;
        }
    }
    ctx->pc = 0x19BABCu;
    // 0x19babc: 0x100000cf  b           . + 4 + (0xCF << 2)
    ctx->pc = 0x19BABCu;
    {
        const bool branch_taken_0x19babc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BAC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BABCu;
            // 0x19bac0: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19babc) {
            ctx->pc = 0x19BDFCu;
            goto label_19bdfc;
        }
    }
    ctx->pc = 0x19BAC4u;
label_19bac4:
    // 0x19bac4: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x19bac4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x19bac8: 0x9063f35f  lbu         $v1, -0xCA1($v1)
    ctx->pc = 0x19bac8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964063)));
    // 0x19bacc: 0x546000ca  bnel        $v1, $zero, . + 4 + (0xCA << 2)
    ctx->pc = 0x19BACCu;
    {
        const bool branch_taken_0x19bacc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x19bacc) {
            ctx->pc = 0x19BAD0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x19BACCu;
            // 0x19bad0: 0xa2250001  sb          $a1, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
            ctx->pc = 0x19BDF8u;
            goto label_19bdf8;
        }
    }
    ctx->pc = 0x19BAD4u;
    // 0x19bad4: 0x100000c8  b           . + 4 + (0xC8 << 2)
    ctx->pc = 0x19BAD4u;
    {
        const bool branch_taken_0x19bad4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BAD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BAD4u;
            // 0x19bad8: 0xa2240001  sb          $a0, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bad4) {
            ctx->pc = 0x19BDF8u;
            goto label_19bdf8;
        }
    }
    ctx->pc = 0x19BADCu;
label_19badc:
    // 0x19badc: 0xc065ffc  jal         func_197FF0
    ctx->pc = 0x19BADCu;
    SET_GPR_U32(ctx, 31, 0x19BAE4u);
    ctx->pc = 0x197FF0u;
    if (runtime->hasFunction(0x197FF0u)) {
        auto targetFn = runtime->lookupFunction(0x197FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BAE4u; }
        if (ctx->pc != 0x19BAE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197FF0_0x197ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BAE4u; }
        if (ctx->pc != 0x19BAE4u) { return; }
    }
    ctx->pc = 0x19BAE4u;
label_19bae4:
    // 0x19bae4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19bae4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19bae8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19bae8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19baec: 0xa040d570  sb          $zero, -0x2A90($v0)
    ctx->pc = 0x19baecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294956400), (uint8_t)GPR_U32(ctx, 0));
    // 0x19baf0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19baf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19baf4: 0xac60d4d8  sw          $zero, -0x2B28($v1)
    ctx->pc = 0x19baf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956248), GPR_U32(ctx, 0));
    // 0x19baf8: 0x24030021  addiu       $v1, $zero, 0x21
    ctx->pc = 0x19baf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x19bafc: 0xac40d4e0  sw          $zero, -0x2B20($v0)
    ctx->pc = 0x19bafcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956256), GPR_U32(ctx, 0));
    // 0x19bb00: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x19bb00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
label_19bb04:
    // 0x19bb04: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x19bb04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x19bb08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19bb08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bb0c: 0xc066fd4  jal         func_19BF50
    ctx->pc = 0x19BB0Cu;
    SET_GPR_U32(ctx, 31, 0x19BB14u);
    ctx->pc = 0x19BB10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BB0Cu;
            // 0x19bb10: 0x2484ef28  addiu       $a0, $a0, -0x10D8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962984));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BF50u;
    if (runtime->hasFunction(0x19BF50u)) {
        auto targetFn = runtime->lookupFunction(0x19BF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BB14u; }
        if (ctx->pc != 0x19BB14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019BF50_0x19bf50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BB14u; }
        if (ctx->pc != 0x19BB14u) { return; }
    }
    ctx->pc = 0x19BB14u;
label_19bb14:
    // 0x19bb14: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19bb14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19bb18: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x19bb18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x19bb1c: 0xa062d570  sb          $v0, -0x2A90($v1)
    ctx->pc = 0x19bb1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294956400), (uint8_t)GPR_U32(ctx, 2));
    // 0x19bb20: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x19bb20u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x19bb24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19bb24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bb28: 0x148300b3  bne         $a0, $v1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x19BB28u;
    {
        const bool branch_taken_0x19bb28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19bb28) {
            ctx->pc = 0x19BDF8u;
            goto label_19bdf8;
        }
    }
    ctx->pc = 0x19BB30u;
    // 0x19bb30: 0x24030022  addiu       $v1, $zero, 0x22
    ctx->pc = 0x19bb30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 34));
    // 0x19bb34: 0x100000b0  b           . + 4 + (0xB0 << 2)
    ctx->pc = 0x19BB34u;
    {
        const bool branch_taken_0x19bb34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BB38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BB34u;
            // 0x19bb38: 0xa2230001  sb          $v1, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bb34) {
            ctx->pc = 0x19BDF8u;
            goto label_19bdf8;
        }
    }
    ctx->pc = 0x19BB3Cu;
label_19bb3c:
    // 0x19bb3c: 0xc065ffc  jal         func_197FF0
    ctx->pc = 0x19BB3Cu;
    SET_GPR_U32(ctx, 31, 0x19BB44u);
    ctx->pc = 0x197FF0u;
    if (runtime->hasFunction(0x197FF0u)) {
        auto targetFn = runtime->lookupFunction(0x197FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BB44u; }
        if (ctx->pc != 0x19BB44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197FF0_0x197ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BB44u; }
        if (ctx->pc != 0x19BB44u) { return; }
    }
    ctx->pc = 0x19BB44u;
label_19bb44:
    // 0x19bb44: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19bb44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19bb48: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19bb48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19bb4c: 0xa060d568  sb          $zero, -0x2A98($v1)
    ctx->pc = 0x19bb4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294956392), (uint8_t)GPR_U32(ctx, 0));
    // 0x19bb50: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19bb50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19bb54: 0xac40d4e8  sw          $zero, -0x2B18($v0)
    ctx->pc = 0x19bb54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956264), GPR_U32(ctx, 0));
    // 0x19bb58: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19bb58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19bb5c: 0xac60d4f0  sw          $zero, -0x2B10($v1)
    ctx->pc = 0x19bb5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956272), GPR_U32(ctx, 0));
    // 0x19bb60: 0x24030023  addiu       $v1, $zero, 0x23
    ctx->pc = 0x19bb60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 35));
    // 0x19bb64: 0xa040d578  sb          $zero, -0x2A88($v0)
    ctx->pc = 0x19bb64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294956408), (uint8_t)GPR_U32(ctx, 0));
    // 0x19bb68: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x19bb68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
label_19bb6c:
    // 0x19bb6c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x19bb6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x19bb70: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x19bb70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19bb74: 0x2484d530  addiu       $a0, $a0, -0x2AD0
    ctx->pc = 0x19bb74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956336));
    // 0x19bb78: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x19bb78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x19bb7c: 0xc067018  jal         func_19C060
    ctx->pc = 0x19BB7Cu;
    SET_GPR_U32(ctx, 31, 0x19BB84u);
    ctx->pc = 0x19BB80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BB7Cu;
            // 0x19bb80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C060u;
    if (runtime->hasFunction(0x19C060u)) {
        auto targetFn = runtime->lookupFunction(0x19C060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BB84u; }
        if (ctx->pc != 0x19BB84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019C060_0x19c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BB84u; }
        if (ctx->pc != 0x19BB84u) { return; }
    }
    ctx->pc = 0x19BB84u;
label_19bb84:
    // 0x19bb84: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19bb84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19bb88: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x19bb88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x19bb8c: 0xa062d568  sb          $v0, -0x2A98($v1)
    ctx->pc = 0x19bb8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294956392), (uint8_t)GPR_U32(ctx, 2));
    // 0x19bb90: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x19bb90u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x19bb94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19bb94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bb98: 0x14830097  bne         $a0, $v1, . + 4 + (0x97 << 2)
    ctx->pc = 0x19BB98u;
    {
        const bool branch_taken_0x19bb98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19bb98) {
            ctx->pc = 0x19BDF8u;
            goto label_19bdf8;
        }
    }
    ctx->pc = 0x19BBA0u;
    // 0x19bba0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19bba0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19bba4: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x19bba4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x19bba8: 0x8c45d4e0  lw          $a1, -0x2B20($v0)
    ctx->pc = 0x19bba8u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956256)));
    // 0x19bbac: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19bbacu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19bbb0: 0x2484d530  addiu       $a0, $a0, -0x2AD0
    ctx->pc = 0x19bbb0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956336));
    // 0x19bbb4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19bbb4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19bbb8: 0xac65d520  sw          $a1, -0x2AE0($v1)
    ctx->pc = 0x19bbb8u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956320), GPR_U32(ctx, 5));
    // 0x19bbbc: 0xc067cd0  jal         func_19F340
    ctx->pc = 0x19BBBCu;
    SET_GPR_U32(ctx, 31, 0x19BBC4u);
    ctx->pc = 0x19BBC0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BBBCu;
            // 0x19bbc0: 0xac40d4e0  sw          $zero, -0x2B20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294956256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F340u;
    if (runtime->hasFunction(0x19F340u)) {
        auto targetFn = runtime->lookupFunction(0x19F340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BBC4u; }
        if (ctx->pc != 0x19BBC4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F340_0x19f340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BBC4u; }
        if (ctx->pc != 0x19BBC4u) { return; }
    }
    ctx->pc = 0x19BBC4u;
label_19bbc4:
    // 0x19bbc4: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19bbc4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bbc8: 0xc067cc4  jal         func_19F310
    ctx->pc = 0x19BBC8u;
    SET_GPR_U32(ctx, 31, 0x19BBD0u);
    ctx->pc = 0x19BBCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BBC8u;
            // 0x19bbcc: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F310u;
    if (runtime->hasFunction(0x19F310u)) {
        auto targetFn = runtime->lookupFunction(0x19F310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BBD0u; }
        if (ctx->pc != 0x19BBD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F310_0x19f310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BBD0u; }
        if (ctx->pc != 0x19BBD0u) { return; }
    }
    ctx->pc = 0x19BBD0u;
label_19bbd0:
    // 0x19bbd0: 0x24030040  addiu       $v1, $zero, 0x40
    ctx->pc = 0x19bbd0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x19bbd4: 0x10000088  b           . + 4 + (0x88 << 2)
    ctx->pc = 0x19BBD4u;
    {
        const bool branch_taken_0x19bbd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BBD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BBD4u;
            // 0x19bbd8: 0xa2230001  sb          $v1, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bbd4) {
            ctx->pc = 0x19BDF8u;
            goto label_19bdf8;
        }
    }
    ctx->pc = 0x19BBDCu;
label_19bbdc:
    // 0x19bbdc: 0xc065ffc  jal         func_197FF0
    ctx->pc = 0x19BBDCu;
    SET_GPR_U32(ctx, 31, 0x19BBE4u);
    ctx->pc = 0x197FF0u;
    if (runtime->hasFunction(0x197FF0u)) {
        auto targetFn = runtime->lookupFunction(0x197FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BBE4u; }
        if (ctx->pc != 0x19BBE4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197FF0_0x197ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BBE4u; }
        if (ctx->pc != 0x19BBE4u) { return; }
    }
    ctx->pc = 0x19BBE4u;
label_19bbe4:
    // 0x19bbe4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19bbe4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19bbe8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19bbe8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19bbec: 0xa040d570  sb          $zero, -0x2A90($v0)
    ctx->pc = 0x19bbecu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294956400), (uint8_t)GPR_U32(ctx, 0));
    // 0x19bbf0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19bbf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19bbf4: 0xac60d4d8  sw          $zero, -0x2B28($v1)
    ctx->pc = 0x19bbf4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956248), GPR_U32(ctx, 0));
    // 0x19bbf8: 0x24030031  addiu       $v1, $zero, 0x31
    ctx->pc = 0x19bbf8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 49));
    // 0x19bbfc: 0xac40d4e0  sw          $zero, -0x2B20($v0)
    ctx->pc = 0x19bbfcu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956256), GPR_U32(ctx, 0));
    // 0x19bc00: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x19bc00u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
label_19bc04:
    // 0x19bc04: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x19bc04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x19bc08: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x19bc08u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bc0c: 0xc066fd4  jal         func_19BF50
    ctx->pc = 0x19BC0Cu;
    SET_GPR_U32(ctx, 31, 0x19BC14u);
    ctx->pc = 0x19BC10u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BC0Cu;
            // 0x19bc10: 0x2484ef38  addiu       $a0, $a0, -0x10C8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963000));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BF50u;
    if (runtime->hasFunction(0x19BF50u)) {
        auto targetFn = runtime->lookupFunction(0x19BF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BC14u; }
        if (ctx->pc != 0x19BC14u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019BF50_0x19bf50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BC14u; }
        if (ctx->pc != 0x19BC14u) { return; }
    }
    ctx->pc = 0x19BC14u;
label_19bc14:
    // 0x19bc14: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19bc14u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19bc18: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x19bc18u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x19bc1c: 0xa062d570  sb          $v0, -0x2A90($v1)
    ctx->pc = 0x19bc1cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294956400), (uint8_t)GPR_U32(ctx, 2));
    // 0x19bc20: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x19bc20u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x19bc24: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19bc24u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bc28: 0x14830073  bne         $a0, $v1, . + 4 + (0x73 << 2)
    ctx->pc = 0x19BC28u;
    {
        const bool branch_taken_0x19bc28 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19bc28) {
            ctx->pc = 0x19BDF8u;
            goto label_19bdf8;
        }
    }
    ctx->pc = 0x19BC30u;
    // 0x19bc30: 0x24030032  addiu       $v1, $zero, 0x32
    ctx->pc = 0x19bc30u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 50));
    // 0x19bc34: 0x10000070  b           . + 4 + (0x70 << 2)
    ctx->pc = 0x19BC34u;
    {
        const bool branch_taken_0x19bc34 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BC38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BC34u;
            // 0x19bc38: 0xa2230001  sb          $v1, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bc34) {
            ctx->pc = 0x19BDF8u;
            goto label_19bdf8;
        }
    }
    ctx->pc = 0x19BC3Cu;
label_19bc3c:
    // 0x19bc3c: 0xc065ffc  jal         func_197FF0
    ctx->pc = 0x19BC3Cu;
    SET_GPR_U32(ctx, 31, 0x19BC44u);
    ctx->pc = 0x197FF0u;
    if (runtime->hasFunction(0x197FF0u)) {
        auto targetFn = runtime->lookupFunction(0x197FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BC44u; }
        if (ctx->pc != 0x19BC44u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197FF0_0x197ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BC44u; }
        if (ctx->pc != 0x19BC44u) { return; }
    }
    ctx->pc = 0x19BC44u;
label_19bc44:
    // 0x19bc44: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19bc44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19bc48: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19bc48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19bc4c: 0xa060d568  sb          $zero, -0x2A98($v1)
    ctx->pc = 0x19bc4cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294956392), (uint8_t)GPR_U32(ctx, 0));
    // 0x19bc50: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19bc50u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19bc54: 0xac40d4e8  sw          $zero, -0x2B18($v0)
    ctx->pc = 0x19bc54u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956264), GPR_U32(ctx, 0));
    // 0x19bc58: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19bc58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19bc5c: 0xac60d4f0  sw          $zero, -0x2B10($v1)
    ctx->pc = 0x19bc5cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956272), GPR_U32(ctx, 0));
    // 0x19bc60: 0x24030033  addiu       $v1, $zero, 0x33
    ctx->pc = 0x19bc60u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 51));
    // 0x19bc64: 0xa040d578  sb          $zero, -0x2A88($v0)
    ctx->pc = 0x19bc64u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294956408), (uint8_t)GPR_U32(ctx, 0));
    // 0x19bc68: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x19bc68u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
label_19bc6c:
    // 0x19bc6c: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x19bc6cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x19bc70: 0x24050006  addiu       $a1, $zero, 0x6
    ctx->pc = 0x19bc70u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x19bc74: 0x2484d530  addiu       $a0, $a0, -0x2AD0
    ctx->pc = 0x19bc74u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956336));
    // 0x19bc78: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x19bc78u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x19bc7c: 0xc067018  jal         func_19C060
    ctx->pc = 0x19BC7Cu;
    SET_GPR_U32(ctx, 31, 0x19BC84u);
    ctx->pc = 0x19BC80u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BC7Cu;
            // 0x19bc80: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19C060u;
    if (runtime->hasFunction(0x19C060u)) {
        auto targetFn = runtime->lookupFunction(0x19C060u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BC84u; }
        if (ctx->pc != 0x19BC84u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019C060_0x19c060(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BC84u; }
        if (ctx->pc != 0x19BC84u) { return; }
    }
    ctx->pc = 0x19BC84u;
label_19bc84:
    // 0x19bc84: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19bc84u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19bc88: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x19bc88u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x19bc8c: 0xa062d568  sb          $v0, -0x2A98($v1)
    ctx->pc = 0x19bc8cu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294956392), (uint8_t)GPR_U32(ctx, 2));
    // 0x19bc90: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x19bc90u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x19bc94: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x19bc94u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bc98: 0x14830057  bne         $a0, $v1, . + 4 + (0x57 << 2)
    ctx->pc = 0x19BC98u;
    {
        const bool branch_taken_0x19bc98 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x19bc98) {
            ctx->pc = 0x19BDF8u;
            goto label_19bdf8;
        }
    }
    ctx->pc = 0x19BCA0u;
    // 0x19bca0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19bca0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19bca4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19bca4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19bca8: 0x8c44d4e0  lw          $a0, -0x2B20($v0)
    ctx->pc = 0x19bca8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956256)));
    // 0x19bcac: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19bcacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19bcb0: 0xac64d520  sw          $a0, -0x2AE0($v1)
    ctx->pc = 0x19bcb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956320), GPR_U32(ctx, 4));
    // 0x19bcb4: 0xc06936c  jal         func_1A4DB0
    ctx->pc = 0x19BCB4u;
    SET_GPR_U32(ctx, 31, 0x19BCBCu);
    ctx->pc = 0x19BCB8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BCB4u;
            // 0x19bcb8: 0xac40d4e0  sw          $zero, -0x2B20($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294956256), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1A4DB0u;
    if (runtime->hasFunction(0x1A4DB0u)) {
        auto targetFn = runtime->lookupFunction(0x1A4DB0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BCBCu; }
        if (ctx->pc != 0x19BCBCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A4DB0_0x1a4db0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BCBCu; }
        if (ctx->pc != 0x19BCBCu) { return; }
    }
    ctx->pc = 0x19BCBCu;
label_19bcbc:
    // 0x19bcbc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19bcbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19bcc0: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x19bcc0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x19bcc4: 0x2484d530  addiu       $a0, $a0, -0x2AD0
    ctx->pc = 0x19bcc4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294956336));
    // 0x19bcc8: 0xc067cd0  jal         func_19F340
    ctx->pc = 0x19BCC8u;
    SET_GPR_U32(ctx, 31, 0x19BCD0u);
    ctx->pc = 0x19BCCCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BCC8u;
            // 0x19bccc: 0xac40d520  sw          $zero, -0x2AE0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 4294956320), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F340u;
    if (runtime->hasFunction(0x19F340u)) {
        auto targetFn = runtime->lookupFunction(0x19F340u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BCD0u; }
        if (ctx->pc != 0x19BCD0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F340_0x19f340(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BCD0u; }
        if (ctx->pc != 0x19BCD0u) { return; }
    }
    ctx->pc = 0x19BCD0u;
label_19bcd0:
    // 0x19bcd0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x19bcd0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bcd4: 0xc067cc4  jal         func_19F310
    ctx->pc = 0x19BCD4u;
    SET_GPR_U32(ctx, 31, 0x19BCDCu);
    ctx->pc = 0x19BCD8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BCD4u;
            // 0x19bcd8: 0x24050006  addiu       $a1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19F310u;
    if (runtime->hasFunction(0x19F310u)) {
        auto targetFn = runtime->lookupFunction(0x19F310u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BCDCu; }
        if (ctx->pc != 0x19BCDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019F310_0x19f310(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BCDCu; }
        if (ctx->pc != 0x19BCDCu) { return; }
    }
    ctx->pc = 0x19BCDCu;
label_19bcdc:
    // 0x19bcdc: 0x24030050  addiu       $v1, $zero, 0x50
    ctx->pc = 0x19bcdcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x19bce0: 0x10000045  b           . + 4 + (0x45 << 2)
    ctx->pc = 0x19BCE0u;
    {
        const bool branch_taken_0x19bce0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x19BCE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BCE0u;
            // 0x19bce4: 0xa2230001  sb          $v1, 0x1($s1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bce0) {
            ctx->pc = 0x19BDF8u;
            goto label_19bdf8;
        }
    }
    ctx->pc = 0x19BCE8u;
label_19bce8:
    // 0x19bce8: 0xc065ffc  jal         func_197FF0
    ctx->pc = 0x19BCE8u;
    SET_GPR_U32(ctx, 31, 0x19BCF0u);
    ctx->pc = 0x197FF0u;
    if (runtime->hasFunction(0x197FF0u)) {
        auto targetFn = runtime->lookupFunction(0x197FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BCF0u; }
        if (ctx->pc != 0x19BCF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197FF0_0x197ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BCF0u; }
        if (ctx->pc != 0x19BCF0u) { return; }
    }
    ctx->pc = 0x19BCF0u;
label_19bcf0:
    // 0x19bcf0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19bcf0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19bcf4: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19bcf4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19bcf8: 0xa040d570  sb          $zero, -0x2A90($v0)
    ctx->pc = 0x19bcf8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294956400), (uint8_t)GPR_U32(ctx, 0));
    // 0x19bcfc: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19bcfcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19bd00: 0xac60d4d8  sw          $zero, -0x2B28($v1)
    ctx->pc = 0x19bd00u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956248), GPR_U32(ctx, 0));
    // 0x19bd04: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x19bd04u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x19bd08: 0xac40d4e0  sw          $zero, -0x2B20($v0)
    ctx->pc = 0x19bd08u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956256), GPR_U32(ctx, 0));
    // 0x19bd0c: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x19bd0cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
label_19bd10:
    // 0x19bd10: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x19bd10u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x19bd14: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19bd14u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bd18: 0xc066fd4  jal         func_19BF50
    ctx->pc = 0x19BD18u;
    SET_GPR_U32(ctx, 31, 0x19BD20u);
    ctx->pc = 0x19BD1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BD18u;
            // 0x19bd1c: 0x2484ef00  addiu       $a0, $a0, -0x1100 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962944));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BF50u;
    if (runtime->hasFunction(0x19BF50u)) {
        auto targetFn = runtime->lookupFunction(0x19BF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BD20u; }
        if (ctx->pc != 0x19BD20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019BF50_0x19bf50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BD20u; }
        if (ctx->pc != 0x19BD20u) { return; }
    }
    ctx->pc = 0x19BD20u;
label_19bd20:
    // 0x19bd20: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x19bd20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x19bd24: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19bd24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19bd28: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x19bd28u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x19bd2c: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19bd2cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bd30: 0x14870031  bne         $a0, $a3, . + 4 + (0x31 << 2)
    ctx->pc = 0x19BD30u;
    {
        const bool branch_taken_0x19bd30 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        ctx->pc = 0x19BD34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BD30u;
            // 0x19bd34: 0xa062d570  sb          $v0, -0x2A90($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294956400), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bd30) {
            ctx->pc = 0x19BDF8u;
            goto label_19bdf8;
        }
    }
    ctx->pc = 0x19BD38u;
    // 0x19bd38: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19bd38u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19bd3c: 0x3c054080  lui         $a1, 0x4080
    ctx->pc = 0x19bd3cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16512 << 16));
    // 0x19bd40: 0x8c46d4d8  lw          $a2, -0x2B28($v0)
    ctx->pc = 0x19bd40u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956248)));
    // 0x19bd44: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19bd44u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19bd48: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19bd48u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bd4c: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x19bd4cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
    // 0x19bd50: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x19bd50u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x19bd54: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19bd54u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19bd58: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x19bd58u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
    // 0x19bd5c: 0xa047d4f8  sb          $a3, -0x2B08($v0)
    ctx->pc = 0x19bd5cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294956280), (uint8_t)GPR_U32(ctx, 7));
    // 0x19bd60: 0xac60d4d8  sw          $zero, -0x2B28($v1)
    ctx->pc = 0x19bd60u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956248), GPR_U32(ctx, 0));
    // 0x19bd64: 0xc055728  jal         func_155CA0
    ctx->pc = 0x19BD64u;
    SET_GPR_U32(ctx, 31, 0x19BD6Cu);
    ctx->pc = 0x19BD68u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BD64u;
            // 0x19bd68: 0xa2000008  sb          $zero, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BD6Cu; }
        if (ctx->pc != 0x19BD6Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BD6Cu; }
        if (ctx->pc != 0x19BD6Cu) { return; }
    }
    ctx->pc = 0x19BD6Cu;
label_19bd6c:
    // 0x19bd6c: 0x10000022  b           . + 4 + (0x22 << 2)
    ctx->pc = 0x19BD6Cu;
    {
        const bool branch_taken_0x19bd6c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x19bd6c) {
            ctx->pc = 0x19BDF8u;
            goto label_19bdf8;
        }
    }
    ctx->pc = 0x19BD74u;
label_19bd74:
    // 0x19bd74: 0xc065ffc  jal         func_197FF0
    ctx->pc = 0x19BD74u;
    SET_GPR_U32(ctx, 31, 0x19BD7Cu);
    ctx->pc = 0x197FF0u;
    if (runtime->hasFunction(0x197FF0u)) {
        auto targetFn = runtime->lookupFunction(0x197FF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BD7Cu; }
        if (ctx->pc != 0x19BD7Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00197FF0_0x197ff0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BD7Cu; }
        if (ctx->pc != 0x19BD7Cu) { return; }
    }
    ctx->pc = 0x19BD7Cu;
label_19bd7c:
    // 0x19bd7c: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19bd7cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19bd80: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19bd80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19bd84: 0xa040d570  sb          $zero, -0x2A90($v0)
    ctx->pc = 0x19bd84u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294956400), (uint8_t)GPR_U32(ctx, 0));
    // 0x19bd88: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19bd88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19bd8c: 0xac60d4d8  sw          $zero, -0x2B28($v1)
    ctx->pc = 0x19bd8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956248), GPR_U32(ctx, 0));
    // 0x19bd90: 0x24030051  addiu       $v1, $zero, 0x51
    ctx->pc = 0x19bd90u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 81));
    // 0x19bd94: 0xac40d4e0  sw          $zero, -0x2B20($v0)
    ctx->pc = 0x19bd94u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294956256), GPR_U32(ctx, 0));
    // 0x19bd98: 0xa2230001  sb          $v1, 0x1($s1)
    ctx->pc = 0x19bd98u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 1), (uint8_t)GPR_U32(ctx, 3));
label_19bd9c:
    // 0x19bd9c: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x19bd9cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x19bda0: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x19bda0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bda4: 0xc066fd4  jal         func_19BF50
    ctx->pc = 0x19BDA4u;
    SET_GPR_U32(ctx, 31, 0x19BDACu);
    ctx->pc = 0x19BDA8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BDA4u;
            // 0x19bda8: 0x2484eef8  addiu       $a0, $a0, -0x1108 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294962936));
        ctx->in_delay_slot = false;
    ctx->pc = 0x19BF50u;
    if (runtime->hasFunction(0x19BF50u)) {
        auto targetFn = runtime->lookupFunction(0x19BF50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BDACu; }
        if (ctx->pc != 0x19BDACu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0019BF50_0x19bf50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BDACu; }
        if (ctx->pc != 0x19BDACu) { return; }
    }
    ctx->pc = 0x19BDACu;
label_19bdac:
    // 0x19bdac: 0x2263c  dsll32      $a0, $v0, 24
    ctx->pc = 0x19bdacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 2) << (32 + 24));
    // 0x19bdb0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19bdb0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19bdb4: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x19bdb4u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x19bdb8: 0x24070001  addiu       $a3, $zero, 0x1
    ctx->pc = 0x19bdb8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x19bdbc: 0x1487000e  bne         $a0, $a3, . + 4 + (0xE << 2)
    ctx->pc = 0x19BDBCu;
    {
        const bool branch_taken_0x19bdbc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 7));
        ctx->pc = 0x19BDC0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BDBCu;
            // 0x19bdc0: 0xa062d570  sb          $v0, -0x2A90($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294956400), (uint8_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x19bdbc) {
            ctx->pc = 0x19BDF8u;
            goto label_19bdf8;
        }
    }
    ctx->pc = 0x19BDC4u;
    // 0x19bdc4: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19bdc4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19bdc8: 0x3c054080  lui         $a1, 0x4080
    ctx->pc = 0x19bdc8u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)16512 << 16));
    // 0x19bdcc: 0x8c46d4d8  lw          $a2, -0x2B28($v0)
    ctx->pc = 0x19bdccu;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294956248)));
    // 0x19bdd0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x19bdd0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x19bdd4: 0x240202d  daddu       $a0, $s2, $zero
    ctx->pc = 0x19bdd4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x19bdd8: 0xae070004  sw          $a3, 0x4($s0)
    ctx->pc = 0x19bdd8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 7));
    // 0x19bddc: 0xae050000  sw          $a1, 0x0($s0)
    ctx->pc = 0x19bddcu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 5));
    // 0x19bde0: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x19bde0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x19bde4: 0xae06000c  sw          $a2, 0xC($s0)
    ctx->pc = 0x19bde4u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 6));
    // 0x19bde8: 0xa047d4f8  sb          $a3, -0x2B08($v0)
    ctx->pc = 0x19bde8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294956280), (uint8_t)GPR_U32(ctx, 7));
    // 0x19bdec: 0xac60d4d8  sw          $zero, -0x2B28($v1)
    ctx->pc = 0x19bdecu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294956248), GPR_U32(ctx, 0));
    // 0x19bdf0: 0xc055728  jal         func_155CA0
    ctx->pc = 0x19BDF0u;
    SET_GPR_U32(ctx, 31, 0x19BDF8u);
    ctx->pc = 0x19BDF4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x19BDF0u;
            // 0x19bdf4: 0xa2000008  sb          $zero, 0x8($s0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155CA0u;
    if (runtime->hasFunction(0x155CA0u)) {
        auto targetFn = runtime->lookupFunction(0x155CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BDF8u; }
        if (ctx->pc != 0x19BDF8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155CA0_0x155ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x19BDF8u; }
        if (ctx->pc != 0x19BDF8u) { return; }
    }
    ctx->pc = 0x19BDF8u;
label_19bdf8:
    // 0x19bdf8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x19bdf8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_19bdfc:
    // 0x19bdfc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x19bdfcu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x19be00: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x19be00u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x19be04: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x19be04u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x19be08: 0x3e00008  jr          $ra
    ctx->pc = 0x19BE08u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x19BE0Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x19BE08u;
            // 0x19be0c: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x19BE10u;
    ctx->pc = 0x19be10u;
}
