#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00252B78
// Address: 0x252b78 - 0x252f00
void sub_00252B78_0x252b78(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00252B78_0x252b78");
#endif

    switch (ctx->pc) {
        case 0x252c58u: goto label_252c58;
        case 0x252cf4u: goto label_252cf4;
        case 0x252d20u: goto label_252d20;
        case 0x252d58u: goto label_252d58;
        case 0x252d98u: goto label_252d98;
        case 0x252db8u: goto label_252db8;
        case 0x252e64u: goto label_252e64;
        case 0x252e78u: goto label_252e78;
        case 0x252e98u: goto label_252e98;
        case 0x252edcu: goto label_252edc;
        default: break;
    }

    ctx->pc = 0x252b78u;

    // 0x252b78: 0x27bdff30  addiu       $sp, $sp, -0xD0
    ctx->pc = 0x252b78u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967088));
    // 0x252b7c: 0xffa50098  sd          $a1, 0x98($sp)
    ctx->pc = 0x252b7cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 5));
    // 0x252b80: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x252b80u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x252b84: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x252b84u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x252b88: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x252b88u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x252b8c: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x252b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x252b90: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x252b90u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252b94: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x252b94u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x252b98: 0xffa600a0  sd          $a2, 0xA0($sp)
    ctx->pc = 0x252b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 6));
    // 0x252b9c: 0xffa700a8  sd          $a3, 0xA8($sp)
    ctx->pc = 0x252b9cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 7));
    // 0x252ba0: 0xffa800b0  sd          $t0, 0xB0($sp)
    ctx->pc = 0x252ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 8));
    // 0x252ba4: 0xffa900b8  sd          $t1, 0xB8($sp)
    ctx->pc = 0x252ba4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 9));
    // 0x252ba8: 0xffaa00c0  sd          $t2, 0xC0($sp)
    ctx->pc = 0x252ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 192), GPR_U64(ctx, 10));
    // 0x252bac: 0xffab00c8  sd          $t3, 0xC8($sp)
    ctx->pc = 0x252bacu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 200), GPR_U64(ctx, 11));
    // 0x252bb0: 0x8fb20098  lw          $s2, 0x98($sp)
    ctx->pc = 0x252bb0u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x252bb4: 0x8e44001c  lw          $a0, 0x1C($s2)
    ctx->pc = 0x252bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 28)));
    // 0x252bb8: 0x8e430034  lw          $v1, 0x34($s2)
    ctx->pc = 0x252bb8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 52)));
    // 0x252bbc: 0x94820002  lhu         $v0, 0x2($a0)
    ctx->pc = 0x252bbcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 2)));
    // 0x252bc0: 0x30630008  andi        $v1, $v1, 0x8
    ctx->pc = 0x252bc0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8);
    // 0x252bc4: 0x30420010  andi        $v0, $v0, 0x10
    ctx->pc = 0x252bc4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)16);
    // 0x252bc8: 0x14600043  bnez        $v1, . + 4 + (0x43 << 2)
    ctx->pc = 0x252BC8u;
    {
        const bool branch_taken_0x252bc8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x252BCCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252BC8u;
            // 0x252bcc: 0x34530024  ori         $s3, $v0, 0x24 (Delay Slot)
        SET_GPR_U64(ctx, 19, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)36);
        ctx->in_delay_slot = false;
        if (branch_taken_0x252bc8) {
            ctx->pc = 0x252CD8u;
            goto label_252cd8;
        }
    }
    ctx->pc = 0x252BD0u;
    // 0x252bd0: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x252bd0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x252bd4: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x252bd4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x252bd8: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x252bd8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x252bdc: 0x62182b  sltu        $v1, $v1, $v0
    ctx->pc = 0x252bdcu;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)GPR_U64(ctx, 2)) ? 1 : 0);
    // 0x252be0: 0x14600042  bnez        $v1, . + 4 + (0x42 << 2)
    ctx->pc = 0x252BE0u;
    {
        const bool branch_taken_0x252be0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x252be0) {
            ctx->pc = 0x252CECu;
            goto label_252cec;
        }
    }
    ctx->pc = 0x252BE8u;
    // 0x252be8: 0x96230012  lhu         $v1, 0x12($s1)
    ctx->pc = 0x252be8u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x252bec: 0x30620001  andi        $v0, $v1, 0x1
    ctx->pc = 0x252becu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)1);
    // 0x252bf0: 0x14400016  bnez        $v0, . + 4 + (0x16 << 2)
    ctx->pc = 0x252BF0u;
    {
        const bool branch_taken_0x252bf0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252BF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252BF0u;
            // 0x252bf4: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252bf0) {
            ctx->pc = 0x252C4Cu;
            goto label_252c4c;
        }
    }
    ctx->pc = 0x252BF8u;
    // 0x252bf8: 0x30620002  andi        $v0, $v1, 0x2
    ctx->pc = 0x252bf8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x252bfc: 0x10400008  beqz        $v0, . + 4 + (0x8 << 2)
    ctx->pc = 0x252BFCu;
    {
        const bool branch_taken_0x252bfc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x252C00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252BFCu;
            // 0x252c00: 0x8e240008  lw          $a0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252bfc) {
            ctx->pc = 0x252C20u;
            goto label_252c20;
        }
    }
    ctx->pc = 0x252C04u;
    // 0x252c04: 0x2482ffe0  addiu       $v0, $a0, -0x20
    ctx->pc = 0x252c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967264));
    // 0x252c08: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x252c08u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x252c0c: 0x2c420014  sltiu       $v0, $v0, 0x14
    ctx->pc = 0x252c0cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x252c10: 0x50400009  beql        $v0, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x252C10u;
    {
        const bool branch_taken_0x252c10 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x252c10) {
            ctx->pc = 0x252C14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x252C10u;
            // 0x252c14: 0x8e23000c  lw          $v1, 0xC($s1) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x252C38u;
            goto label_252c38;
        }
    }
    ctx->pc = 0x252C18u;
    // 0x252c18: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x252C18u;
    {
        const bool branch_taken_0x252c18 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252C1Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252C18u;
            // 0x252c1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252c18) {
            ctx->pc = 0x252C4Cu;
            goto label_252c4c;
        }
    }
    ctx->pc = 0x252C20u;
