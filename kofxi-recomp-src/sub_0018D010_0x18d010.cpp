#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0018D010
// Address: 0x18d010 - 0x18d3e0
void sub_0018D010_0x18d010(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0018D010_0x18d010");
#endif

    switch (ctx->pc) {
        case 0x18d034u: goto label_18d034;
        case 0x18d0d8u: goto label_18d0d8;
        case 0x18d29cu: goto label_18d29c;
        default: break;
    }

    ctx->pc = 0x18d010u;

    // 0x18d010: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x18d010u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x18d014: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x18d014u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x18d018: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x18d018u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x18d01c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x18d01cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x18d020: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x18d020u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d024: 0xc0882d  daddu       $s1, $a2, $zero
    ctx->pc = 0x18d024u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d028: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x18d028u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x18d02c: 0xc062948  jal         func_18A520
    ctx->pc = 0x18D02Cu;
    SET_GPR_U32(ctx, 31, 0x18D034u);
    ctx->pc = 0x18D030u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D02Cu;
            // 0x18d030: 0x220202d  daddu       $a0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18A520u;
    if (runtime->hasFunction(0x18A520u)) {
        auto targetFn = runtime->lookupFunction(0x18A520u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D034u; }
        if (ctx->pc != 0x18D034u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018A520_0x18a520(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D034u; }
        if (ctx->pc != 0x18D034u) { return; }
    }
    ctx->pc = 0x18D034u;
label_18d034:
    // 0x18d034: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x18d034u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x18d038: 0x621823  subu        $v1, $v1, $v0
    ctx->pc = 0x18d038u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x18d03c: 0x3843c  dsll32      $s0, $v1, 16
    ctx->pc = 0x18d03cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 3) << (32 + 16));
    // 0x18d040: 0x10843f  dsra32      $s0, $s0, 16
    ctx->pc = 0x18d040u;
    SET_GPR_S64(ctx, 16, GPR_S64(ctx, 16) >> (32 + 16));
    // 0x18d044: 0x5e000003  bgtzl       $s0, . + 4 + (0x3 << 2)
    ctx->pc = 0x18D044u;
    {
        const bool branch_taken_0x18d044 = (GPR_S32(ctx, 16) > 0);
        if (branch_taken_0x18d044) {
            ctx->pc = 0x18D048u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18D044u;
            // 0x18d048: 0x24030001  addiu       $v1, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18D054u;
            goto label_18d054;
        }
    }
    ctx->pc = 0x18D04Cu;
    // 0x18d04c: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x18d04cu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x18d050: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18d050u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_18d054:
    // 0x18d054: 0x12430077  beq         $s2, $v1, . + 4 + (0x77 << 2)
    ctx->pc = 0x18D054u;
    {
        const bool branch_taken_0x18d054 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 3));
        if (branch_taken_0x18d054) {
            ctx->pc = 0x18D234u;
            goto label_18d234;
        }
    }
    ctx->pc = 0x18D05Cu;
    // 0x18d05c: 0x12400003  beqz        $s2, . + 4 + (0x3 << 2)
    ctx->pc = 0x18D05Cu;
    {
        const bool branch_taken_0x18d05c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d05c) {
            ctx->pc = 0x18D06Cu;
            goto label_18d06c;
        }
    }
    ctx->pc = 0x18D064u;
    // 0x18d064: 0x100000d9  b           . + 4 + (0xD9 << 2)
    ctx->pc = 0x18D064u;
    {
        const bool branch_taken_0x18d064 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D068u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D064u;
            // 0x18d068: 0xdfbf0030  ld          $ra, 0x30($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d064) {
            ctx->pc = 0x18D3CCu;
            goto label_18d3cc;
        }
    }
    ctx->pc = 0x18D06Cu;
