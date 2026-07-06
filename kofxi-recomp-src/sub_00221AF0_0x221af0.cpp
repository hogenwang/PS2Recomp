#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00221AF0
// Address: 0x221af0 - 0x221be8
void sub_00221AF0_0x221af0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00221AF0_0x221af0");
#endif

    switch (ctx->pc) {
        case 0x221b28u: goto label_221b28;
        case 0x221b38u: goto label_221b38;
        case 0x221b44u: goto label_221b44;
        case 0x221b88u: goto label_221b88;
        case 0x221b98u: goto label_221b98;
        case 0x221bd4u: goto label_221bd4;
        default: break;
    }

    ctx->pc = 0x221af0u;

    // 0x221af0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x221af0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x221af4: 0xa0782d  daddu       $t7, $a1, $zero
    ctx->pc = 0x221af4u;
    SET_GPR_U64(ctx, 15, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221af8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x221af8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x221afc: 0x1480000a  bnez        $a0, . + 4 + (0xA << 2)
    ctx->pc = 0x221AFCu;
    {
        const bool branch_taken_0x221afc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        ctx->pc = 0x221B00u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221AFCu;
            // 0x221b00: 0x24050107  addiu       $a1, $zero, 0x107 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 263));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221afc) {
            ctx->pc = 0x221B28u;
            goto label_221b28;
        }
    }
    ctx->pc = 0x221B04u;
    // 0x221b04: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x221b04u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x221b08: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x221b08u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221b0c: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x221b0cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x221b10: 0x24842bb0  addiu       $a0, $a0, 0x2BB0
    ctx->pc = 0x221b10u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11184));
    // 0x221b14: 0x25082a00  addiu       $t0, $t0, 0x2A00
    ctx->pc = 0x221b14u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10752));
    // 0x221b18: 0x2406ffff  addiu       $a2, $zero, -0x1
    ctx->pc = 0x221b18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x221b1c: 0x2407d8ef  addiu       $a3, $zero, -0x2711
    ctx->pc = 0x221b1cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957295));
    // 0x221b20: 0x8089794  j           func_225E50
    ctx->pc = 0x221B20u;
    ctx->pc = 0x221B24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221B20u;
            // 0x221b24: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (runtime->hasFunction(0x225E50u)) {
        auto targetFn = runtime->lookupFunction(0x225E50u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00225E50_0x225e50(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x221B28u;
label_221b28:
    // 0x221b28: 0x15e00006  bnez        $t7, . + 4 + (0x6 << 2)
    ctx->pc = 0x221B28u;
    {
        const bool branch_taken_0x221b28 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        ctx->pc = 0x221B2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221B28u;
            // 0x221b2c: 0xac8f0020  sw          $t7, 0x20($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 32), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221b28) {
            ctx->pc = 0x221B44u;
            goto label_221b44;
        }
    }
    ctx->pc = 0x221B30u;
    // 0x221b30: 0xac80001c  sw          $zero, 0x1C($a0)
    ctx->pc = 0x221b30u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 0));
    // 0x221b34: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x221b34u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221b38:
    // 0x221b38: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x221b38u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221b3c: 0x3e00008  jr          $ra
    ctx->pc = 0x221B3Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221B40u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221B3Cu;
            // 0x221b40: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x221B44u;
label_221b44:
    // 0x221b44: 0x240f0001  addiu       $t7, $zero, 0x1
    ctx->pc = 0x221b44u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x221b48: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x221b48u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x221b4c: 0x1000fffa  b           . + 4 + (-0x6 << 2)
    ctx->pc = 0x221B4Cu;
    {
        const bool branch_taken_0x221b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x221B50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221B4Cu;
            // 0x221b50: 0xac8f001c  sw          $t7, 0x1C($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 28), GPR_U32(ctx, 15));
        ctx->in_delay_slot = false;
        if (branch_taken_0x221b4c) {
            ctx->pc = 0x221B38u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_221b38;
        }
    }
    ctx->pc = 0x221B54u;
    // 0x221b54: 0x0  nop
    ctx->pc = 0x221b54u;
    // NOP
    // 0x221b58: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x221b58u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x221b5c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x221b5cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x221b60: 0x5480000a  bnel        $a0, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x221B60u;
    {
        const bool branch_taken_0x221b60 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x221b60) {
            ctx->pc = 0x221B64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x221B60u;
            // 0x221b64: 0x8c820010  lw          $v0, 0x10($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x221B8Cu;
            goto label_221b8c;
        }
    }
    ctx->pc = 0x221B68u;
    // 0x221b68: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x221b68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x221b6c: 0x3c08003f  lui         $t0, 0x3F
    ctx->pc = 0x221b6cu;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)63 << 16));
    // 0x221b70: 0x24842bc0  addiu       $a0, $a0, 0x2BC0
    ctx->pc = 0x221b70u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 11200));
    // 0x221b74: 0x25082a00  addiu       $t0, $t0, 0x2A00
    ctx->pc = 0x221b74u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 10752));
    // 0x221b78: 0x2405011d  addiu       $a1, $zero, 0x11D
    ctx->pc = 0x221b78u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 285));
    // 0x221b7c: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x221b7cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221b80: 0xc089794  jal         func_225E50
    ctx->pc = 0x221B80u;
    SET_GPR_U32(ctx, 31, 0x221B88u);
    ctx->pc = 0x221B84u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221B80u;
            // 0x221b84: 0x2407d8ef  addiu       $a3, $zero, -0x2711 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294957295));
        ctx->in_delay_slot = false;
    ctx->pc = 0x225E50u;
    if (runtime->hasFunction(0x225E50u)) {
        auto targetFn = runtime->lookupFunction(0x225E50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221B88u; }
        if (ctx->pc != 0x221B88u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00225E50_0x225e50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221B88u; }
        if (ctx->pc != 0x221B88u) { return; }
    }
    ctx->pc = 0x221B88u;