label_252c20:
    // 0x252c20: 0x2482ffec  addiu       $v0, $a0, -0x14
    ctx->pc = 0x252c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x252c24: 0x511023  subu        $v0, $v0, $s1
    ctx->pc = 0x252c24u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 17)));
    // 0x252c28: 0x2c420014  sltiu       $v0, $v0, 0x14
    ctx->pc = 0x252c28u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)20) ? 1 : 0);
    // 0x252c2c: 0x54400007  bnel        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x252C2Cu;
    {
        const bool branch_taken_0x252c2c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x252c2c) {
            ctx->pc = 0x252C30u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x252C2Cu;
            // 0x252c30: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x252C4Cu;
            goto label_252c4c;
        }
    }
    ctx->pc = 0x252C34u;
    // 0x252c34: 0x8e23000c  lw          $v1, 0xC($s1)
    ctx->pc = 0x252c34u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
label_252c38:
    // 0x252c38: 0x2482ffec  addiu       $v0, $a0, -0x14
    ctx->pc = 0x252c38u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967276));
    // 0x252c3c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x252c3cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x252c40: 0x24630014  addiu       $v1, $v1, 0x14
    ctx->pc = 0x252c40u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x252c44: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x252C44u;
    {
        const bool branch_taken_0x252c44 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252C44u;
            // 0x252c48: 0xae23000c  sw          $v1, 0xC($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252c44) {
            ctx->pc = 0x252C5Cu;
            goto label_252c5c;
        }
    }
    ctx->pc = 0x252C4Cu;