label_18d06c:
    // 0x18d06c: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x18d06cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x18d070: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x18d070u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18d074: 0x90659780  lbu         $a1, -0x6880($v1)
    ctx->pc = 0x18d074u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x18d078: 0x54a40013  bnel        $a1, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x18D078u;
    {
        const bool branch_taken_0x18d078 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x18d078) {
            ctx->pc = 0x18D07Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18D078u;
            // 0x18d07c: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18D0C8u;
            goto label_18d0c8;
        }
    }
    ctx->pc = 0x18D080u;
    // 0x18d080: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x18d080u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x18d084: 0x9063b246  lbu         $v1, -0x4DBA($v1)
    ctx->pc = 0x18d084u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947398)));
    // 0x18d088: 0x28630002  slti        $v1, $v1, 0x2
    ctx->pc = 0x18d088u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)2) ? 1 : 0);
    // 0x18d08c: 0x1460000d  bnez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x18D08Cu;
    {
        const bool branch_taken_0x18d08c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d08c) {
            ctx->pc = 0x18D0C4u;
            goto label_18d0c4;
        }
    }
    ctx->pc = 0x18D094u;
    // 0x18d094: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x18d094u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x18d098: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18d098u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18d09c: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x18d09cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18d0a0: 0x2463db88  addiu       $v1, $v1, -0x2478
    ctx->pc = 0x18d0a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957960));
    // 0x18d0a4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18d0a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18d0a8: 0x24060230  addiu       $a2, $zero, 0x230
    ctx->pc = 0x18d0a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x18d0ac: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18d0acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18d0b0: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18d0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18d0b4: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18d0b4u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18d0b8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18d0b8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18d0bc: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x18D0BCu;
    {
        const bool branch_taken_0x18d0bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D0C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D0BCu;
            // 0x18d0c0: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d0bc) {
            ctx->pc = 0x18D1B8u;
            goto label_18d1b8;
        }
    }
    ctx->pc = 0x18D0C4u;
label_18d0c4:
    // 0x18d0c4: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x18d0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_18d0c8:
    // 0x18d0c8: 0x14a30012  bne         $a1, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x18D0C8u;
    {
        const bool branch_taken_0x18d0c8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x18d0c8) {
            ctx->pc = 0x18D114u;
            goto label_18d114;
        }
    }
    ctx->pc = 0x18D0D0u;
    // 0x18d0d0: 0xc0d0bb8  jal         func_342EE0
    ctx->pc = 0x18D0D0u;
    SET_GPR_U32(ctx, 31, 0x18D0D8u);
    ctx->pc = 0x18D0D4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D0D0u;
            // 0x18d0d4: 0x322400ff  andi        $a0, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x342EE0u;
    if (runtime->hasFunction(0x342EE0u)) {
        auto targetFn = runtime->lookupFunction(0x342EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D0D8u; }
        if (ctx->pc != 0x18D0D8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00342EE0_0x342ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D0D8u; }
        if (ctx->pc != 0x18D0D8u) { return; }
    }
    ctx->pc = 0x18D0D8u;
label_18d0d8:
    // 0x18d0d8: 0x2841fffb  slti        $at, $v0, -0x5
    ctx->pc = 0x18d0d8u;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967291) ? 1 : 0);
    // 0x18d0dc: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x18D0DCu;
    {
        const bool branch_taken_0x18d0dc = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d0dc) {
            ctx->pc = 0x18D114u;
            goto label_18d114;
        }
    }
    ctx->pc = 0x18D0E4u;
    // 0x18d0e4: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x18d0e4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x18d0e8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18d0e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18d0ec: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x18d0ecu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18d0f0: 0x2463db88  addiu       $v1, $v1, -0x2478
    ctx->pc = 0x18d0f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957960));
    // 0x18d0f4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18d0f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18d0f8: 0x24060230  addiu       $a2, $zero, 0x230
    ctx->pc = 0x18d0f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x18d0fc: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18d0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18d100: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18d100u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18d104: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18d104u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18d108: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18d108u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18d10c: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x18D10Cu;
    {
        const bool branch_taken_0x18d10c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D110u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D10Cu;
            // 0x18d110: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d10c) {
            ctx->pc = 0x18D1B8u;
            goto label_18d1b8;
        }
    }
    ctx->pc = 0x18D114u;
