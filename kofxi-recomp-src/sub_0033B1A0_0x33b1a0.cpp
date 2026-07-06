#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0033B1A0
// Address: 0x33b1a0 - 0x33b4e0
void sub_0033B1A0_0x33b1a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0033B1A0_0x33b1a0");
#endif

    switch (ctx->pc) {
        case 0x33b2c0u: goto label_33b2c0;
        case 0x33b350u: goto label_33b350;
        case 0x33b3ccu: goto label_33b3cc;
        case 0x33b464u: goto label_33b464;
        case 0x33b498u: goto label_33b498;
        case 0x33b4c0u: goto label_33b4c0;
        default: break;
    }

    ctx->pc = 0x33b1a0u;

    // 0x33b1a0: 0x27bdffa0  addiu       $sp, $sp, -0x60
    ctx->pc = 0x33b1a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967200));
    // 0x33b1a4: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33b1a4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33b1a8: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x33b1a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x33b1ac: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x33b1acu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x33b1b0: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x33b1b0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x33b1b4: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x33b1b4u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b1b8: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x33b1b8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x33b1bc: 0x14202b  sltu        $a0, $zero, $s4
    ctx->pc = 0x33b1bcu;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 20)) ? 1 : 0);
    // 0x33b1c0: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x33b1c0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x33b1c4: 0x38850001  xori        $a1, $a0, 0x1
    ctx->pc = 0x33b1c4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x33b1c8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x33b1c8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x33b1cc: 0x906495c0  lbu         $a0, -0x6A40($v1)
    ctx->pc = 0x33b1ccu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940096)));
    // 0x33b1d0: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x33b1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x33b1d4: 0x14830087  bne         $a0, $v1, . + 4 + (0x87 << 2)
    ctx->pc = 0x33B1D4u;
    {
        const bool branch_taken_0x33b1d4 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x33b1d4) {
            ctx->pc = 0x33B3F4u;
            goto label_33b3f4;
        }
    }
    ctx->pc = 0x33B1DCu;
    // 0x33b1dc: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33b1dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33b1e0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x33b1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x33b1e4: 0x8c63e8b8  lw          $v1, -0x1748($v1)
    ctx->pc = 0x33b1e4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294961336)));
    // 0x33b1e8: 0x1064002f  beq         $v1, $a0, . + 4 + (0x2F << 2)
    ctx->pc = 0x33B1E8u;
    {
        const bool branch_taken_0x33b1e8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x33b1e8) {
            ctx->pc = 0x33B2A8u;
            goto label_33b2a8;
        }
    }
    ctx->pc = 0x33B1F0u;
    // 0x33b1f0: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x33B1F0u;
    {
        const bool branch_taken_0x33b1f0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b1f0) {
            ctx->pc = 0x33B200u;
            goto label_33b200;
        }
    }
    ctx->pc = 0x33B1F8u;
    // 0x33b1f8: 0x1000007c  b           . + 4 + (0x7C << 2)
    ctx->pc = 0x33B1F8u;
    {
        const bool branch_taken_0x33b1f8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b1f8) {
            ctx->pc = 0x33B3ECu;
            goto label_33b3ec;
        }
    }
    ctx->pc = 0x33B200u;