label_252c4c:
    // 0x252c4c: 0x24050014  addiu       $a1, $zero, 0x14
    ctx->pc = 0x252c4cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x252c50: 0xc08aa1c  jal         func_22A870
    ctx->pc = 0x252C50u;
    SET_GPR_U32(ctx, 31, 0x252C58u);
    ctx->pc = 0x252C54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252C50u;
            // 0x252c54: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A870u;
    if (runtime->hasFunction(0x22A870u)) {
        auto targetFn = runtime->lookupFunction(0x22A870u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252C58u; }
        if (ctx->pc != 0x252C58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A870_0x22a870(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252C58u; }
        if (ctx->pc != 0x252C58u) { return; }
    }
    ctx->pc = 0x252C58u;
label_252c58:
    // 0x252c58: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x252c58u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_252c5c:
    // 0x252c5c: 0x52200009  beql        $s1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x252C5Cu;
    {
        const bool branch_taken_0x252c5c = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        if (branch_taken_0x252c5c) {
            ctx->pc = 0x252C60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x252C5Cu;
            // 0x252c60: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x252C84u;
            goto label_252c84;
        }
    }
    ctx->pc = 0x252C64u;
    // 0x252c64: 0x96220012  lhu         $v0, 0x12($s1)
    ctx->pc = 0x252c64u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 18)));
    // 0x252c68: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x252c68u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x252c6c: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x252C6Cu;
    {
        const bool branch_taken_0x252c6c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x252c6c) {
            ctx->pc = 0x252C70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x252C6Cu;
            // 0x252c70: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x252C84u;
            goto label_252c84;
        }
    }
    ctx->pc = 0x252C74u;
    // 0x252c74: 0x8e220018  lw          $v0, 0x18($s1)
    ctx->pc = 0x252c74u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x252c78: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x252c78u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x252c7c: 0xae220018  sw          $v0, 0x18($s1)
    ctx->pc = 0x252c7cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 2));
    // 0x252c80: 0x8e300008  lw          $s0, 0x8($s1)
    ctx->pc = 0x252c80u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
label_252c84:
    // 0x252c84: 0x240400ff  addiu       $a0, $zero, 0xFF
    ctx->pc = 0x252c84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 255));
    // 0x252c88: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x252c88u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x252c8c: 0xa2000006  sb          $zero, 0x6($s0)
    ctx->pc = 0x252c8cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x252c90: 0xa2000007  sb          $zero, 0x7($s0)
    ctx->pc = 0x252c90u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x252c94: 0x92420041  lbu         $v0, 0x41($s2)
    ctx->pc = 0x252c94u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 18), 65)));
    // 0x252c98: 0xa2020009  sb          $v0, 0x9($s0)
    ctx->pc = 0x252c98u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 9), (uint8_t)GPR_U32(ctx, 2));
    // 0x252c9c: 0x96230018  lhu         $v1, 0x18($s1)
    ctx->pc = 0x252c9cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x252ca0: 0x3123a  dsrl        $v0, $v1, 8
    ctx->pc = 0x252ca0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) >> 8);
    // 0x252ca4: 0xa2030002  sb          $v1, 0x2($s0)
    ctx->pc = 0x252ca4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x252ca8: 0xa2020003  sb          $v0, 0x3($s0)
    ctx->pc = 0x252ca8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 2));
    // 0x252cac: 0x8a420047  lwl         $v0, 0x47($s2)
    ctx->pc = 0x252cacu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 71); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x252cb0: 0x9a420044  lwr         $v0, 0x44($s2)
    ctx->pc = 0x252cb0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 68); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x252cb4: 0xaa02000f  swl         $v0, 0xF($s0)
    ctx->pc = 0x252cb4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x252cb8: 0xba02000c  swr         $v0, 0xC($s0)
    ctx->pc = 0x252cb8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x252cbc: 0x8a42004b  lwl         $v0, 0x4B($s2)
    ctx->pc = 0x252cbcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 75); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 2) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 2, (int32_t)merged); }
    // 0x252cc0: 0x9a420048  lwr         $v0, 0x48($s2)
    ctx->pc = 0x252cc0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 72); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 2) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 2) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 2, merged64); }
    // 0x252cc4: 0xaa020013  swl         $v0, 0x13($s0)
    ctx->pc = 0x252cc4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x252cc8: 0xba020010  swr         $v0, 0x10($s0)
    ctx->pc = 0x252cc8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 16), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x252ccc: 0xa2040008  sb          $a0, 0x8($s0)
    ctx->pc = 0x252cccu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 8), (uint8_t)GPR_U32(ctx, 4));
    // 0x252cd0: 0x1000002b  b           . + 4 + (0x2B << 2)
    ctx->pc = 0x252CD0u;
    {
        const bool branch_taken_0x252cd0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252CD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252CD0u;
            // 0x252cd4: 0x8e45004c  lw          $a1, 0x4C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 76)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252cd0) {
            ctx->pc = 0x252D80u;
            goto label_252d80;
        }
    }
    ctx->pc = 0x252CD8u;
