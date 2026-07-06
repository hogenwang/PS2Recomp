#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001A1AB0
// Address: 0x1a1ab0 - 0x1a1bf0
void sub_001A1AB0_0x1a1ab0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001A1AB0_0x1a1ab0");
#endif

    switch (ctx->pc) {
        case 0x1a1ad8u: goto label_1a1ad8;
        case 0x1a1bd4u: goto label_1a1bd4;
        default: break;
    }

    ctx->pc = 0x1a1ab0u;

    // 0x1a1ab0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1a1ab0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1a1ab4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a1ab4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a1ab8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1a1ab8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1a1abc: 0x8c429478  lw          $v0, -0x6B88($v0)
    ctx->pc = 0x1a1abcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294939768)));
    // 0x1a1ac0: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1AC0u;
    {
        const bool branch_taken_0x1a1ac0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1ac0) {
            ctx->pc = 0x1A1AD0u;
            goto label_1a1ad0;
        }
    }
    ctx->pc = 0x1A1AC8u;
    // 0x1a1ac8: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1A1AC8u;
    {
        const bool branch_taken_0x1a1ac8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1ACCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1AC8u;
            // 0x1a1acc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ac8) {
            ctx->pc = 0x1A1AD8u;
            goto label_1a1ad8;
        }
    }
    ctx->pc = 0x1A1AD0u;
label_1a1ad0:
    // 0x1a1ad0: 0xc068b28  jal         func_1A2CA0
    ctx->pc = 0x1A1AD0u;
    SET_GPR_U32(ctx, 31, 0x1A1AD8u);
    ctx->pc = 0x1A2CA0u;
    if (runtime->hasFunction(0x1A2CA0u)) {
        auto targetFn = runtime->lookupFunction(0x1A2CA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1AD8u; }
        if (ctx->pc != 0x1A1AD8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A2CA0_0x1a2ca0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1AD8u; }
        if (ctx->pc != 0x1A1AD8u) { return; }
    }
    ctx->pc = 0x1A1AD8u;
label_1a1ad8:
    // 0x1a1ad8: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x1a1ad8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x1a1adc: 0x8c639728  lw          $v1, -0x68D8($v1)
    ctx->pc = 0x1a1adcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294940456)));
    // 0x1a1ae0: 0x50600009  beql        $v1, $zero, . + 4 + (0x9 << 2)
    ctx->pc = 0x1A1AE0u;
    {
        const bool branch_taken_0x1a1ae0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1ae0) {
            ctx->pc = 0x1A1AE4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1AE0u;
            // 0x1a1ae4: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A1B08u;
            goto label_1a1b08;
        }
    }
    ctx->pc = 0x1A1AE8u;
    // 0x1a1ae8: 0x463003b  bgezl       $v1, . + 4 + (0x3B << 2)
    ctx->pc = 0x1A1AE8u;
    {
        const bool branch_taken_0x1a1ae8 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x1a1ae8) {
            ctx->pc = 0x1A1AECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1AE8u;
            // 0x1a1aec: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A1BD8u;
            goto label_1a1bd8;
        }
    }
    ctx->pc = 0x1A1AF0u;
    // 0x1a1af0: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x1a1af0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x1a1af4: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a1af4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a1af8: 0xac439728  sw          $v1, -0x68D8($v0)
    ctx->pc = 0x1a1af8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294940456), GPR_U32(ctx, 3));
    // 0x1a1afc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a1afcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1a1b00: 0x10000035  b           . + 4 + (0x35 << 2)
    ctx->pc = 0x1A1B00u;
    {
        const bool branch_taken_0x1a1b00 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1b00) {
            ctx->pc = 0x1A1BD8u;
            goto label_1a1bd8;
        }
    }
    ctx->pc = 0x1A1B08u;