label_33b200:
    // 0x33b200: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33b200u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33b204: 0x90639738  lbu         $v1, -0x68C8($v1)
    ctx->pc = 0x33b204u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940472)));
    // 0x33b208: 0x546000ae  bnel        $v1, $zero, . + 4 + (0xAE << 2)
    ctx->pc = 0x33B208u;
    {
        const bool branch_taken_0x33b208 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b208) {
            ctx->pc = 0x33B20Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33B208u;
            // 0x33b20c: 0xdfbf0050  ld          $ra, 0x50($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33B4C4u;
            goto label_33b4c4;
        }
    }
    ctx->pc = 0x33B210u;
    // 0x33b210: 0x240404b4  addiu       $a0, $zero, 0x4B4
    ctx->pc = 0x33b210u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1204));
    // 0x33b214: 0x3c07009f  lui         $a3, 0x9F
    ctx->pc = 0x33b214u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)159 << 16));
    // 0x33b218: 0xa41818  mult        $v1, $a1, $a0
    ctx->pc = 0x33b218u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33b21c: 0x24e78b10  addiu       $a3, $a3, -0x74F0
    ctx->pc = 0x33b21cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294937360));
    // 0x33b220: 0xe31821  addu        $v1, $a3, $v1
    ctx->pc = 0x33b220u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x33b224: 0x90630000  lbu         $v1, 0x0($v1)
    ctx->pc = 0x33b224u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x33b228: 0x1460001c  bnez        $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x33B228u;
    {
        const bool branch_taken_0x33b228 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b228) {
            ctx->pc = 0x33B29Cu;
            goto label_33b29c;
        }
    }
    ctx->pc = 0x33B230u;
    // 0x33b230: 0x2844818  mult        $t1, $s4, $a0
    ctx->pc = 0x33b230u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 9, (int32_t)result); }
    // 0x33b234: 0x1418c0  sll         $v1, $s4, 3
    ctx->pc = 0x33b234u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x33b238: 0x741821  addu        $v1, $v1, $s4
    ctx->pc = 0x33b238u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 20)));
    // 0x33b23c: 0x3c06009f  lui         $a2, 0x9F
    ctx->pc = 0x33b23cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)159 << 16));
    // 0x33b240: 0x328c0  sll         $a1, $v1, 3
    ctx->pc = 0x33b240u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x33b244: 0x24c68b12  addiu       $a2, $a2, -0x74EE
    ctx->pc = 0x33b244u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294937362));
    // 0x33b248: 0xb42821  addu        $a1, $a1, $s4
    ctx->pc = 0x33b248u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 20)));
    // 0x33b24c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x33b24cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x33b250: 0x3c04009c  lui         $a0, 0x9C
    ctx->pc = 0x33b250u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)156 << 16));
    // 0x33b254: 0x528c0  sll         $a1, $a1, 3
    ctx->pc = 0x33b254u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x33b258: 0x2484db53  addiu       $a0, $a0, -0x24AD
    ctx->pc = 0x33b258u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294957907));
    // 0x33b25c: 0x2463dc9d  addiu       $v1, $v1, -0x2363
    ctx->pc = 0x33b25cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958237));
    // 0x33b260: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x33b260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33b264: 0x24080001  addiu       $t0, $zero, 0x1
    ctx->pc = 0x33b264u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33b268: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x33b268u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33b26c: 0x652821  addu        $a1, $v1, $a1
    ctx->pc = 0x33b26cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x33b270: 0xe93821  addu        $a3, $a3, $t1
    ctx->pc = 0x33b270u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 9)));
    // 0x33b274: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33b274u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33b278: 0x24638b11  addiu       $v1, $v1, -0x74EF
    ctx->pc = 0x33b278u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294937361));
    // 0x33b27c: 0xa0e80000  sb          $t0, 0x0($a3)
    ctx->pc = 0x33b27cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 8));
    // 0x33b280: 0x42140  sll         $a0, $a0, 5
    ctx->pc = 0x33b280u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 5));
    // 0x33b284: 0xc93021  addu        $a2, $a2, $t1
    ctx->pc = 0x33b284u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 9)));
    // 0x33b288: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x33b288u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x33b28c: 0xa4c00000  sh          $zero, 0x0($a2)
    ctx->pc = 0x33b28cu;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x33b290: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x33b290u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x33b294: 0x691821  addu        $v1, $v1, $t1
    ctx->pc = 0x33b294u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 9)));
    // 0x33b298: 0xa0640000  sb          $a0, 0x0($v1)
    ctx->pc = 0x33b298u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 0), (uint8_t)GPR_U32(ctx, 4));
label_33b29c:
    // 0x33b29c: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33b29cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33b2a0: 0x10000087  b           . + 4 + (0x87 << 2)
    ctx->pc = 0x33B2A0u;
    {
        const bool branch_taken_0x33b2a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x33B2A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33B2A0u;
            // 0x33b2a4: 0xa060e818  sb          $zero, -0x17E8($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x33b2a0) {
            ctx->pc = 0x33B4C0u;
            goto label_33b4c0;
        }
    }
    ctx->pc = 0x33B2A8u;