label_252cd8:
    // 0x252cd8: 0x8e240018  lw          $a0, 0x18($s1)
    ctx->pc = 0x252cd8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 24)));
    // 0x252cdc: 0x3402ffff  ori         $v0, $zero, 0xFFFF
    ctx->pc = 0x252cdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x252ce0: 0x44102a  slt         $v0, $v0, $a0
    ctx->pc = 0x252ce0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 2) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x252ce4: 0x50400005  beql        $v0, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x252CE4u;
    {
        const bool branch_taken_0x252ce4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x252ce4) {
            ctx->pc = 0x252CE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x252CE4u;
            // 0x252ce8: 0x8e300008  lw          $s0, 0x8($s1) (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x252CFCu;
            goto label_252cfc;
        }
    }
    ctx->pc = 0x252CECu;
label_252cec:
    // 0x252cec: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x252CECu;
    SET_GPR_U32(ctx, 31, 0x252CF4u);
    ctx->pc = 0x252CF0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252CECu;
            // 0x252cf0: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (runtime->hasFunction(0x22A758u)) {
        auto targetFn = runtime->lookupFunction(0x22A758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252CF4u; }
        if (ctx->pc != 0x252CF4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A758_0x22a758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252CF4u; }
        if (ctx->pc != 0x252CF4u) { return; }
    }
    ctx->pc = 0x252CF4u;
label_252cf4:
    // 0x252cf4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x252CF4u;
    {
        const bool branch_taken_0x252cf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252CF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252CF4u;
            // 0x252cf8: 0x2402007a  addiu       $v0, $zero, 0x7A (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 122));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252cf4) {
            ctx->pc = 0x252D98u;
            goto label_252d98;
        }
    }
    ctx->pc = 0x252CFCu;
label_252cfc:
    // 0x252cfc: 0x92020003  lbu         $v0, 0x3($s0)
    ctx->pc = 0x252cfcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 3)));
    // 0x252d00: 0x92030002  lbu         $v1, 0x2($s0)
    ctx->pc = 0x252d00u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 2)));
    // 0x252d04: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x252d04u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x252d08: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x252d08u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x252d0c: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x252d0cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x252d10: 0x50820005  beql        $a0, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x252D10u;
    {
        const bool branch_taken_0x252d10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 2));
        if (branch_taken_0x252d10) {
            ctx->pc = 0x252D14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x252D10u;
            // 0x252d14: 0x92020005  lbu         $v0, 0x5($s0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x252D28u;
            goto label_252d28;
        }
    }
    ctx->pc = 0x252D18u;
    // 0x252d18: 0xc08a9d6  jal         func_22A758
    ctx->pc = 0x252D18u;
    SET_GPR_U32(ctx, 31, 0x252D20u);
    ctx->pc = 0x252D1Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252D18u;
            // 0x252d1c: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A758u;
    if (runtime->hasFunction(0x22A758u)) {
        auto targetFn = runtime->lookupFunction(0x22A758u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252D20u; }
        if (ctx->pc != 0x252D20u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A758_0x22a758(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252D20u; }
        if (ctx->pc != 0x252D20u) { return; }
    }
    ctx->pc = 0x252D20u;
label_252d20:
    // 0x252d20: 0x1000001d  b           . + 4 + (0x1D << 2)
    ctx->pc = 0x252D20u;
    {
        const bool branch_taken_0x252d20 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252D24u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252D20u;
            // 0x252d24: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252d20) {
            ctx->pc = 0x252D98u;
            goto label_252d98;
        }
    }
    ctx->pc = 0x252D28u;
