#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00336AF0
// Address: 0x336af0 - 0x336c10
void sub_00336AF0_0x336af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00336AF0_0x336af0");
#endif

    switch (ctx->pc) {
        case 0x336b38u: goto label_336b38;
        case 0x336b54u: goto label_336b54;
        case 0x336b70u: goto label_336b70;
        case 0x336bb8u: goto label_336bb8;
        case 0x336bd4u: goto label_336bd4;
        case 0x336bf0u: goto label_336bf0;
        default: break;
    }

    ctx->pc = 0x336af0u;

    // 0x336af0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x336af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x336af4: 0x52e3c  dsll32      $a1, $a1, 24
    ctx->pc = 0x336af4u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) << (32 + 24));
    // 0x336af8: 0x52e3f  dsra32      $a1, $a1, 24
    ctx->pc = 0x336af8u;
    SET_GPR_S64(ctx, 5, GPR_S64(ctx, 5) >> (32 + 24));
    // 0x336afc: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x336afcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x336b00: 0x1040001e  beqz        $v0, . + 4 + (0x1E << 2)
    ctx->pc = 0x336B00u;
    {
        const bool branch_taken_0x336b00 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x336B04u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336B00u;
            // 0x336b04: 0xffbf0000  sd          $ra, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336b00) {
            ctx->pc = 0x336B7Cu;
            goto label_336b7c;
        }
    }
    ctx->pc = 0x336B08u;
    // 0x336b08: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x336b08u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x336b0c: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x336b0cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x336b10: 0x9442ea22  lhu         $v0, -0x15DE($v0)
    ctx->pc = 0x336b10u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961698)));
    // 0x336b14: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x336b14u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x336b18: 0x50400019  beql        $v0, $zero, . + 4 + (0x19 << 2)
    ctx->pc = 0x336B18u;
    {
        const bool branch_taken_0x336b18 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x336b18) {
            ctx->pc = 0x336B1Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x336B18u;
            // 0x336b1c: 0x30a20002  andi        $v0, $a1, 0x2 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
        ctx->in_delay_slot = false;
            ctx->pc = 0x336B80u;
            goto label_336b80;
        }
    }
    ctx->pc = 0x336B20u;
    // 0x336b20: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x336b20u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x336b24: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x336B24u;
    {
        const bool branch_taken_0x336b24 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x336b24) {
            ctx->pc = 0x336B28u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x336B24u;
            // 0x336b28: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
            ctx->pc = 0x336B40u;
            goto label_336b40;
        }
    }
    ctx->pc = 0x336B2Cu;
    // 0x336b2c: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x336b2cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x336b30: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x336B30u;
    SET_GPR_U32(ctx, 31, 0x336B38u);
    ctx->pc = 0x336B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336B30u;
            // 0x336b34: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336B38u; }
        if (ctx->pc != 0x336B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336B38u; }
        if (ctx->pc != 0x336B38u) { return; }
    }
    ctx->pc = 0x336B38u;
label_336b38:
    // 0x336b38: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x336B38u;
    {
        const bool branch_taken_0x336b38 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336B3Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336B38u;
            // 0x336b3c: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336b38) {
            ctx->pc = 0x336B74u;
            goto label_336b74;
        }
    }
    ctx->pc = 0x336B40u;
label_336b40:
    // 0x336b40: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x336B40u;
    {
        const bool branch_taken_0x336b40 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x336b40) {
            ctx->pc = 0x336B44u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x336B40u;
            // 0x336b44: 0x306200f0  andi        $v0, $v1, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
        ctx->in_delay_slot = false;
            ctx->pc = 0x336B5Cu;
            goto label_336b5c;
        }
    }
    ctx->pc = 0x336B48u;
    // 0x336b48: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x336b48u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x336b4c: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x336B4Cu;
    SET_GPR_U32(ctx, 31, 0x336B54u);
    ctx->pc = 0x336B50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336B4Cu;
            // 0x336b50: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336B54u; }
        if (ctx->pc != 0x336B54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336B54u; }
        if (ctx->pc != 0x336B54u) { return; }
    }
    ctx->pc = 0x336B54u;
label_336b54:
    // 0x336b54: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x336B54u;
    {
        const bool branch_taken_0x336b54 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336b54) {
            ctx->pc = 0x336B70u;
            goto label_336b70;
        }
    }
    ctx->pc = 0x336B5Cu;
label_336b5c:
    // 0x336b5c: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x336B5Cu;
    {
        const bool branch_taken_0x336b5c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x336b5c) {
            ctx->pc = 0x336B70u;
            goto label_336b70;
        }
    }
    ctx->pc = 0x336B64u;
    // 0x336b64: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x336b64u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x336b68: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x336B68u;
    SET_GPR_U32(ctx, 31, 0x336B70u);
    ctx->pc = 0x336B6Cu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336B68u;
            // 0x336b6c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336B70u; }
        if (ctx->pc != 0x336B70u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336B70u; }
        if (ctx->pc != 0x336B70u) { return; }
    }
    ctx->pc = 0x336B70u;
label_336b70:
    // 0x336b70: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x336b70u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_336b74:
    // 0x336b74: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x336B74u;
    {
        const bool branch_taken_0x336b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336B78u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336B74u;
            // 0x336b78: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336b74) {
            ctx->pc = 0x336C04u;
            goto label_336c04;
        }
    }
    ctx->pc = 0x336B7Cu;