label_1a1b08:
    // 0x1a1b08: 0x54430011  bnel        $v0, $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x1A1B08u;
    {
        const bool branch_taken_0x1a1b08 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x1a1b08) {
            ctx->pc = 0x1A1B0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1B08u;
            // 0x1a1b0c: 0x24040002  addiu       $a0, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A1B50u;
            goto label_1a1b50;
        }
    }
    ctx->pc = 0x1A1B10u;
    // 0x1a1b10: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a1b10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a1b14: 0x90429778  lbu         $v0, -0x6888($v0)
    ctx->pc = 0x1a1b14u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940536)));
    // 0x1a1b18: 0x14400028  bnez        $v0, . + 4 + (0x28 << 2)
    ctx->pc = 0x1A1B18u;
    {
        const bool branch_taken_0x1a1b18 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1a1b18) {
            ctx->pc = 0x1A1BBCu;
            goto label_1a1bbc;
        }
    }
    ctx->pc = 0x1A1B20u;
    // 0x1a1b20: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a1b20u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a1b24: 0x80459768  lb          $a1, -0x6898($v0)
    ctx->pc = 0x1a1b24u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940520)));
    // 0x1a1b28: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x1a1b28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1a1b2c: 0x10400023  beqz        $v0, . + 4 + (0x23 << 2)
    ctx->pc = 0x1A1B2Cu;
    {
        const bool branch_taken_0x1a1b2c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1b2c) {
            ctx->pc = 0x1A1BBCu;
            goto label_1a1bbc;
        }
    }
    ctx->pc = 0x1A1B34u;
    // 0x1a1b34: 0x2402fffe  addiu       $v0, $zero, -0x2
    ctx->pc = 0x1a1b34u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
    // 0x1a1b38: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x1a1b38u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x1a1b3c: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1a1b3cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1a1b40: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a1b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a1b44: 0xa0859768  sb          $a1, -0x6898($a0)
    ctx->pc = 0x1a1b44u;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294940520), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a1b48: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x1A1B48u;
    {
        const bool branch_taken_0x1a1b48 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1B4Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1B48u;
            // 0x1a1b4c: 0xa0439778  sb          $v1, -0x6888($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294940536), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b48) {
            ctx->pc = 0x1A1BBCu;
            goto label_1a1bbc;
        }
    }
    ctx->pc = 0x1A1B50u;
label_1a1b50:
    // 0x1a1b50: 0x14440015  bne         $v0, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x1A1B50u;
    {
        const bool branch_taken_0x1a1b50 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 4));
        if (branch_taken_0x1a1b50) {
            ctx->pc = 0x1A1BA8u;
            goto label_1a1ba8;
        }
    }
    ctx->pc = 0x1A1B58u;
    // 0x1a1b58: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a1b58u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a1b5c: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x1a1b5cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x1a1b60: 0x80459768  lb          $a1, -0x6898($v0)
    ctx->pc = 0x1a1b60u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940520)));
    // 0x1a1b64: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a1b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a1b68: 0x34a50001  ori         $a1, $a1, 0x1
    ctx->pc = 0x1a1b68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)1);
    // 0x1a1b6c: 0x90429778  lbu         $v0, -0x6888($v0)
    ctx->pc = 0x1a1b6cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940536)));
    // 0x1a1b70: 0x14400012  bnez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1A1B70u;
    {
        const bool branch_taken_0x1a1b70 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1A1B74u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1B70u;
            // 0x1a1b74: 0xa0859768  sb          $a1, -0x6898($a0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 4), 4294940520), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1b70) {
            ctx->pc = 0x1A1BBCu;
            goto label_1a1bbc;
        }
    }
    ctx->pc = 0x1A1B78u;
    // 0x1a1b78: 0x5163c  dsll32      $v0, $a1, 24
    ctx->pc = 0x1a1b78u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) << (32 + 24));
    // 0x1a1b7c: 0x2163f  dsra32      $v0, $v0, 24
    ctx->pc = 0x1a1b7cu;
    SET_GPR_S64(ctx, 2, GPR_S64(ctx, 2) >> (32 + 24));
    // 0x1a1b80: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x1a1b80u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x1a1b84: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x1A1B84u;
    {
        const bool branch_taken_0x1a1b84 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1b84) {
            ctx->pc = 0x1A1BBCu;
            goto label_1a1bbc;
        }
    }
    ctx->pc = 0x1A1B8Cu;
    // 0x1a1b8c: 0x2402fffd  addiu       $v0, $zero, -0x3
    ctx->pc = 0x1a1b8cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967293));
    // 0x1a1b90: 0x3c04009f  lui         $a0, 0x9F
    ctx->pc = 0x1a1b90u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)159 << 16));
    // 0x1a1b94: 0xa22824  and         $a1, $a1, $v0
    ctx->pc = 0x1a1b94u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) & GPR_U64(ctx, 2));
    // 0x1a1b98: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a1b98u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a1b9c: 0xa0859768  sb          $a1, -0x6898($a0)
    ctx->pc = 0x1a1b9cu;
    WRITE8(ADD32(GPR_U32(ctx, 4), 4294940520), (uint8_t)GPR_U32(ctx, 5));
    // 0x1a1ba0: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x1A1BA0u;
    {
        const bool branch_taken_0x1a1ba0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1A1BA4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1BA0u;
            // 0x1a1ba4: 0xa0439778  sb          $v1, -0x6888($v0) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 2), 4294940536), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1a1ba0) {
            ctx->pc = 0x1A1BBCu;
            goto label_1a1bbc;
        }
    }
    ctx->pc = 0x1A1BA8u;