label_252d28:
    // 0x252d28: 0x92030004  lbu         $v1, 0x4($s0)
    ctx->pc = 0x252d28u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 4)));
    // 0x252d2c: 0x21238  dsll        $v0, $v0, 8
    ctx->pc = 0x252d2cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << 8);
    // 0x252d30: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x252d30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x252d34: 0x3042ffff  andi        $v0, $v0, 0xFFFF
    ctx->pc = 0x252d34u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x252d38: 0x1440000b  bnez        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x252D38u;
    {
        const bool branch_taken_0x252d38 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x252D3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252D38u;
            // 0x252d3c: 0x3c03003a  lui         $v1, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252d38) {
            ctx->pc = 0x252D68u;
            goto label_252d68;
        }
    }
    ctx->pc = 0x252D40u;
    // 0x252d40: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x252d40u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x252d44: 0x94641194  lhu         $a0, 0x1194($v1)
    ctx->pc = 0x252d44u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4500)));
    // 0x252d48: 0x24820001  addiu       $v0, $a0, 0x1
    ctx->pc = 0x252d48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 1));
    // 0x252d4c: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x252d4cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x252d50: 0xc08a262  jal         func_228988
    ctx->pc = 0x252D50u;
    SET_GPR_U32(ctx, 31, 0x252D58u);
    ctx->pc = 0x252D54u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252D50u;
            // 0x252d54: 0xa4621194  sh          $v0, 0x1194($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4500), (uint16_t)GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x228988u;
    if (runtime->hasFunction(0x228988u)) {
        auto targetFn = runtime->lookupFunction(0x228988u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252D58u; }
        if (ctx->pc != 0x252D58u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00228988_0x228988(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252D58u; }
        if (ctx->pc != 0x252D58u) { return; }
    }
    ctx->pc = 0x252D58u;
label_252d58:
    // 0x252d58: 0x21a02  srl         $v1, $v0, 8
    ctx->pc = 0x252d58u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x252d5c: 0xa2020004  sb          $v0, 0x4($s0)
    ctx->pc = 0x252d5cu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 4), (uint8_t)GPR_U32(ctx, 2));
    // 0x252d60: 0xa2030005  sb          $v1, 0x5($s0)
    ctx->pc = 0x252d60u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 5), (uint8_t)GPR_U32(ctx, 3));
    // 0x252d64: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x252d64u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
label_252d68:
    // 0x252d68: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x252d68u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252d6c: 0x246310a8  addiu       $v1, $v1, 0x10A8
    ctx->pc = 0x252d6cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4264));
    // 0x252d70: 0x36730002  ori         $s3, $s3, 0x2
    ctx->pc = 0x252d70u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)2);
    // 0x252d74: 0xdc6200c0  ld          $v0, 0xC0($v1)
    ctx->pc = 0x252d74u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 192)));
    // 0x252d78: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x252d78u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x252d7c: 0xfc6200c0  sd          $v0, 0xC0($v1)
    ctx->pc = 0x252d7cu;
    WRITE64(ADD32(GPR_U32(ctx, 3), 192), GPR_U64(ctx, 2));
label_252d80:
    // 0x252d80: 0x8e480050  lw          $t0, 0x50($s2)
    ctx->pc = 0x252d80u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 80)));
    // 0x252d84: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x252d84u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252d88: 0x260382d  daddu       $a3, $s3, $zero
    ctx->pc = 0x252d88u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252d8c: 0x26490054  addiu       $t1, $s2, 0x54
    ctx->pc = 0x252d8cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 18), 84));
    // 0x252d90: 0xc0942d4  jal         func_250B50
    ctx->pc = 0x252D90u;
    SET_GPR_U32(ctx, 31, 0x252D98u);
    ctx->pc = 0x252D94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252D90u;
            // 0x252d94: 0x26460020  addiu       $a2, $s2, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 18), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x250B50u;
    if (runtime->hasFunction(0x250B50u)) {
        auto targetFn = runtime->lookupFunction(0x250B50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252D98u; }
        if (ctx->pc != 0x252D98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00250B50_0x250b50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252D98u; }
        if (ctx->pc != 0x252D98u) { return; }
    }
    ctx->pc = 0x252D98u;
label_252d98:
    // 0x252d98: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x252d98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x252d9c: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x252d9cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x252da0: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x252da0u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252da4: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x252da4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252da8: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x252da8u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252dac: 0x3e00008  jr          $ra
    ctx->pc = 0x252DACu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252DB0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252DACu;
            // 0x252db0: 0x27bd00d0  addiu       $sp, $sp, 0xD0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x252DB4u;
    // 0x252db4: 0x0  nop
    ctx->pc = 0x252db4u;
    // NOP