label_18d114:
    // 0x18d114: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x18d114u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x18d118: 0x3c04ff00  lui         $a0, 0xFF00
    ctx->pc = 0x18d118u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65280 << 16));
    // 0x18d11c: 0x8c639478  lw          $v1, -0x6B88($v1)
    ctx->pc = 0x18d11cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939768)));
    // 0x18d120: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x18d120u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x18d124: 0x54600025  bnel        $v1, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x18D124u;
    {
        const bool branch_taken_0x18d124 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d124) {
            ctx->pc = 0x18D128u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18D124u;
            // 0x18d128: 0x322400ff  andi        $a0, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x18D1BCu;
            goto label_18d1bc;
        }
    }
    ctx->pc = 0x18D12Cu;
    // 0x18d12c: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x18d12cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x18d130: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x18d130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18d134: 0x90659780  lbu         $a1, -0x6880($v1)
    ctx->pc = 0x18d134u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x18d138: 0x10a4001f  beq         $a1, $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x18D138u;
    {
        const bool branch_taken_0x18d138 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x18d138) {
            ctx->pc = 0x18D1B8u;
            goto label_18d1b8;
        }
    }
    ctx->pc = 0x18D140u;
    // 0x18d140: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x18d140u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x18d144: 0x10a3001c  beq         $a1, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x18D144u;
    {
        const bool branch_taken_0x18d144 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x18d144) {
            ctx->pc = 0x18D1B8u;
            goto label_18d1b8;
        }
    }
    ctx->pc = 0x18D14Cu;
    // 0x18d14c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x18d14cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x18d150: 0x10a30019  beq         $a1, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x18D150u;
    {
        const bool branch_taken_0x18d150 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x18d150) {
            ctx->pc = 0x18D1B8u;
            goto label_18d1b8;
        }
    }
    ctx->pc = 0x18D158u;
    // 0x18d158: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18d158u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18d15c: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x18d15cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x18d160: 0x9463dab0  lhu         $v1, -0x2550($v1)
    ctx->pc = 0x18d160u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957744)));
    // 0x18d164: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x18d164u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x18d168: 0x10640013  beq         $v1, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x18D168u;
    {
        const bool branch_taken_0x18d168 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x18d168) {
            ctx->pc = 0x18D1B8u;
            goto label_18d1b8;
        }
    }
    ctx->pc = 0x18D170u;
    // 0x18d170: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x18d170u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x18d174: 0x322600ff  andi        $a2, $s1, 0xFF
    ctx->pc = 0x18d174u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x18d178: 0x2463b277  addiu       $v1, $v1, -0x4D89
    ctx->pc = 0x18d178u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947447));
    // 0x18d17c: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x18d17cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18d180: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x18d180u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18d184: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18d184u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d188: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x18D188u;
    {
        const bool branch_taken_0x18d188 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x18d188) {
            ctx->pc = 0x18D1B8u;
            goto label_18d1b8;
        }
    }
    ctx->pc = 0x18D190u;
    // 0x18d190: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x18d190u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x18d194: 0x24050230  addiu       $a1, $zero, 0x230
    ctx->pc = 0x18d194u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x18d198: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x18d198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18d19c: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18d19cu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18d1a0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18d1a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18d1a4: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x18d1a4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x18d1a8: 0x2463db88  addiu       $v1, $v1, -0x2478
    ctx->pc = 0x18d1a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957960));
    // 0x18d1ac: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18d1acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18d1b0: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18d1b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18d1b4: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x18d1b4u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_18d1b8:
    // 0x18d1b8: 0x322400ff  andi        $a0, $s1, 0xFF
    ctx->pc = 0x18d1b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_18d1bc:
    // 0x18d1bc: 0x10343c  dsll32      $a2, $s0, 16
    ctx->pc = 0x18d1bcu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 16) << (32 + 16));
    // 0x18d1c0: 0x418c0  sll         $v1, $a0, 3
    ctx->pc = 0x18d1c0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18d1c4: 0x6343f  dsra32      $a2, $a2, 16
    ctx->pc = 0x18d1c4u;
    SET_GPR_S64(ctx, 6, GPR_S64(ctx, 6) >> (32 + 16));
    // 0x18d1c8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18d1c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18d1cc: 0x628c0  sll         $a1, $a2, 3
    ctx->pc = 0x18d1ccu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x18d1d0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x18d1d0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18d1d4: 0xa62823  subu        $a1, $a1, $a2
    ctx->pc = 0x18d1d4u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x18d1d8: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18d1d8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18d1dc: 0x52900  sll         $a1, $a1, 4
    ctx->pc = 0x18d1dcu;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 4));
    // 0x18d1e0: 0x320c0  sll         $a0, $v1, 3
    ctx->pc = 0x18d1e0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x18d1e4: 0x24a50150  addiu       $a1, $a1, 0x150
    ctx->pc = 0x18d1e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 336));
    // 0x18d1e8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18d1e8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18d1ec: 0x2463db88  addiu       $v1, $v1, -0x2478
    ctx->pc = 0x18d1ecu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957960));
    // 0x18d1f0: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x18d1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18d1f4: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18d1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18d1f8: 0x65182a  slt         $v1, $v1, $a1
    ctx->pc = 0x18d1f8u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x18d1fc: 0x54600003  bnel        $v1, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x18D1FCu;
    {
        const bool branch_taken_0x18d1fc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d1fc) {
            ctx->pc = 0x18D200u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18D1FCu;
            // 0x18d200: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18D20Cu;
            goto label_18d20c;
        }
    }
    ctx->pc = 0x18D204u;
    // 0x18d204: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x18d204u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x18d208: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18d208u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18d20c:
    // 0x18d20c: 0x28630230  slti        $v1, $v1, 0x230
    ctx->pc = 0x18d20cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)560) ? 1 : 0);
    // 0x18d210: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18D210u;
    {
        const bool branch_taken_0x18d210 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d210) {
            ctx->pc = 0x18D214u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18D210u;
            // 0x18d214: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18D224u;
            goto label_18d224;
        }
    }
    ctx->pc = 0x18D218u;
    // 0x18d218: 0x24030230  addiu       $v1, $zero, 0x230
    ctx->pc = 0x18d218u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 560));
    // 0x18d21c: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x18d21cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x18d220: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18d220u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18d224:
    // 0x18d224: 0x1c600068  bgtz        $v1, . + 4 + (0x68 << 2)
    ctx->pc = 0x18D224u;
    {
        const bool branch_taken_0x18d224 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x18d224) {
            ctx->pc = 0x18D3C8u;
            goto label_18d3c8;
        }
    }
    ctx->pc = 0x18D22Cu;
    // 0x18d22c: 0x10000066  b           . + 4 + (0x66 << 2)
    ctx->pc = 0x18D22Cu;
    {
        const bool branch_taken_0x18d22c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D230u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D22Cu;
            // 0x18d230: 0xac800000  sw          $zero, 0x0($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d22c) {
            ctx->pc = 0x18D3C8u;
            goto label_18d3c8;
        }
    }
    ctx->pc = 0x18D234u;
