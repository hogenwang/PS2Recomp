#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002819F0
// Address: 0x2819f0 - 0x281ac8
void sub_002819F0_0x2819f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002819F0_0x2819f0");
#endif

    switch (ctx->pc) {
        case 0x281a24u: goto label_281a24;
        default: break;
    }

    ctx->pc = 0x2819f0u;

    // 0x2819f0: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2819f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2819f4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x2819f4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x2819f8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2819f8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2819fc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x2819fcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281a00: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x281a00u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x281a04: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x281a04u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281a08: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x281a08u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x281a0c: 0x8e120000  lw          $s2, 0x0($s0)
    ctx->pc = 0x281a0cu;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x281a10: 0x26050018  addiu       $a1, $s0, 0x18
    ctx->pc = 0x281a10u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 24));
    // 0x281a14: 0xde280000  ld          $t0, 0x0($s1)
    ctx->pc = 0x281a14u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x281a18: 0x26060010  addiu       $a2, $s0, 0x10
    ctx->pc = 0x281a18u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x281a1c: 0xc0a0554  jal         func_281550
    ctx->pc = 0x281A1Cu;
    SET_GPR_U32(ctx, 31, 0x281A24u);
    ctx->pc = 0x281A20u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x281A1Cu;
            // 0x281a20: 0x26070014  addiu       $a3, $s0, 0x14 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 16), 20));
        ctx->in_delay_slot = false;
    ctx->pc = 0x281550u;
    if (runtime->hasFunction(0x281550u)) {
        auto targetFn = runtime->lookupFunction(0x281550u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281A24u; }
        if (ctx->pc != 0x281A24u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00281550_0x281550(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x281A24u; }
        if (ctx->pc != 0x281A24u) { return; }
    }
    ctx->pc = 0x281A24u;
label_281a24:
    // 0x281a24: 0x30430080  andi        $v1, $v0, 0x80
    ctx->pc = 0x281a24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x281a28: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x281A28u;
    {
        const bool branch_taken_0x281a28 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x281A2Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281A28u;
            // 0x281a2c: 0xae02000c  sw          $v0, 0xC($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281a28) {
            ctx->pc = 0x281A38u;
            goto label_281a38;
        }
    }
    ctx->pc = 0x281A30u;
    // 0x281a30: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x281A30u;
    {
        const bool branch_taken_0x281a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281A34u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281A30u;
            // 0x281a34: 0x24030006  addiu       $v1, $zero, 0x6 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281a30) {
            ctx->pc = 0x281A74u;
            goto label_281a74;
        }
    }
    ctx->pc = 0x281A38u;
label_281a38:
    // 0x281a38: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x281a38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x281a3c: 0x24020010  addiu       $v0, $zero, 0x10
    ctx->pc = 0x281a3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x281a40: 0x1462000c  bne         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x281A40u;
    {
        const bool branch_taken_0x281a40 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x281A44u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281A40u;
            // 0x281a44: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281a40) {
            ctx->pc = 0x281A74u;
            goto label_281a74;
        }
    }
    ctx->pc = 0x281A48u;
    // 0x281a48: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x281a48u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x281a4c: 0xde230000  ld          $v1, 0x0($s1)
    ctx->pc = 0x281a4cu;
    SET_GPR_U64(ctx, 3, READ64(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x281a50: 0x521023  subu        $v0, $v0, $s2
    ctx->pc = 0x281a50u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x281a54: 0x62182f  dsubu       $v1, $v1, $v0
    ctx->pc = 0x281a54u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) - GPR_U64(ctx, 2));
    // 0x281a58: 0xfe230000  sd          $v1, 0x0($s1)
    ctx->pc = 0x281a58u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 3));
    // 0x281a5c: 0x8e020020  lw          $v0, 0x20($s0)
    ctx->pc = 0x281a5cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 32)));
    // 0x281a60: 0x50400007  beql        $v0, $zero, . + 4 + (0x7 << 2)
    ctx->pc = 0x281A60u;
    {
        const bool branch_taken_0x281a60 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x281a60) {
            ctx->pc = 0x281A64u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x281A60u;
            // 0x281a64: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x281A80u;
            goto label_281a80;
        }
    }
    ctx->pc = 0x281A68u;
    // 0x281a68: 0x4630005  bgezl       $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x281A68u;
    {
        const bool branch_taken_0x281a68 = (GPR_S32(ctx, 3) >= 0);
        if (branch_taken_0x281a68) {
            ctx->pc = 0x281A6Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x281A68u;
            // 0x281a6c: 0x8e03000c  lw          $v1, 0xC($s0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x281A80u;
            goto label_281a80;
        }
    }
    ctx->pc = 0x281A70u;
    // 0x281a70: 0x24030008  addiu       $v1, $zero, 0x8
    ctx->pc = 0x281a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_281a74:
    // 0x281a74: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x281a74u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x281a78: 0x1000000d  b           . + 4 + (0xD << 2)
    ctx->pc = 0x281A78u;
    {
        const bool branch_taken_0x281a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x281A7Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281A78u;
            // 0x281a7c: 0xae030008  sw          $v1, 0x8($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 8), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x281a78) {
            ctx->pc = 0x281AB0u;
            goto label_281ab0;
        }
    }
    ctx->pc = 0x281A80u;
label_281a80:
    // 0x281a80: 0x24020021  addiu       $v0, $zero, 0x21
    ctx->pc = 0x281a80u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 33));
    // 0x281a84: 0x54620009  bnel        $v1, $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x281A84u;
    {
        const bool branch_taken_0x281a84 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x281a84) {
            ctx->pc = 0x281A88u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x281A84u;
            // 0x281a88: 0xae000004  sw          $zero, 0x4($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x281AACu;
            goto label_281aac;
        }
    }
    ctx->pc = 0x281A8Cu;
    // 0x281a8c: 0x8e030028  lw          $v1, 0x28($s0)
    ctx->pc = 0x281a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 40)));
    // 0x281a90: 0x8e250000  lw          $a1, 0x0($s1)
    ctx->pc = 0x281a90u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x281a94: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x281a94u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x281a98: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x281a98u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x281a9c: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x281a9cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x281aa0: 0x441023  subu        $v0, $v0, $a0
    ctx->pc = 0x281aa0u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x281aa4: 0xfe020018  sd          $v0, 0x18($s0)
    ctx->pc = 0x281aa4u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 24), GPR_U64(ctx, 2));
    // 0x281aa8: 0xae000004  sw          $zero, 0x4($s0)
    ctx->pc = 0x281aa8u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 4), GPR_U32(ctx, 0));
label_281aac:
    // 0x281aac: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x281aacu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_281ab0:
    // 0x281ab0: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x281ab0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x281ab4: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x281ab4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x281ab8: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x281ab8u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x281abc: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x281abcu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x281ac0: 0x3e00008  jr          $ra
    ctx->pc = 0x281AC0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x281AC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x281AC0u;
            // 0x281ac4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x281AC8u;
    ctx->pc = 0x281ac8u;
}