label_336b7c:
    // 0x336b7c: 0x30a20002  andi        $v0, $a1, 0x2
    ctx->pc = 0x336b7cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)2);
label_336b80:
    // 0x336b80: 0x5040001f  beql        $v0, $zero, . + 4 + (0x1F << 2)
    ctx->pc = 0x336B80u;
    {
        const bool branch_taken_0x336b80 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x336b80) {
            ctx->pc = 0x336B84u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x336B80u;
            // 0x336b84: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x336C00u;
            goto label_336c00;
        }
    }
    ctx->pc = 0x336B88u;
    // 0x336b88: 0x3c02009c  lui         $v0, 0x9C
    ctx->pc = 0x336b88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)156 << 16));
    // 0x336b8c: 0x3083ffff  andi        $v1, $a0, 0xFFFF
    ctx->pc = 0x336b8cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x336b90: 0x9442ea2e  lhu         $v0, -0x15D2($v0)
    ctx->pc = 0x336b90u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294961710)));
    // 0x336b94: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x336b94u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x336b98: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x336B98u;
    {
        const bool branch_taken_0x336b98 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x336b98) {
            ctx->pc = 0x336BFCu;
            goto label_336bfc;
        }
    }
    ctx->pc = 0x336BA0u;
    // 0x336ba0: 0x30622000  andi        $v0, $v1, 0x2000
    ctx->pc = 0x336ba0u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x336ba4: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x336BA4u;
    {
        const bool branch_taken_0x336ba4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x336ba4) {
            ctx->pc = 0x336BA8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x336BA4u;
            // 0x336ba8: 0x30624000  andi        $v0, $v1, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
            ctx->pc = 0x336BC0u;
            goto label_336bc0;
        }
    }
    ctx->pc = 0x336BACu;
    // 0x336bac: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x336bacu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x336bb0: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x336BB0u;
    SET_GPR_U32(ctx, 31, 0x336BB8u);
    ctx->pc = 0x336BB4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336BB0u;
            // 0x336bb4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336BB8u; }
        if (ctx->pc != 0x336BB8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336BB8u; }
        if (ctx->pc != 0x336BB8u) { return; }
    }
    ctx->pc = 0x336BB8u;
label_336bb8:
    // 0x336bb8: 0x1000000e  b           . + 4 + (0xE << 2)
    ctx->pc = 0x336BB8u;
    {
        const bool branch_taken_0x336bb8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x336BBCu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336BB8u;
            // 0x336bbc: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x336bb8) {
            ctx->pc = 0x336BF4u;
            goto label_336bf4;
        }
    }
    ctx->pc = 0x336BC0u;
label_336bc0:
    // 0x336bc0: 0x50400006  beql        $v0, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x336BC0u;
    {
        const bool branch_taken_0x336bc0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x336bc0) {
            ctx->pc = 0x336BC4u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x336BC0u;
            // 0x336bc4: 0x306200f0  andi        $v0, $v1, 0xF0 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)240);
        ctx->in_delay_slot = false;
            ctx->pc = 0x336BDCu;
            goto label_336bdc;
        }
    }
    ctx->pc = 0x336BC8u;
    // 0x336bc8: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x336bc8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x336bcc: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x336BCCu;
    SET_GPR_U32(ctx, 31, 0x336BD4u);
    ctx->pc = 0x336BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336BCCu;
            // 0x336bd0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336BD4u; }
        if (ctx->pc != 0x336BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336BD4u; }
        if (ctx->pc != 0x336BD4u) { return; }
    }
    ctx->pc = 0x336BD4u;
label_336bd4:
    // 0x336bd4: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x336BD4u;
    {
        const bool branch_taken_0x336bd4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336bd4) {
            ctx->pc = 0x336BF0u;
            goto label_336bf0;
        }
    }
    ctx->pc = 0x336BDCu;
label_336bdc:
    // 0x336bdc: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x336BDCu;
    {
        const bool branch_taken_0x336bdc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x336bdc) {
            ctx->pc = 0x336BF0u;
            goto label_336bf0;
        }
    }
    ctx->pc = 0x336BE4u;
    // 0x336be4: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x336be4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x336be8: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x336BE8u;
    SET_GPR_U32(ctx, 31, 0x336BF0u);
    ctx->pc = 0x336BECu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x336BE8u;
            // 0x336bec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (runtime->hasFunction(0x14E3F0u)) {
        auto targetFn = runtime->lookupFunction(0x14E3F0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336BF0u; }
        if (ctx->pc != 0x336BF0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0014E3F0_0x14e3f0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x336BF0u; }
        if (ctx->pc != 0x336BF0u) { return; }
    }
    ctx->pc = 0x336BF0u;
label_336bf0:
    // 0x336bf0: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x336bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_336bf4:
    // 0x336bf4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x336BF4u;
    {
        const bool branch_taken_0x336bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x336bf4) {
            ctx->pc = 0x336C00u;
            goto label_336c00;
        }
    }
    ctx->pc = 0x336BFCu;
label_336bfc:
    // 0x336bfc: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x336bfcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_336c00:
    // 0x336c00: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x336c00u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_336c04:
    // 0x336c04: 0x3e00008  jr          $ra
    ctx->pc = 0x336C04u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x336C08u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x336C04u;
            // 0x336c08: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x336C0Cu;
    // 0x336c0c: 0x0  nop
    ctx->pc = 0x336c0cu;
    // NOP
    ctx->pc = 0x336c10u;
}
