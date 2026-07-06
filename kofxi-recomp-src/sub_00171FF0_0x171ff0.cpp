#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00171FF0
// Address: 0x171ff0 - 0x1721e0
void sub_00171FF0_0x171ff0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00171FF0_0x171ff0");
#endif

    switch (ctx->pc) {
        case 0x17201cu: goto label_17201c;
        case 0x1720b4u: goto label_1720b4;
        default: break;
    }

    ctx->pc = 0x171ff0u;

    // 0x171ff0: 0x27bdff90  addiu       $sp, $sp, -0x70
    ctx->pc = 0x171ff0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967184));
    // 0x171ff4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x171ff4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x171ff8: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x171ff8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x171ffc: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x171ffcu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x172000: 0x80982d  daddu       $s3, $a0, $zero
    ctx->pc = 0x172000u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172004: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x172004u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x172008: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x172008u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x17200c: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x17200cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172010: 0x97b2005a  lhu         $s2, 0x5A($sp)
    ctx->pc = 0x172010u;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 90)));
    // 0x172014: 0xc05c5f0  jal         func_1717C0
    ctx->pc = 0x172014u;
    SET_GPR_U32(ctx, 31, 0x17201Cu);
    ctx->pc = 0x172018u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x172014u;
            // 0x172018: 0xc0802d  daddu       $s0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1717C0u;
    if (runtime->hasFunction(0x1717C0u)) {
        auto targetFn = runtime->lookupFunction(0x1717C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17201Cu; }
        if (ctx->pc != 0x17201Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001717C0_0x1717c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x17201Cu; }
        if (ctx->pc != 0x17201Cu) { return; }
    }
    ctx->pc = 0x17201Cu;
label_17201c:
    // 0x17201c: 0x131940  sll         $v1, $s3, 5
    ctx->pc = 0x17201cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 19), 5));
    // 0x172020: 0x3c02009b  lui         $v0, 0x9B
    ctx->pc = 0x172020u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)155 << 16));
    // 0x172024: 0x732023  subu        $a0, $v1, $s3
    ctx->pc = 0x172024u;
    SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 19)));
    // 0x172028: 0x244248c0  addiu       $v0, $v0, 0x48C0
    ctx->pc = 0x172028u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 18624));
    // 0x17202c: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x17202cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x172030: 0x831821  addu        $v1, $a0, $v1
    ctx->pc = 0x172030u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x172034: 0x31840  sll         $v1, $v1, 1
    ctx->pc = 0x172034u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 1));
    // 0x172038: 0x431821  addu        $v1, $v0, $v1
    ctx->pc = 0x172038u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x17203c: 0x9464011c  lhu         $a0, 0x11C($v1)
    ctx->pc = 0x17203cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 284)));
    // 0x172040: 0x901023  subu        $v0, $a0, $s0
    ctx->pc = 0x172040u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 16)));
    // 0x172044: 0x24450040  addiu       $a1, $v0, 0x40
    ctx->pc = 0x172044u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 64));
    // 0x172048: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x172048u;
    {
        const bool branch_taken_0x172048 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x17204Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172048u;
            // 0x17204c: 0x30a2003f  andi        $v0, $a1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x172048) {
            ctx->pc = 0x17205Cu;
            goto label_17205c;
        }
    }
    ctx->pc = 0x172050u;
    // 0x172050: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x172050u;
    {
        const bool branch_taken_0x172050 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x172050) {
            ctx->pc = 0x172054u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x172050u;
            // 0x172054: 0x3046ffff  andi        $a2, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x172060u;
            goto label_172060;
        }
    }
    ctx->pc = 0x172058u;
    // 0x172058: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x172058u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
label_17205c:
    // 0x17205c: 0x3046ffff  andi        $a2, $v0, 0xFFFF
    ctx->pc = 0x17205cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_172060:
    // 0x172060: 0x24c5003f  addiu       $a1, $a2, 0x3F
    ctx->pc = 0x172060u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 6), 63));
    // 0x172064: 0x4a10004  bgez        $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x172064u;
    {
        const bool branch_taken_0x172064 = (GPR_S32(ctx, 5) >= 0);
        ctx->pc = 0x172068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172064u;
            // 0x172068: 0x30a2003f  andi        $v0, $a1, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x172064) {
            ctx->pc = 0x172078u;
            goto label_172078;
        }
    }
    ctx->pc = 0x17206Cu;
    // 0x17206c: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x17206Cu;
    {
        const bool branch_taken_0x17206c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x17206c) {
            ctx->pc = 0x172070u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17206Cu;
            // 0x172070: 0x3045ffff  andi        $a1, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x17207Cu;
            goto label_17207c;
        }
    }
    ctx->pc = 0x172074u;
    // 0x172074: 0x2442ffc0  addiu       $v0, $v0, -0x40
    ctx->pc = 0x172074u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967232));