label_33b2a8:
    // 0x33b2a8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x33b2a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x33b2ac: 0x8c63d590  lw          $v1, -0x2A70($v1)
    ctx->pc = 0x33b2acu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294956432)));
    // 0x33b2b0: 0x14600048  bnez        $v1, . + 4 + (0x48 << 2)
    ctx->pc = 0x33B2B0u;
    {
        const bool branch_taken_0x33b2b0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b2b0) {
            ctx->pc = 0x33B3D4u;
            goto label_33b3d4;
        }
    }
    ctx->pc = 0x33B2B8u;
    // 0x33b2b8: 0xc0cee84  jal         func_33BA10
    ctx->pc = 0x33B2B8u;
    SET_GPR_U32(ctx, 31, 0x33B2C0u);
    ctx->pc = 0x33BA10u;
    if (runtime->hasFunction(0x33BA10u)) {
        auto targetFn = runtime->lookupFunction(0x33BA10u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B2C0u; }
        if (ctx->pc != 0x33B2C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0033BA10_0x33ba10(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B2C0u; }
        if (ctx->pc != 0x33B2C0u) { return; }
    }
    ctx->pc = 0x33B2C0u;
label_33b2c0:
    // 0x33b2c0: 0x1410c0  sll         $v0, $s4, 3
    ctx->pc = 0x33b2c0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 3));
    // 0x33b2c4: 0x3c06009c  lui         $a2, 0x9C
    ctx->pc = 0x33b2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)156 << 16));
    // 0x33b2c8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x33b2c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x33b2cc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x33b2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x33b2d0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x33b2d0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x33b2d4: 0x240504b4  addiu       $a1, $zero, 0x4B4
    ctx->pc = 0x33b2d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1204));
    // 0x33b2d8: 0x541021  addu        $v0, $v0, $s4
    ctx->pc = 0x33b2d8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x33b2dc: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x33b2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x33b2e0: 0x238c0  sll         $a3, $v0, 3
    ctx->pc = 0x33b2e0u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x33b2e4: 0x24c6db53  addiu       $a2, $a2, -0x24AD
    ctx->pc = 0x33b2e4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294957907));
    // 0x33b2e8: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x33b2e8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x33b2ec: 0x2463dc9d  addiu       $v1, $v1, -0x2363
    ctx->pc = 0x33b2ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294958237));
    // 0x33b2f0: 0x90c60000  lbu         $a2, 0x0($a2)
    ctx->pc = 0x33b2f0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33b2f4: 0x3402e612  ori         $v0, $zero, 0xE612
    ctx->pc = 0x33b2f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)58898);
    // 0x33b2f8: 0x673821  addu        $a3, $v1, $a3
    ctx->pc = 0x33b2f8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 7)));
    // 0x33b2fc: 0x24848b11  addiu       $a0, $a0, -0x74EF
    ctx->pc = 0x33b2fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294937361));
    // 0x33b300: 0x72821818  mult1       $v1, $s4, $v0
    ctx->pc = 0x33b300u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 2); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x33b304: 0x2859018  mult        $s2, $s4, $a1
    ctx->pc = 0x33b304u;
    { int64_t result = (int64_t)GPR_S32(ctx, 20) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 18, (int32_t)result); }
    // 0x33b308: 0x3c02009d  lui         $v0, 0x9D
    ctx->pc = 0x33b308u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)157 << 16));
    // 0x33b30c: 0x63140  sll         $a2, $a2, 5
    ctx->pc = 0x33b30cu;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 5));
    // 0x33b310: 0xc73021  addu        $a2, $a2, $a3
    ctx->pc = 0x33b310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 7)));
    // 0x33b314: 0x2442b290  addiu       $v0, $v0, -0x4D70
    ctx->pc = 0x33b314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294947472));
    // 0x33b318: 0x90d10000  lbu         $s1, 0x0($a2)
    ctx->pc = 0x33b318u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x33b31c: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x33b31cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x33b320: 0x923821  addu        $a3, $a0, $s2
    ctx->pc = 0x33b320u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 18)));
    // 0x33b324: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33b324u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33b328: 0x240304b2  addiu       $v1, $zero, 0x4B2
    ctx->pc = 0x33b328u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1202));
    // 0x33b32c: 0x24428b10  addiu       $v0, $v0, -0x74F0
    ctx->pc = 0x33b32cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937360));
    // 0x33b330: 0x240604b0  addiu       $a2, $zero, 0x4B0
    ctx->pc = 0x33b330u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 1200));
    // 0x33b334: 0x528021  addu        $s0, $v0, $s2
    ctx->pc = 0x33b334u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x33b338: 0xa0f10000  sb          $s1, 0x0($a3)
    ctx->pc = 0x33b338u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 17));
    // 0x33b33c: 0x2231018  mult        $v0, $s1, $v1
    ctx->pc = 0x33b33cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 2, (int32_t)result); }
    // 0x33b340: 0x26040004  addiu       $a0, $s0, 0x4
    ctx->pc = 0x33b340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 4));
    // 0x33b344: 0x459821  addu        $s3, $v0, $a1
    ctx->pc = 0x33b344u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x33b348: 0xc049c48  jal         func_127120
    ctx->pc = 0x33B348u;
    SET_GPR_U32(ctx, 31, 0x33B350u);
    ctx->pc = 0x33B34Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B348u;
            // 0x33b34c: 0x26650002  addiu       $a1, $s3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 19), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    if (runtime->hasFunction(0x127120u)) {
        auto targetFn = runtime->lookupFunction(0x127120u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B350u; }
        if (ctx->pc != 0x33B350u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00127120_0x127120(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B350u; }
        if (ctx->pc != 0x33B350u) { return; }
    }
    ctx->pc = 0x33B350u;