label_18d234:
    // 0x18d234: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x18d234u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x18d238: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x18d238u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18d23c: 0x90659780  lbu         $a1, -0x6880($v1)
    ctx->pc = 0x18d23cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x18d240: 0x54a40012  bnel        $a1, $a0, . + 4 + (0x12 << 2)
    ctx->pc = 0x18D240u;
    {
        const bool branch_taken_0x18d240 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x18d240) {
            ctx->pc = 0x18D244u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18D240u;
            // 0x18d244: 0x2403000d  addiu       $v1, $zero, 0xD (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18D28Cu;
            goto label_18d28c;
        }
    }
    ctx->pc = 0x18D248u;
    // 0x18d248: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x18d248u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x18d24c: 0x9063b246  lbu         $v1, -0x4DBA($v1)
    ctx->pc = 0x18d24cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947398)));
    // 0x18d250: 0x1860000d  blez        $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x18D250u;
    {
        const bool branch_taken_0x18d250 = (GPR_S32(ctx, 3) <= 0);
        if (branch_taken_0x18d250) {
            ctx->pc = 0x18D288u;
            goto label_18d288;
        }
    }
    ctx->pc = 0x18D258u;
    // 0x18d258: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x18d258u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x18d25c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18d25cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18d260: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x18d260u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18d264: 0x2463db8c  addiu       $v1, $v1, -0x2474
    ctx->pc = 0x18d264u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957964));
    // 0x18d268: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18d268u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18d26c: 0x240600e0  addiu       $a2, $zero, 0xE0
    ctx->pc = 0x18d26cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x18d270: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18d270u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18d274: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18d274u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18d278: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18d278u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18d27c: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18d27cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18d280: 0x1000003e  b           . + 4 + (0x3E << 2)
    ctx->pc = 0x18D280u;
    {
        const bool branch_taken_0x18d280 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D284u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D280u;
            // 0x18d284: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d280) {
            ctx->pc = 0x18D37Cu;
            goto label_18d37c;
        }
    }
    ctx->pc = 0x18D288u;
