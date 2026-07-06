#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00102B20
// Address: 0x102b20 - 0x102bd0
void sub_00102B20_0x102b20(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00102B20_0x102b20");
#endif

    switch (ctx->pc) {
        case 0x102b38u: goto label_102b38;
        case 0x102ba0u: goto label_102ba0;
        case 0x102bb8u: goto label_102bb8;
        default: break;
    }

    ctx->pc = 0x102b20u;

    // 0x102b20: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x102b20u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x102b24: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x102b24u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x102b28: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x102b28u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x102b2c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x102b2cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102b30: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x102B30u;
    SET_GPR_U32(ctx, 31, 0x102B38u);
    ctx->pc = 0x102B34u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x102B30u;
            // 0x102b34: 0xffb00000  sd          $s0, 0x0($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102B38u; }
        if (ctx->pc != 0x102B38u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102B38u; }
        if (ctx->pc != 0x102B38u) { return; }
    }
    ctx->pc = 0x102B38u;
label_102b38:
    // 0x102b38: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x102b38u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x102b3c: 0x3c040001  lui         $a0, 0x1
    ctx->pc = 0x102b3cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)1 << 16));
    // 0x102b40: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x102b40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
    // 0x102b44: 0x3442f520  ori         $v0, $v0, 0xF520
    ctx->pc = 0x102b44u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62752);
    // 0x102b48: 0x8c460000  lw          $a2, 0x0($v0)
    ctx->pc = 0x102b48u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x102b4c: 0xc41824  and         $v1, $a2, $a0
    ctx->pc = 0x102b4cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & GPR_U64(ctx, 4));
    // 0x102b50: 0x14600005  bnez        $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x102B50u;
    {
        const bool branch_taken_0x102b50 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x102B54u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102B50u;
            // 0x102b54: 0x3c021000  lui         $v0, 0x1000 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102b50) {
            ctx->pc = 0x102B68u;
            goto label_102b68;
        }
    }
    ctx->pc = 0x102B58u;
    // 0x102b58: 0xc41825  or          $v1, $a2, $a0
    ctx->pc = 0x102b58u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) | GPR_U64(ctx, 4));
    // 0x102b5c: 0x3442f590  ori         $v0, $v0, 0xF590
    ctx->pc = 0x102b5cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)62864);
    // 0x102b60: 0xac430000  sw          $v1, 0x0($v0)
    ctx->pc = 0x102b60u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
    // 0x102b64: 0x3c021000  lui         $v0, 0x1000
    ctx->pc = 0x102b64u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)4096 << 16));
label_102b68:
    // 0x102b68: 0x3c04ffff  lui         $a0, 0xFFFF
    ctx->pc = 0x102b68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)65535 << 16));
    // 0x102b6c: 0x3442e000  ori         $v0, $v0, 0xE000
    ctx->pc = 0x102b6cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)57344);
    // 0x102b70: 0x3484feff  ori         $a0, $a0, 0xFEFF
    ctx->pc = 0x102b70u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)65279);
    // 0x102b74: 0x8c450000  lw          $a1, 0x0($v0)
    ctx->pc = 0x102b74u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x102b78: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x102b78u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x102b7c: 0x8e300000  lw          $s0, 0x0($s1)
    ctx->pc = 0x102b7cu;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x102b80: 0x3463f590  ori         $v1, $v1, 0xF590
    ctx->pc = 0x102b80u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)62864);
    // 0x102b84: 0x2042024  and         $a0, $s0, $a0
    ctx->pc = 0x102b84u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & GPR_U64(ctx, 4));
    // 0x102b88: 0xae240000  sw          $a0, 0x0($s1)
    ctx->pc = 0x102b88u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 4));
    // 0x102b8c: 0xac660000  sw          $a2, 0x0($v1)
    ctx->pc = 0x102b8cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 6));
    // 0x102b90: 0x10e00004  beqz        $a3, . + 4 + (0x4 << 2)
    ctx->pc = 0x102B90u;
    {
        const bool branch_taken_0x102b90 = (GPR_U64(ctx, 7) == GPR_U64(ctx, 0));
        ctx->pc = 0x102B94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102B90u;
            // 0x102b94: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x102b90) {
            ctx->pc = 0x102BA4u;
            goto label_102ba4;
        }
    }
    ctx->pc = 0x102B98u;
    // 0x102b98: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x102B98u;
    SET_GPR_U32(ctx, 31, 0x102BA0u);
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102BA0u; }
        if (ctx->pc != 0x102BA0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x102BA0u; }
        if (ctx->pc != 0x102BA0u) { return; }
    }
    ctx->pc = 0x102BA0u;
label_102ba0:
    // 0x102ba0: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x102ba0u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
label_102ba4:
    // 0x102ba4: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x102ba4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x102ba8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x102ba8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x102bac: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x102bacu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x102bb0: 0x3e00008  jr          $ra
    ctx->pc = 0x102BB0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102BB4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102BB0u;
            // 0x102bb4: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x102BB8u;
label_102bb8:
    // 0x102bb8: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x102bb8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x102bbc: 0xac850000  sw          $a1, 0x0($a0)
    ctx->pc = 0x102bbcu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 5));
    // 0x102bc0: 0x21202  srl         $v0, $v0, 8
    ctx->pc = 0x102bc0u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 2), 8));
    // 0x102bc4: 0x3e00008  jr          $ra
    ctx->pc = 0x102BC4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x102BC8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x102BC4u;
            // 0x102bc8: 0x30420001  andi        $v0, $v0, 0x1 (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x102BCCu;
    // 0x102bcc: 0x0  nop
    ctx->pc = 0x102bccu;
    // NOP
    ctx->pc = 0x102bd0u;
}