label_33b350:
    // 0x33b350: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33b350u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33b354: 0x96650000  lhu         $a1, 0x0($s3)
    ctx->pc = 0x33b354u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 19), 0)));
    // 0x33b358: 0x24428b12  addiu       $v0, $v0, -0x74EE
    ctx->pc = 0x33b358u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937362));
    // 0x33b35c: 0x522021  addu        $a0, $v0, $s2
    ctx->pc = 0x33b35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x33b360: 0x141040  sll         $v0, $s4, 1
    ctx->pc = 0x33b360u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 20), 1));
    // 0x33b364: 0xa4850000  sh          $a1, 0x0($a0)
    ctx->pc = 0x33b364u;
    WRITE16(ADD32(GPR_U32(ctx, 4), 0), (uint16_t)GPR_U32(ctx, 5));
    // 0x33b368: 0x541821  addu        $v1, $v0, $s4
    ctx->pc = 0x33b368u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 20)));
    // 0x33b36c: 0xa2000000  sb          $zero, 0x0($s0)
    ctx->pc = 0x33b36cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x33b370: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33b370u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33b374: 0x32080  sll         $a0, $v1, 2
    ctx->pc = 0x33b374u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x33b378: 0x24428af0  addiu       $v0, $v0, -0x7510
    ctx->pc = 0x33b378u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937328));
    // 0x33b37c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x33b37cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x33b380: 0xa0400000  sb          $zero, 0x0($v0)
    ctx->pc = 0x33b380u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 0), (uint8_t)GPR_U32(ctx, 0));
    // 0x33b384: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33b384u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33b388: 0x24428af2  addiu       $v0, $v0, -0x750E
    ctx->pc = 0x33b388u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937330));
    // 0x33b38c: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x33b38cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x33b390: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33b390u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33b394: 0xa4600000  sh          $zero, 0x0($v1)
    ctx->pc = 0x33b394u;
    WRITE16(ADD32(GPR_U32(ctx, 3), 0), (uint16_t)GPR_U32(ctx, 0));
    // 0x33b398: 0x24428af4  addiu       $v0, $v0, -0x750C
    ctx->pc = 0x33b398u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294937332));
    // 0x33b39c: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33b39cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33b3a0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x33b3a0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x33b3a4: 0xac530000  sw          $s3, 0x0($v0)
    ctx->pc = 0x33b3a4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 19));
    // 0x33b3a8: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x33b3a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x33b3ac: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33b3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33b3b0: 0xa06495c0  sb          $a0, -0x6A40($v1)
    ctx->pc = 0x33b3b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294940096), (uint8_t)GPR_U32(ctx, 4));
    // 0x33b3b4: 0xac40e8c8  sw          $zero, -0x1738($v0)
    ctx->pc = 0x33b3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961352), GPR_U32(ctx, 0));
    // 0x33b3b8: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33b3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33b3bc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33b3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33b3c0: 0xac60e8b0  sw          $zero, -0x1750($v1)
    ctx->pc = 0x33b3c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294961328), GPR_U32(ctx, 0));
    // 0x33b3c4: 0xc0c1534  jal         func_3054D0
    ctx->pc = 0x33B3C4u;
    SET_GPR_U32(ctx, 31, 0x33B3CCu);
    ctx->pc = 0x33B3C8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B3C4u;
            // 0x33b3c8: 0xa051e878  sb          $s1, -0x1788($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294961272), (uint8_t)GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3054D0u;
    if (runtime->hasFunction(0x3054D0u)) {
        auto targetFn = runtime->lookupFunction(0x3054D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B3CCu; }
        if (ctx->pc != 0x33B3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003054D0_0x3054d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B3CCu; }
        if (ctx->pc != 0x33B3CCu) { return; }
    }
    ctx->pc = 0x33B3CCu;
label_33b3cc:
    // 0x33b3cc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x33B3CCu;
    {
        const bool branch_taken_0x33b3cc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b3cc) {
            ctx->pc = 0x33B3ECu;
            goto label_33b3ec;
        }
    }
    ctx->pc = 0x33B3D4u;