label_18d288:
    // 0x18d288: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x18d288u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_18d28c:
    // 0x18d28c: 0x14a30012  bne         $a1, $v1, . + 4 + (0x12 << 2)
    ctx->pc = 0x18D28Cu;
    {
        const bool branch_taken_0x18d28c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x18d28c) {
            ctx->pc = 0x18D2D8u;
            goto label_18d2d8;
        }
    }
    ctx->pc = 0x18D294u;
    // 0x18d294: 0xc0d0bb8  jal         func_342EE0
    ctx->pc = 0x18D294u;
    SET_GPR_U32(ctx, 31, 0x18D29Cu);
    ctx->pc = 0x18D298u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x18D294u;
            // 0x18d298: 0x322400ff  andi        $a0, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 4, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
    ctx->pc = 0x342EE0u;
    if (runtime->hasFunction(0x342EE0u)) {
        auto targetFn = runtime->lookupFunction(0x342EE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D29Cu; }
        if (ctx->pc != 0x18D29Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00342EE0_0x342ee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x18D29Cu; }
        if (ctx->pc != 0x18D29Cu) { return; }
    }
    ctx->pc = 0x18D29Cu;
label_18d29c:
    // 0x18d29c: 0x2841fffb  slti        $at, $v0, -0x5
    ctx->pc = 0x18d29cu;
    SET_GPR_U64(ctx, 1, ((int64_t)GPR_S64(ctx, 2) < (int64_t)(int32_t)4294967291) ? 1 : 0);
    // 0x18d2a0: 0x1020000d  beqz        $at, . + 4 + (0xD << 2)
    ctx->pc = 0x18D2A0u;
    {
        const bool branch_taken_0x18d2a0 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x18d2a0) {
            ctx->pc = 0x18D2D8u;
            goto label_18d2d8;
        }
    }
    ctx->pc = 0x18D2A8u;
    // 0x18d2a8: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x18d2a8u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x18d2ac: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18d2acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18d2b0: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x18d2b0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18d2b4: 0x2463db8c  addiu       $v1, $v1, -0x2474
    ctx->pc = 0x18d2b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957964));
    // 0x18d2b8: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18d2b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18d2bc: 0x240600e0  addiu       $a2, $zero, 0xE0
    ctx->pc = 0x18d2bcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x18d2c0: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18d2c0u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18d2c4: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18d2c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18d2c8: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18d2c8u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18d2cc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18d2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18d2d0: 0x1000002a  b           . + 4 + (0x2A << 2)
    ctx->pc = 0x18D2D0u;
    {
        const bool branch_taken_0x18d2d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x18D2D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D2D0u;
            // 0x18d2d4: 0xac660000  sw          $a2, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x18d2d0) {
            ctx->pc = 0x18D37Cu;
            goto label_18d37c;
        }
    }
    ctx->pc = 0x18D2D8u;