label_172078:
    // 0x172078: 0x3045ffff  andi        $a1, $v0, 0xFFFF
    ctx->pc = 0x172078u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
label_17207c:
    // 0x17207c: 0x402d  daddu       $t0, $zero, $zero
    ctx->pc = 0x17207cu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172080: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x172080u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x172084: 0x52880  sll         $a1, $a1, 2
    ctx->pc = 0x172084u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
    // 0x172088: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x172088u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x17208c: 0xa33021  addu        $a2, $a1, $v1
    ctx->pc = 0x17208cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 3)));
    // 0x172090: 0x432821  addu        $a1, $v0, $v1
    ctx->pc = 0x172090u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x172094: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x172094u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x172098: 0x94c20120  lhu         $v0, 0x120($a2)
    ctx->pc = 0x172098u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 288)));
    // 0x17209c: 0x94a50120  lhu         $a1, 0x120($a1)
    ctx->pc = 0x17209cu;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 5), 288)));
    // 0x1720a0: 0x453826  xor         $a3, $v0, $a1
    ctx->pc = 0x1720a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 5));
    // 0x1720a4: 0xa73024  and         $a2, $a1, $a3
    ctx->pc = 0x1720a4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 5) & GPR_U64(ctx, 7));
    // 0x1720a8: 0x473824  and         $a3, $v0, $a3
    ctx->pc = 0x1720a8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) & GPR_U64(ctx, 7));
    // 0x1720ac: 0x30c6ffff  andi        $a2, $a2, 0xFFFF
    ctx->pc = 0x1720acu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x1720b0: 0x30e7ffff  andi        $a3, $a3, 0xFFFF
    ctx->pc = 0x1720b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)65535);
label_1720b4:
    // 0x1720b4: 0x2095021  addu        $t2, $s0, $t1
    ctx->pc = 0x1720b4u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 9)));
    // 0x1720b8: 0x8a5023  subu        $t2, $a0, $t2
    ctx->pc = 0x1720b8u;
    SET_GPR_S32(ctx, 10, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 10)));
    // 0x1720bc: 0x254b0040  addiu       $t3, $t2, 0x40
    ctx->pc = 0x1720bcu;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 10), 64));
    // 0x1720c0: 0x5610004  bgez        $t3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1720C0u;
    {
        const bool branch_taken_0x1720c0 = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x1720C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1720C0u;
            // 0x1720c4: 0x316a003f  andi        $t2, $t3, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1720c0) {
            ctx->pc = 0x1720D4u;
            goto label_1720d4;
        }
    }
    ctx->pc = 0x1720C8u;
    // 0x1720c8: 0x51400003  beql        $t2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1720C8u;
    {
        const bool branch_taken_0x1720c8 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x1720c8) {
            ctx->pc = 0x1720CCu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1720C8u;
            // 0x1720cc: 0x314dffff  andi        $t5, $t2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 13, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1720D8u;
            goto label_1720d8;
        }
    }
    ctx->pc = 0x1720D0u;
    // 0x1720d0: 0x254affc0  addiu       $t2, $t2, -0x40
    ctx->pc = 0x1720d0u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967232));
label_1720d4:
    // 0x1720d4: 0x314dffff  andi        $t5, $t2, 0xFFFF
    ctx->pc = 0x1720d4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
label_1720d8:
    // 0x1720d8: 0x25ab003f  addiu       $t3, $t5, 0x3F
    ctx->pc = 0x1720d8u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 13), 63));
    // 0x1720dc: 0x5610004  bgez        $t3, . + 4 + (0x4 << 2)
    ctx->pc = 0x1720DCu;
    {
        const bool branch_taken_0x1720dc = (GPR_S32(ctx, 11) >= 0);
        ctx->pc = 0x1720E0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1720DCu;
            // 0x1720e0: 0x316a003f  andi        $t2, $t3, 0x3F (Delay Slot)
        SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)63);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1720dc) {
            ctx->pc = 0x1720F0u;
            goto label_1720f0;
        }
    }
    ctx->pc = 0x1720E4u;
    // 0x1720e4: 0x51400003  beql        $t2, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1720E4u;
    {
        const bool branch_taken_0x1720e4 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x1720e4) {
            ctx->pc = 0x1720E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1720E4u;
            // 0x1720e8: 0x314cffff  andi        $t4, $t2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 12, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
            ctx->pc = 0x1720F4u;
            goto label_1720f4;
        }
    }
    ctx->pc = 0x1720ECu;
    // 0x1720ec: 0x254affc0  addiu       $t2, $t2, -0x40
    ctx->pc = 0x1720ecu;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 4294967232));
label_1720f0:
    // 0x1720f0: 0x314cffff  andi        $t4, $t2, 0xFFFF
    ctx->pc = 0x1720f0u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