label_1a1ba8:
    // 0x1a1ba8: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x1a1ba8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x1a1bac: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a1bacu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a1bb0: 0x80639768  lb          $v1, -0x6898($v1)
    ctx->pc = 0x1a1bb0u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940520)));
    // 0x1a1bb4: 0x34630003  ori         $v1, $v1, 0x3
    ctx->pc = 0x1a1bb4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)3);
    // 0x1a1bb8: 0xa0439768  sb          $v1, -0x6898($v0)
    ctx->pc = 0x1a1bb8u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 4294940520), (uint8_t)GPR_U32(ctx, 3));
label_1a1bbc:
    // 0x1a1bbc: 0x3c02009f  lui         $v0, 0x9F
    ctx->pc = 0x1a1bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)159 << 16));
    // 0x1a1bc0: 0x90429778  lbu         $v0, -0x6888($v0)
    ctx->pc = 0x1a1bc0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294940536)));
    // 0x1a1bc4: 0x50400004  beql        $v0, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x1A1BC4u;
    {
        const bool branch_taken_0x1a1bc4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1a1bc4) {
            ctx->pc = 0x1A1BC8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1BC4u;
            // 0x1a1bc8: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1A1BD8u;
            goto label_1a1bd8;
        }
    }
    ctx->pc = 0x1A1BCCu;
    // 0x1a1bcc: 0xc0686fc  jal         func_1A1BF0
    ctx->pc = 0x1A1BCCu;
    SET_GPR_U32(ctx, 31, 0x1A1BD4u);
    ctx->pc = 0x1A1BF0u;
    if (runtime->hasFunction(0x1A1BF0u)) {
        auto targetFn = runtime->lookupFunction(0x1A1BF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1BD4u; }
        if (ctx->pc != 0x1A1BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001A1BF0_0x1a1bf0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1A1BD4u; }
        if (ctx->pc != 0x1A1BD4u) { return; }
    }
    ctx->pc = 0x1A1BD4u;
label_1a1bd4:
    // 0x1a1bd4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1a1bd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1a1bd8:
    // 0x1a1bd8: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x1a1bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1a1bdc: 0x3e00008  jr          $ra
    ctx->pc = 0x1A1BDCu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1A1BE0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1A1BDCu;
            // 0x1a1be0: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1A1BE4u;
    // 0x1a1be4: 0x0  nop
    ctx->pc = 0x1a1be4u;
    // NOP
    // 0x1a1be8: 0x0  nop
    ctx->pc = 0x1a1be8u;
    // NOP
    // 0x1a1bec: 0x0  nop
    ctx->pc = 0x1a1becu;
    // NOP
    ctx->pc = 0x1a1bf0u;
}