label_221b88:
    // 0x221b88: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x221b88u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_221b8c:
    // 0x221b8c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x221b8cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221b90: 0x3e00008  jr          $ra
    ctx->pc = 0x221B90u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221B90u;
            // 0x221b94: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x221B98u;
label_221b98:
    // 0x221b98: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x221b98u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x221b9c: 0x44e02  srl         $t1, $a0, 24
    ctx->pc = 0x221b9cu;
    SET_GPR_S32(ctx, 9, (int32_t)SRL32(GPR_U32(ctx, 4), 24));
    // 0x221ba0: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x221ba0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x221ba4: 0x308600ff  andi        $a2, $a0, 0xFF
    ctx->pc = 0x221ba4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)255);
    // 0x221ba8: 0xffbf0008  sd          $ra, 0x8($sp)
    ctx->pc = 0x221ba8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 31));
    // 0x221bac: 0x43a02  srl         $a3, $a0, 8
    ctx->pc = 0x221bacu;
    SET_GPR_S32(ctx, 7, (int32_t)SRL32(GPR_U32(ctx, 4), 8));
    // 0x221bb0: 0x3c1001c1  lui         $s0, 0x1C1
    ctx->pc = 0x221bb0u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)449 << 16));
    // 0x221bb4: 0x44402  srl         $t0, $a0, 16
    ctx->pc = 0x221bb4u;
    SET_GPR_S32(ctx, 8, (int32_t)SRL32(GPR_U32(ctx, 4), 16));
    // 0x221bb8: 0x2610a5e0  addiu       $s0, $s0, -0x5A20
    ctx->pc = 0x221bb8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294944224));
    // 0x221bbc: 0x3c05003f  lui         $a1, 0x3F
    ctx->pc = 0x221bbcu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)63 << 16));
    // 0x221bc0: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x221bc0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221bc4: 0x30e700ff  andi        $a3, $a3, 0xFF
    ctx->pc = 0x221bc4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & (uint64_t)(uint16_t)255);
    // 0x221bc8: 0x310800ff  andi        $t0, $t0, 0xFF
    ctx->pc = 0x221bc8u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x221bcc: 0xc04a5f2  jal         func_1297C8
    ctx->pc = 0x221BCCu;
    SET_GPR_U32(ctx, 31, 0x221BD4u);
    ctx->pc = 0x221BD0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x221BCCu;
            // 0x221bd0: 0x24a52bd0  addiu       $a1, $a1, 0x2BD0 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 11216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1297C8u;
    if (runtime->hasFunction(0x1297C8u)) {
        auto targetFn = runtime->lookupFunction(0x1297C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221BD4u; }
        if (ctx->pc != 0x221BD4u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001297C8_0x1297c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x221BD4u; }
        if (ctx->pc != 0x221BD4u) { return; }
    }
    ctx->pc = 0x221BD4u;
label_221bd4:
    // 0x221bd4: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x221bd4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x221bd8: 0xdfbf0008  ld          $ra, 0x8($sp)
    ctx->pc = 0x221bd8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x221bdc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x221bdcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x221be0: 0x3e00008  jr          $ra
    ctx->pc = 0x221BE0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x221BE4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x221BE0u;
            // 0x221be4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x221BE8u;
    ctx->pc = 0x221be8u;
}