label_252db8:
    // 0x252db8: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x252db8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x252dbc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x252dbcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x252dc0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x252dc0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x252dc4: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x252dc4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252dc8: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x252dc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x252dcc: 0x100802d  daddu       $s0, $t0, $zero
    ctx->pc = 0x252dccu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 8) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252dd0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x252dd0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x252dd4: 0x10c00006  beqz        $a2, . + 4 + (0x6 << 2)
    ctx->pc = 0x252DD4u;
    {
        const bool branch_taken_0x252dd4 = (GPR_U64(ctx, 6) == GPR_U64(ctx, 0));
        ctx->pc = 0x252DD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252DD4u;
            // 0x252dd8: 0x8cb10008  lw          $s1, 0x8($a1) (Delay Slot)
        SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 8)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252dd4) {
            ctx->pc = 0x252DF0u;
            goto label_252df0;
        }
    }
    ctx->pc = 0x252DDCu;
    // 0x252ddc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x252ddcu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252de0: 0x1482003f  bne         $a0, $v0, . + 4 + (0x3F << 2)
    ctx->pc = 0x252DE0u;
    {
        const bool branch_taken_0x252de0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x252DE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252DE0u;
            // 0x252de4: 0x2412006d  addiu       $s2, $zero, 0x6D (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 109));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252de0) {
            ctx->pc = 0x252EE0u;
            goto label_252ee0;
        }
    }
    ctx->pc = 0x252DE8u;
    // 0x252de8: 0x1000001a  b           . + 4 + (0x1A << 2)
    ctx->pc = 0x252DE8u;
    {
        const bool branch_taken_0x252de8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252DECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252DE8u;
            // 0x252dec: 0x8e040000  lw          $a0, 0x0($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252de8) {
            ctx->pc = 0x252E54u;
            goto label_252e54;
        }
    }
    ctx->pc = 0x252DF0u;
label_252df0:
    // 0x252df0: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x252DF0u;
    {
        const bool branch_taken_0x252df0 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x252DF4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252DF0u;
            // 0x252df4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252df0) {
            ctx->pc = 0x252E80u;
            goto label_252e80;
        }
    }
    ctx->pc = 0x252DF8u;
    // 0x252df8: 0x1482003a  bne         $a0, $v0, . + 4 + (0x3A << 2)
    ctx->pc = 0x252DF8u;
    {
        const bool branch_taken_0x252df8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 2));
        ctx->pc = 0x252DFCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252DF8u;
            // 0x252dfc: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252df8) {
            ctx->pc = 0x252EE4u;
            goto label_252ee4;
        }
    }
    ctx->pc = 0x252E00u;
    // 0x252e00: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x252e00u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x252e04: 0x14e20019  bne         $a3, $v0, . + 4 + (0x19 << 2)
    ctx->pc = 0x252E04u;
    {
        const bool branch_taken_0x252e04 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x252E08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252E04u;
            // 0x252e08: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252e04) {
            ctx->pc = 0x252E6Cu;
            goto label_252e6c;
        }
    }
    ctx->pc = 0x252E0Cu;
    // 0x252e0c: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x252e0cu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x252e10: 0x50800010  beql        $a0, $zero, . + 4 + (0x10 << 2)
    ctx->pc = 0x252E10u;
    {
        const bool branch_taken_0x252e10 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x252e10) {
            ctx->pc = 0x252E14u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x252E10u;
            // 0x252e14: 0x24120016  addiu       $s2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
            ctx->pc = 0x252E54u;
            goto label_252e54;
        }
    }
    ctx->pc = 0x252E18u;
    // 0x252e18: 0x8c82000c  lw          $v0, 0xC($a0)
    ctx->pc = 0x252e18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 12)));
    // 0x252e1c: 0x2c420004  sltiu       $v0, $v0, 0x4
    ctx->pc = 0x252e1cu;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)4) ? 1 : 0);
    // 0x252e20: 0x50400003  beql        $v0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x252E20u;
    {
        const bool branch_taken_0x252e20 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x252e20) {
            ctx->pc = 0x252E24u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x252E20u;
            // 0x252e24: 0x8c820008  lw          $v0, 0x8($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 8)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x252E30u;
            goto label_252e30;
        }
    }
    ctx->pc = 0x252E28u;
    // 0x252e28: 0x1000000a  b           . + 4 + (0xA << 2)
    ctx->pc = 0x252E28u;
    {
        const bool branch_taken_0x252e28 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252E2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252E28u;
            // 0x252e2c: 0x24120016  addiu       $s2, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252e28) {
            ctx->pc = 0x252E54u;
            goto label_252e54;
        }
    }
    ctx->pc = 0x252E30u;