label_18d2d8:
    // 0x18d2d8: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x18d2d8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x18d2dc: 0x3c04ff00  lui         $a0, 0xFF00
    ctx->pc = 0x18d2dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65280 << 16));
    // 0x18d2e0: 0x8c639478  lw          $v1, -0x6B88($v1)
    ctx->pc = 0x18d2e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294939768)));
    // 0x18d2e4: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x18d2e4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x18d2e8: 0x54600025  bnel        $v1, $zero, . + 4 + (0x25 << 2)
    ctx->pc = 0x18D2E8u;
    {
        const bool branch_taken_0x18d2e8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d2e8) {
            ctx->pc = 0x18D2ECu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18D2E8u;
            // 0x18d2ec: 0x322500ff  andi        $a1, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x18D380u;
            goto label_18d380;
        }
    }
    ctx->pc = 0x18D2F0u;
    // 0x18d2f0: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x18d2f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x18d2f4: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x18d2f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x18d2f8: 0x90659780  lbu         $a1, -0x6880($v1)
    ctx->pc = 0x18d2f8u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x18d2fc: 0x10a4001f  beq         $a1, $a0, . + 4 + (0x1F << 2)
    ctx->pc = 0x18D2FCu;
    {
        const bool branch_taken_0x18d2fc = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x18d2fc) {
            ctx->pc = 0x18D37Cu;
            goto label_18d37c;
        }
    }
    ctx->pc = 0x18D304u;
    // 0x18d304: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x18d304u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x18d308: 0x10a3001c  beq         $a1, $v1, . + 4 + (0x1C << 2)
    ctx->pc = 0x18D308u;
    {
        const bool branch_taken_0x18d308 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x18d308) {
            ctx->pc = 0x18D37Cu;
            goto label_18d37c;
        }
    }
    ctx->pc = 0x18D310u;
    // 0x18d310: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x18d310u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x18d314: 0x10a30019  beq         $a1, $v1, . + 4 + (0x19 << 2)
    ctx->pc = 0x18D314u;
    {
        const bool branch_taken_0x18d314 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x18d314) {
            ctx->pc = 0x18D37Cu;
            goto label_18d37c;
        }
    }
    ctx->pc = 0x18D31Cu;
    // 0x18d31c: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18d31cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18d320: 0x24040100  addiu       $a0, $zero, 0x100
    ctx->pc = 0x18d320u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    // 0x18d324: 0x9463dab0  lhu         $v1, -0x2550($v1)
    ctx->pc = 0x18d324u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957744)));
    // 0x18d328: 0x3063ff00  andi        $v1, $v1, 0xFF00
    ctx->pc = 0x18d328u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)65280);
    // 0x18d32c: 0x10640013  beq         $v1, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x18D32Cu;
    {
        const bool branch_taken_0x18d32c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 4));
        if (branch_taken_0x18d32c) {
            ctx->pc = 0x18D37Cu;
            goto label_18d37c;
        }
    }
    ctx->pc = 0x18D334u;
    // 0x18d334: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x18d334u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x18d338: 0x322600ff  andi        $a2, $s1, 0xFF
    ctx->pc = 0x18d338u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
    // 0x18d33c: 0x2463b279  addiu       $v1, $v1, -0x4D87
    ctx->pc = 0x18d33cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947449));
    // 0x18d340: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x18d340u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18d344: 0x90840000  lbu         $a0, 0x0($a0)
    ctx->pc = 0x18d344u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18d348: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x18d348u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x18d34c: 0x1483000b  bne         $a0, $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x18D34Cu;
    {
        const bool branch_taken_0x18d34c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x18d34c) {
            ctx->pc = 0x18D37Cu;
            goto label_18d37c;
        }
    }
    ctx->pc = 0x18D354u;
    // 0x18d354: 0x618c0  sll         $v1, $a2, 3
    ctx->pc = 0x18d354u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 6), 3));
    // 0x18d358: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x18d358u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x18d35c: 0x662021  addu        $a0, $v1, $a2
    ctx->pc = 0x18d35cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 6)));
    // 0x18d360: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18d360u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18d364: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18d364u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18d368: 0x862021  addu        $a0, $a0, $a2
    ctx->pc = 0x18d368u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 6)));
    // 0x18d36c: 0x2463db8c  addiu       $v1, $v1, -0x2474
    ctx->pc = 0x18d36cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957964));
    // 0x18d370: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18d370u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18d374: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x18d374u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18d378: 0xac650000  sw          $a1, 0x0($v1)
    ctx->pc = 0x18d378u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 5));