label_33b3d4:
    // 0x33b3d4: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33b3d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33b3d8: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33b3d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33b3dc: 0xa060e818  sb          $zero, -0x17E8($v1)
    ctx->pc = 0x33b3dcu;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961176), (uint8_t)GPR_U32(ctx, 0));
    // 0x33b3e0: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x33b3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x33b3e4: 0xac80e8f0  sw          $zero, -0x1710($a0)
    ctx->pc = 0x33b3e4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294961392), GPR_U32(ctx, 0));
    // 0x33b3e8: 0xa060e888  sb          $zero, -0x1778($v1)
    ctx->pc = 0x33b3e8u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294961288), (uint8_t)GPR_U32(ctx, 0));
label_33b3ec:
    // 0x33b3ec: 0x10000034  b           . + 4 + (0x34 << 2)
    ctx->pc = 0x33B3ECu;
    {
        const bool branch_taken_0x33b3ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b3ec) {
            ctx->pc = 0x33B4C0u;
            goto label_33b4c0;
        }
    }
    ctx->pc = 0x33B3F4u;
label_33b3f4:
    // 0x33b3f4: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x33b3f4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x33b3f8: 0x24040002  addiu       $a0, $zero, 0x2
    ctx->pc = 0x33b3f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x33b3fc: 0x9065b24a  lbu         $a1, -0x4DB6($v1)
    ctx->pc = 0x33b3fcu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947402)));
    // 0x33b400: 0x10a40027  beq         $a1, $a0, . + 4 + (0x27 << 2)
    ctx->pc = 0x33B400u;
    {
        const bool branch_taken_0x33b400 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x33b400) {
            ctx->pc = 0x33B4A0u;
            goto label_33b4a0;
        }
    }
    ctx->pc = 0x33B408u;
    // 0x33b408: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33b408u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33b40c: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x33B40Cu;
    {
        const bool branch_taken_0x33b40c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x33b40c) {
            ctx->pc = 0x33B424u;
            goto label_33b424;
        }
    }
    ctx->pc = 0x33B414u;
    // 0x33b414: 0x10a0002a  beqz        $a1, . + 4 + (0x2A << 2)
    ctx->pc = 0x33B414u;
    {
        const bool branch_taken_0x33b414 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b414) {
            ctx->pc = 0x33B4C0u;
            goto label_33b4c0;
        }
    }
    ctx->pc = 0x33B41Cu;
    // 0x33b41c: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x33B41Cu;
    {
        const bool branch_taken_0x33b41c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b41c) {
            ctx->pc = 0x33B4C0u;
            goto label_33b4c0;
        }
    }
    ctx->pc = 0x33B424u;
label_33b424:
    // 0x33b424: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x33b424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x33b428: 0x90639738  lbu         $v1, -0x68C8($v1)
    ctx->pc = 0x33b428u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940472)));
    // 0x33b42c: 0x14600024  bnez        $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x33B42Cu;
    {
        const bool branch_taken_0x33b42c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x33b42c) {
            ctx->pc = 0x33B4C0u;
            goto label_33b4c0;
        }
    }
    ctx->pc = 0x33B434u;
    // 0x33b434: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x33b434u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x33b438: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33b438u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33b43c: 0x3c040033  lui         $a0, 0x33
    ctx->pc = 0x33b43cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)51 << 16));
    // 0x33b440: 0x3c050040  lui         $a1, 0x40
    ctx->pc = 0x33b440u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)64 << 16));
    // 0x33b444: 0xac60da48  sw          $zero, -0x25B8($v1)
    ctx->pc = 0x33b444u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 4294957640), GPR_U32(ctx, 0));
    // 0x33b448: 0x2484fe70  addiu       $a0, $a0, -0x190
    ctx->pc = 0x33b448u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294966896));
    // 0x33b44c: 0xac40e7e8  sw          $zero, -0x1818($v0)
    ctx->pc = 0x33b44cu;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294961128), GPR_U32(ctx, 0));
    // 0x33b450: 0x24a54b90  addiu       $a1, $a1, 0x4B90
    ctx->pc = 0x33b450u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 19344));
    // 0x33b454: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x33b454u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b458: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x33b458u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x33b45c: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x33B45Cu;
    SET_GPR_U32(ctx, 31, 0x33B464u);
    ctx->pc = 0x33B460u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B45Cu;
            // 0x33b460: 0x402d  daddu       $t0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (runtime->hasFunction(0x155B50u)) {
        auto targetFn = runtime->lookupFunction(0x155B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B464u; }
        if (ctx->pc != 0x33B464u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00155B50_0x155b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B464u; }
        if (ctx->pc != 0x33B464u) { return; }
    }
    ctx->pc = 0x33B464u;