label_252e30:
    // 0x252e30: 0x8c430000  lw          $v1, 0x0($v0)
    ctx->pc = 0x252e30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x252e34: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x252E34u;
    {
        const bool branch_taken_0x252e34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x252E38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252E34u;
            // 0x252e38: 0x8e220034  lw          $v0, 0x34($s1) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252e34) {
            ctx->pc = 0x252E44u;
            goto label_252e44;
        }
    }
    ctx->pc = 0x252E3Cu;
    // 0x252e3c: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x252E3Cu;
    {
        const bool branch_taken_0x252e3c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252E40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252E3Cu;
            // 0x252e40: 0x34420008  ori         $v0, $v0, 0x8 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)8);
        ctx->in_delay_slot = false;
        if (branch_taken_0x252e3c) {
            ctx->pc = 0x252E4Cu;
            goto label_252e4c;
        }
    }
    ctx->pc = 0x252E44u;
label_252e44:
    // 0x252e44: 0x2403fff7  addiu       $v1, $zero, -0x9
    ctx->pc = 0x252e44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967287));
    // 0x252e48: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x252e48u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
label_252e4c:
    // 0x252e4c: 0xae220034  sw          $v0, 0x34($s1)
    ctx->pc = 0x252e4cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 52), GPR_U32(ctx, 2));
    // 0x252e50: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x252e50u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_252e54:
    // 0x252e54: 0x10800023  beqz        $a0, . + 4 + (0x23 << 2)
    ctx->pc = 0x252E54u;
    {
        const bool branch_taken_0x252e54 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x252E58u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252E54u;
            // 0x252e58: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252e54) {
            ctx->pc = 0x252EE4u;
            goto label_252ee4;
        }
    }
    ctx->pc = 0x252E5Cu;
    // 0x252e5c: 0xc08a996  jal         func_22A658
    ctx->pc = 0x252E5Cu;
    SET_GPR_U32(ctx, 31, 0x252E64u);
    ctx->pc = 0x22A658u;
    if (runtime->hasFunction(0x22A658u)) {
        auto targetFn = runtime->lookupFunction(0x22A658u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252E64u; }
        if (ctx->pc != 0x252E64u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A658_0x22a658(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252E64u; }
        if (ctx->pc != 0x252E64u) { return; }
    }
    ctx->pc = 0x252E64u;
label_252e64:
    // 0x252e64: 0x1000001f  b           . + 4 + (0x1F << 2)
    ctx->pc = 0x252E64u;
    {
        const bool branch_taken_0x252e64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252E68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252E64u;
            // 0x252e68: 0x240102d  daddu       $v0, $s2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252e64) {
            ctx->pc = 0x252EE4u;
            goto label_252ee4;
        }
    }
    ctx->pc = 0x252E6Cu;
label_252e6c:
    // 0x252e6c: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x252e6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x252e70: 0xc094698  jal         func_251A60
    ctx->pc = 0x252E70u;
    SET_GPR_U32(ctx, 31, 0x252E78u);
    ctx->pc = 0x252E74u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252E70u;
            // 0x252e74: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251A60u;
    if (runtime->hasFunction(0x251A60u)) {
        auto targetFn = runtime->lookupFunction(0x251A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252E78u; }
        if (ctx->pc != 0x252E78u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00251A60_0x251a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252E78u; }
        if (ctx->pc != 0x252E78u) { return; }
    }
    ctx->pc = 0x252E78u;
label_252e78:
    // 0x252e78: 0x10000019  b           . + 4 + (0x19 << 2)
    ctx->pc = 0x252E78u;
    {
        const bool branch_taken_0x252e78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252E7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252E78u;
            // 0x252e7c: 0x40902d  daddu       $s2, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252e78) {
            ctx->pc = 0x252EE0u;
            goto label_252ee0;
        }
    }
    ctx->pc = 0x252E80u;