label_1720f4:
    // 0x1720f4: 0x31aaffff  andi        $t2, $t5, 0xFFFF
    ctx->pc = 0x1720f4u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 13) & (uint64_t)(uint16_t)65535);
    // 0x1720f8: 0xa5880  sll         $t3, $t2, 2
    ctx->pc = 0x1720f8u;
    SET_GPR_S32(ctx, 11, (int32_t)SLL32(GPR_U32(ctx, 10), 2));
    // 0x1720fc: 0xc5080  sll         $t2, $t4, 2
    ctx->pc = 0x1720fcu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 12), 2));
    // 0x172100: 0x6b5821  addu        $t3, $v1, $t3
    ctx->pc = 0x172100u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 11)));
    // 0x172104: 0x6a5021  addu        $t2, $v1, $t2
    ctx->pc = 0x172104u;
    SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 10)));
    // 0x172108: 0x956b0120  lhu         $t3, 0x120($t3)
    ctx->pc = 0x172108u;
    SET_GPR_U32(ctx, 11, (uint16_t)READ16(ADD32(GPR_U32(ctx, 11), 288)));
    // 0x17210c: 0x954a0120  lhu         $t2, 0x120($t2)
    ctx->pc = 0x17210cu;
    SET_GPR_U32(ctx, 10, (uint16_t)READ16(ADD32(GPR_U32(ctx, 10), 288)));
    // 0x172110: 0x14b5026  xor         $t2, $t2, $t3
    ctx->pc = 0x172110u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) ^ GPR_U64(ctx, 11));
    // 0x172114: 0x16a5024  and         $t2, $t3, $t2
    ctx->pc = 0x172114u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & GPR_U64(ctx, 10));
    // 0x172118: 0x15200005  bnez        $t1, . + 4 + (0x5 << 2)
    ctx->pc = 0x172118u;
    {
        const bool branch_taken_0x172118 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 0));
        ctx->pc = 0x17211Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172118u;
            // 0x17211c: 0x314bffff  andi        $t3, $t2, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 11, GPR_U64(ctx, 10) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x172118) {
            ctx->pc = 0x172130u;
            goto label_172130;
        }
    }
    ctx->pc = 0x172120u;
    // 0x172120: 0x316affff  andi        $t2, $t3, 0xFFFF
    ctx->pc = 0x172120u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 11) & (uint64_t)(uint16_t)65535);
    // 0x172124: 0x11400008  beqz        $t2, . + 4 + (0x8 << 2)
    ctx->pc = 0x172124u;
    {
        const bool branch_taken_0x172124 = (GPR_U64(ctx, 10) == GPR_U64(ctx, 0));
        if (branch_taken_0x172124) {
            ctx->pc = 0x172148u;
            goto label_172148;
        }
    }
    ctx->pc = 0x17212Cu;
    // 0x17212c: 0x0  nop
    ctx->pc = 0x17212cu;
    // NOP
label_172130:
    // 0x172130: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x172130u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x172134: 0x10b4025  or          $t0, $t0, $t3
    ctx->pc = 0x172134u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) | GPR_U64(ctx, 11));
    // 0x172138: 0x292a0002  slti        $t2, $t1, 0x2
    ctx->pc = 0x172138u;
    SET_GPR_U64(ctx, 10, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x17213c: 0x1540ffdd  bnez        $t2, . + 4 + (-0x23 << 2)
    ctx->pc = 0x17213Cu;
    {
        const bool branch_taken_0x17213c = (GPR_U64(ctx, 10) != GPR_U64(ctx, 0));
        ctx->pc = 0x172140u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x17213Cu;
            // 0x172140: 0x3108ffff  andi        $t0, $t0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x17213c) {
            ctx->pc = 0x1720B4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1720b4;
        }
    }
    ctx->pc = 0x172144u;
    // 0x172144: 0x0  nop
    ctx->pc = 0x172144u;
    // NOP