label_18d37c:
    // 0x18d37c: 0x322500ff  andi        $a1, $s1, 0xFF
    ctx->pc = 0x18d37cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_18d380:
    // 0x18d380: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x18d380u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x18d384: 0x520c0  sll         $a0, $a1, 3
    ctx->pc = 0x18d384u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 5), 3));
    // 0x18d388: 0x2463db8c  addiu       $v1, $v1, -0x2474
    ctx->pc = 0x18d388u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294957964));
    // 0x18d38c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18d38cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18d390: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18d390u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18d394: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x18d394u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x18d398: 0x420c0  sll         $a0, $a0, 3
    ctx->pc = 0x18d398u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 3));
    // 0x18d39c: 0x642021  addu        $a0, $v1, $a0
    ctx->pc = 0x18d39cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x18d3a0: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18d3a0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x18d3a4: 0x286300e0  slti        $v1, $v1, 0xE0
    ctx->pc = 0x18d3a4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)(int32_t)224) ? 1 : 0);
    // 0x18d3a8: 0x54600004  bnel        $v1, $zero, . + 4 + (0x4 << 2)
    ctx->pc = 0x18D3A8u;
    {
        const bool branch_taken_0x18d3a8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x18d3a8) {
            ctx->pc = 0x18D3ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x18D3A8u;
            // 0x18d3ac: 0x8c830000  lw          $v1, 0x0($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x18D3BCu;
            goto label_18d3bc;
        }
    }
    ctx->pc = 0x18D3B0u;
    // 0x18d3b0: 0x240300e0  addiu       $v1, $zero, 0xE0
    ctx->pc = 0x18d3b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x18d3b4: 0xac830000  sw          $v1, 0x0($a0)
    ctx->pc = 0x18d3b4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 3));
    // 0x18d3b8: 0x8c830000  lw          $v1, 0x0($a0)
    ctx->pc = 0x18d3b8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
label_18d3bc:
    // 0x18d3bc: 0x1c600002  bgtz        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x18D3BCu;
    {
        const bool branch_taken_0x18d3bc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x18d3bc) {
            ctx->pc = 0x18D3C8u;
            goto label_18d3c8;
        }
    }
    ctx->pc = 0x18D3C4u;
    // 0x18d3c4: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x18d3c4u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0));
label_18d3c8:
    // 0x18d3c8: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x18d3c8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
label_18d3cc:
    // 0x18d3cc: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x18d3ccu;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x18d3d0: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x18d3d0u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x18d3d4: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x18d3d4u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x18d3d8: 0x3e00008  jr          $ra
    ctx->pc = 0x18D3D8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x18D3DCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x18D3D8u;
            // 0x18d3dc: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x18D3E0u;
    ctx->pc = 0x18d3e0u;
}