label_252e80:
    // 0x252e80: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x252e80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x252e84: 0x14e20012  bne         $a3, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x252E84u;
    {
        const bool branch_taken_0x252e84 = (GPR_U64(ctx, 7) != GPR_U64(ctx, 2));
        ctx->pc = 0x252E88u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252E84u;
            // 0x252e88: 0x200402d  daddu       $t0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252e84) {
            ctx->pc = 0x252ED0u;
            goto label_252ed0;
        }
    }
    ctx->pc = 0x252E8Cu;
    // 0x252e8c: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x252e8cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252e90: 0xc08a922  jal         func_22A488
    ctx->pc = 0x252E90u;
    SET_GPR_U32(ctx, 31, 0x252E98u);
    ctx->pc = 0x252E94u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252E90u;
            // 0x252e94: 0x2405000a  addiu       $a1, $zero, 0xA (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 10));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22A488u;
    if (runtime->hasFunction(0x22A488u)) {
        auto targetFn = runtime->lookupFunction(0x22A488u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252E98u; }
        if (ctx->pc != 0x252E98u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022A488_0x22a488(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252E98u; }
        if (ctx->pc != 0x252E98u) { return; }
    }
    ctx->pc = 0x252E98u;
label_252e98:
    // 0x252e98: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x252e98u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252e9c: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x252E9Cu;
    {
        const bool branch_taken_0x252e9c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x252EA0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252E9Cu;
            // 0x252ea0: 0xae030000  sw          $v1, 0x0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252e9c) {
            ctx->pc = 0x252EACu;
            goto label_252eac;
        }
    }
    ctx->pc = 0x252EA4u;
    // 0x252ea4: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x252EA4u;
    {
        const bool branch_taken_0x252ea4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252EA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252EA4u;
            // 0x252ea8: 0x24120069  addiu       $s2, $zero, 0x69 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 0), 105));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252ea4) {
            ctx->pc = 0x252EE0u;
            goto label_252ee0;
        }
    }
    ctx->pc = 0x252EACu;
label_252eac:
    // 0x252eac: 0x24020004  addiu       $v0, $zero, 0x4
    ctx->pc = 0x252eacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x252eb0: 0xac62000c  sw          $v0, 0xC($v1)
    ctx->pc = 0x252eb0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 12), GPR_U32(ctx, 2));
    // 0x252eb4: 0x8e030000  lw          $v1, 0x0($s0)
    ctx->pc = 0x252eb4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x252eb8: 0x8e220034  lw          $v0, 0x34($s1)
    ctx->pc = 0x252eb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 52)));
    // 0x252ebc: 0x8c640008  lw          $a0, 0x8($v1)
    ctx->pc = 0x252ebcu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x252ec0: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x252ec0u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x252ec4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x252ec4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x252ec8: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x252EC8u;
    {
        const bool branch_taken_0x252ec8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x252ECCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252EC8u;
            // 0x252ecc: 0xac820000  sw          $v0, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x252ec8) {
            ctx->pc = 0x252EE0u;
            goto label_252ee0;
        }
    }
    ctx->pc = 0x252ED0u;
label_252ed0:
    // 0x252ed0: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x252ed0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x252ed4: 0xc094698  jal         func_251A60
    ctx->pc = 0x252ED4u;
    SET_GPR_U32(ctx, 31, 0x252EDCu);
    ctx->pc = 0x252ED8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x252ED4u;
            // 0x252ed8: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x251A60u;
    if (runtime->hasFunction(0x251A60u)) {
        auto targetFn = runtime->lookupFunction(0x251A60u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252EDCu; }
        if (ctx->pc != 0x252EDCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00251A60_0x251a60(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x252EDCu; }
        if (ctx->pc != 0x252EDCu) { return; }
    }
    ctx->pc = 0x252EDCu;
label_252edc:
    // 0x252edc: 0x40902d  daddu       $s2, $v0, $zero
    ctx->pc = 0x252edcu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_252ee0:
    // 0x252ee0: 0x240102d  daddu       $v0, $s2, $zero
    ctx->pc = 0x252ee0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
label_252ee4:
    // 0x252ee4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x252ee4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x252ee8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x252ee8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x252eec: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x252eecu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x252ef0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x252ef0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x252ef4: 0x3e00008  jr          $ra
    ctx->pc = 0x252EF4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x252EF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x252EF4u;
            // 0x252ef8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x252EFCu;
    // 0x252efc: 0x0  nop
    ctx->pc = 0x252efcu;
    // NOP
    ctx->pc = 0x252f00u;
}