label_172148:
    // 0x172148: 0x2e210009  sltiu       $at, $s1, 0x9
    ctx->pc = 0x172148u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 17) < (uint64_t)(int64_t)(int32_t)9) ? 1 : 0);
    // 0x17214c: 0x5020001b  beql        $at, $zero, . + 4 + (0x1B << 2)
    ctx->pc = 0x17214Cu;
    {
        const bool branch_taken_0x17214c = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x17214c) {
            ctx->pc = 0x172150u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x17214Cu;
            // 0x172150: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1721BCu;
            goto label_1721bc;
        }
    }
    ctx->pc = 0x172154u;
    // 0x172154: 0x3c09003e  lui         $t1, 0x3E
    ctx->pc = 0x172154u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)62 << 16));
    // 0x172158: 0x112080  sll         $a0, $s1, 2
    ctx->pc = 0x172158u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 17), 2));
    // 0x17215c: 0x2529d5b0  addiu       $t1, $t1, -0x2A50
    ctx->pc = 0x17215cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294956464));
    // 0x172160: 0x892021  addu        $a0, $a0, $t1
    ctx->pc = 0x172160u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x172164: 0x8c840000  lw          $a0, 0x0($a0)
    ctx->pc = 0x172164u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x172168: 0x800008  jr          $a0
    ctx->pc = 0x172168u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 4);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x172170u: goto label_172170;
            case 0x172178u: goto label_172178;
            case 0x172180u: goto label_172180;
            case 0x172188u: goto label_172188;
            case 0x172190u: goto label_172190;
            case 0x172198u: goto label_172198;
            case 0x1721A0u: goto label_1721a0;
            case 0x1721A8u: goto label_1721a8;
            case 0x1721B0u: goto label_1721b0;
            default: break;
        }
        return;
    }
    ctx->pc = 0x172170u;
label_172170:
    // 0x172170: 0x10000013  b           . + 4 + (0x13 << 2)
    ctx->pc = 0x172170u;
    {
        const bool branch_taken_0x172170 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172174u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172170u;
            // 0x172174: 0xdfbf0040  ld          $ra, 0x40($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172170) {
            ctx->pc = 0x1721C0u;
            goto label_1721c0;
        }
    }
    ctx->pc = 0x172178u;
label_172178:
    // 0x172178: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x172178u;
    {
        const bool branch_taken_0x172178 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17217Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172178u;
            // 0x17217c: 0xa0102d  daddu       $v0, $a1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172178) {
            ctx->pc = 0x1721BCu;
            goto label_1721bc;
        }
    }
    ctx->pc = 0x172180u;
label_172180:
    // 0x172180: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x172180u;
    {
        const bool branch_taken_0x172180 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172184u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172180u;
            // 0x172184: 0xc0102d  daddu       $v0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172180) {
            ctx->pc = 0x1721BCu;
            goto label_1721bc;
        }
    }
    ctx->pc = 0x172188u;
label_172188:
    // 0x172188: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x172188u;
    {
        const bool branch_taken_0x172188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17218Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172188u;
            // 0x17218c: 0xe0102d  daddu       $v0, $a3, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172188) {
            ctx->pc = 0x1721BCu;
            goto label_1721bc;
        }
    }
    ctx->pc = 0x172190u;
label_172190:
    // 0x172190: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x172190u;
    {
        const bool branch_taken_0x172190 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x172194u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172190u;
            // 0x172194: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172190) {
            ctx->pc = 0x1721BCu;
            goto label_1721bc;
        }
    }
    ctx->pc = 0x172198u;
label_172198:
    // 0x172198: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x172198u;
    {
        const bool branch_taken_0x172198 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x17219Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x172198u;
            // 0x17219c: 0x9462021e  lhu         $v0, 0x21E($v1) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 542)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x172198) {
            ctx->pc = 0x1721BCu;
            goto label_1721bc;
        }
    }
    ctx->pc = 0x1721A0u;
label_1721a0:
    // 0x1721a0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1721A0u;
    {
        const bool branch_taken_0x1721a0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1721A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1721A0u;
            // 0x1721a4: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1721a0) {
            ctx->pc = 0x1721BCu;
            goto label_1721bc;
        }
    }
    ctx->pc = 0x1721A8u;
label_1721a8:
    // 0x1721a8: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1721A8u;
    {
        const bool branch_taken_0x1721a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1721ACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1721A8u;
            // 0x1721ac: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1721a8) {
            ctx->pc = 0x1721BCu;
            goto label_1721bc;
        }
    }
    ctx->pc = 0x1721B0u;
label_1721b0:
    // 0x1721b0: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1721B0u;
    {
        const bool branch_taken_0x1721b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1721B4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1721B0u;
            // 0x1721b4: 0x100102d  daddu       $v0, $t0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1721b0) {
            ctx->pc = 0x1721BCu;
            goto label_1721bc;
        }
    }
    ctx->pc = 0x1721B8u;
    // 0x1721b8: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1721b8u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1721bc:
    // 0x1721bc: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x1721bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
label_1721c0:
    // 0x1721c0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1721c0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1721c4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1721c4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1721c8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1721c8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1721cc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1721ccu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1721d0: 0x3e00008  jr          $ra
    ctx->pc = 0x1721D0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1721D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1721D0u;
            // 0x1721d4: 0x27bd0070  addiu       $sp, $sp, 0x70 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1721D8u;
    // 0x1721d8: 0x0  nop
    ctx->pc = 0x1721d8u;
    // NOP
    // 0x1721dc: 0x0  nop
    ctx->pc = 0x1721dcu;
    // NOP
    ctx->pc = 0x1721e0u;
}