label_33b464:
    // 0x33b464: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x33b464u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x33b468: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33b468u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33b46c: 0xa043e818  sb          $v1, -0x17E8($v0)
    ctx->pc = 0x33b46cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961176), (uint8_t)GPR_U32(ctx, 3));
    // 0x33b470: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x33b470u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x33b474: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x33b474u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x33b478: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x33b478u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x33b47c: 0xa040e810  sb          $zero, -0x17F0($v0)
    ctx->pc = 0x33b47cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294961168), (uint8_t)GPR_U32(ctx, 0));
    // 0x33b480: 0x2484e868  addiu       $a0, $a0, -0x1798
    ctx->pc = 0x33b480u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294961256));
    // 0x33b484: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33b484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33b488: 0x240500ff  addiu       $a1, $zero, 0xFF
    ctx->pc = 0x33b488u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x33b48c: 0xa0439738  sb          $v1, -0x68C8($v0)
    ctx->pc = 0x33b48cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940472), (uint8_t)GPR_U32(ctx, 3));
    // 0x33b490: 0xc049cb6  jal         func_1272D8
    ctx->pc = 0x33B490u;
    SET_GPR_U32(ctx, 31, 0x33B498u);
    ctx->pc = 0x33B494u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B490u;
            // 0x33b494: 0x2406000b  addiu       $a2, $zero, 0xB (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 11));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1272D8u;
    if (runtime->hasFunction(0x1272D8u)) {
        auto targetFn = runtime->lookupFunction(0x1272D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B498u; }
        if (ctx->pc != 0x33B498u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001272D8_0x1272d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B498u; }
        if (ctx->pc != 0x33B498u) { return; }
    }
    ctx->pc = 0x33B498u;
label_33b498:
    // 0x33b498: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x33B498u;
    {
        const bool branch_taken_0x33b498 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b498) {
            ctx->pc = 0x33B4C0u;
            goto label_33b4c0;
        }
    }
    ctx->pc = 0x33B4A0u;
label_33b4a0:
    // 0x33b4a0: 0x52800004  beql        $s4, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x33B4A0u;
    {
        const bool branch_taken_0x33b4a0 = (GPR_U64(ctx, 20) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b4a0) {
            ctx->pc = 0x33B4A4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x33B4A0u;
            // 0x33b4a4: 0x24040001  addiu       $a0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x33B4B4u;
            goto label_33b4b4;
        }
    }
    ctx->pc = 0x33B4A8u;
    // 0x33b4a8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x33B4A8u;
    {
        const bool branch_taken_0x33b4a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x33b4a8) {
            ctx->pc = 0x33B4B4u;
            goto label_33b4b4;
        }
    }
    ctx->pc = 0x33B4B0u;
    // 0x33b4b0: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x33b4b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_33b4b4:
    // 0x33b4b4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x33b4b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x33b4b8: 0xc0c1534  jal         func_3054D0
    ctx->pc = 0x33B4B8u;
    SET_GPR_U32(ctx, 31, 0x33B4C0u);
    ctx->pc = 0x33B4BCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x33B4B8u;
            // 0x33b4bc: 0xa04495c0  sb          $a0, -0x6A40($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294940096), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
    ctx->pc = 0x3054D0u;
    if (runtime->hasFunction(0x3054D0u)) {
        auto targetFn = runtime->lookupFunction(0x3054D0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B4C0u; }
        if (ctx->pc != 0x33B4C0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_003054D0_0x3054d0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x33B4C0u; }
        if (ctx->pc != 0x33B4C0u) { return; }
    }
    ctx->pc = 0x33B4C0u;
label_33b4c0:
    // 0x33b4c0: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x33b4c0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
label_33b4c4:
    // 0x33b4c4: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x33b4c4u;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x33b4c8: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x33b4c8u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x33b4cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x33b4ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x33b4d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x33b4d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x33b4d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x33b4d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x33b4d8: 0x3e00008  jr          $ra
    ctx->pc = 0x33B4D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x33B4DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x33B4D8u;
            // 0x33b4dc: 0x27bd0060  addiu       $sp, $sp, 0x60 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x33B4E0u;
    ctx->pc = 0x33b4e0u;
}
