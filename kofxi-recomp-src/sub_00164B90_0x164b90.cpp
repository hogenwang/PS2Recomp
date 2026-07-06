#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00164B90
// Address: 0x164b90 - 0x164c60
void sub_00164B90_0x164b90(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00164B90_0x164b90");
#endif

    switch (ctx->pc) {
        case 0x164bbcu: goto label_164bbc;
        case 0x164becu: goto label_164bec;
        default: break;
    }

    ctx->pc = 0x164b90u;

    // 0x164b90: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x164b90u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x164b94: 0x3c080036  lui         $t0, 0x36
    ctx->pc = 0x164b94u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)54 << 16));
    // 0x164b98: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x164b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x164b9c: 0x25081f40  addiu       $t0, $t0, 0x1F40
    ctx->pc = 0x164b9cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 8000));
    // 0x164ba0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x164ba0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x164ba4: 0x27a70040  addiu       $a3, $sp, 0x40
    ctx->pc = 0x164ba4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x164ba8: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x164ba8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x164bac: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x164bacu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164bb0: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x164bb0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x164bb4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x164bb4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x164bb8: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x164bb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
label_164bbc:
    // 0x164bbc: 0x81030000  lb          $v1, 0x0($t0)
    ctx->pc = 0x164bbcu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x164bc0: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x164bc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x164bc4: 0x81020001  lb          $v0, 0x1($t0)
    ctx->pc = 0x164bc4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 1)));
    // 0x164bc8: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x164bc8u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x164bcc: 0xa0e20001  sb          $v0, 0x1($a3)
    ctx->pc = 0x164bccu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x164bd0: 0x25080002  addiu       $t0, $t0, 0x2
    ctx->pc = 0x164bd0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 2));
    // 0x164bd4: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x164BD4u;
    {
        const bool branch_taken_0x164bd4 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x164BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164BD4u;
            // 0x164bd8: 0x24e70002  addiu       $a3, $a3, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x164bd4) {
            ctx->pc = 0x164BBCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_164bbc;
        }
    }
    ctx->pc = 0x164BDCu;
    // 0x164bdc: 0x30c2ffff  andi        $v0, $a2, 0xFFFF
    ctx->pc = 0x164bdcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65535);
    // 0x164be0: 0x3084ffff  andi        $a0, $a0, 0xFFFF
    ctx->pc = 0x164be0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x164be4: 0xc063694  jal         func_18DA50
    ctx->pc = 0x164BE4u;
    SET_GPR_U32(ctx, 31, 0x164BECu);
    ctx->pc = 0x164BE8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x164BE4u;
            // 0x164be8: 0x24500050  addiu       $s0, $v0, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 80));
        ctx->in_delay_slot = false;
    ctx->pc = 0x18DA50u;
    if (runtime->hasFunction(0x18DA50u)) {
        auto targetFn = runtime->lookupFunction(0x18DA50u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164BECu; }
        if (ctx->pc != 0x164BECu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0018DA50_0x18da50(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x164BECu; }
        if (ctx->pc != 0x164BECu) { return; }
    }
    ctx->pc = 0x164BECu;
label_164bec:
    // 0x164bec: 0x5040000f  beql        $v0, $zero, . + 4 + (0xF << 2)
    ctx->pc = 0x164BECu;
    {
        const bool branch_taken_0x164bec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x164bec) {
            ctx->pc = 0x164BF0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x164BECu;
            // 0x164bf0: 0x322200ff  andi        $v0, $s1, 0xFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
        ctx->in_delay_slot = false;
            ctx->pc = 0x164C2Cu;
            goto label_164c2c;
        }
    }
    ctx->pc = 0x164BF4u;
    // 0x164bf4: 0x324400ff  andi        $a0, $s2, 0xFF
    ctx->pc = 0x164bf4u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 18) & (uint64_t)(uint16_t)255);
    // 0x164bf8: 0x3403ffff  ori         $v1, $zero, 0xFFFF
    ctx->pc = 0x164bf8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)65535);
    // 0x164bfc: 0x42040  sll         $a0, $a0, 1
    ctx->pc = 0x164bfcu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x164c00: 0x442021  addu        $a0, $v0, $a0
    ctx->pc = 0x164c00u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x164c04: 0x94840000  lhu         $a0, 0x0($a0)
    ctx->pc = 0x164c04u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x164c08: 0x54830003  bnel        $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x164C08u;
    {
        const bool branch_taken_0x164c08 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x164c08) {
            ctx->pc = 0x164C0Cu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x164C08u;
            // 0x164c0c: 0x441821  addu        $v1, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x164C18u;
            goto label_164c18;
        }
    }
    ctx->pc = 0x164C10u;
    // 0x164c10: 0x94440000  lhu         $a0, 0x0($v0)
    ctx->pc = 0x164c10u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164c14: 0x441821  addu        $v1, $v0, $a0
    ctx->pc = 0x164c14u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
label_164c18:
    // 0x164c18: 0x94620000  lhu         $v0, 0x0($v1)
    ctx->pc = 0x164c18u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x164c1c: 0x621021  addu        $v0, $v1, $v0
    ctx->pc = 0x164c1cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
    // 0x164c20: 0x501021  addu        $v0, $v0, $s0
    ctx->pc = 0x164c20u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 16)));
    // 0x164c24: 0x90510000  lbu         $s1, 0x0($v0)
    ctx->pc = 0x164c24u;
    SET_GPR_U32(ctx, 17, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x164c28: 0x322200ff  andi        $v0, $s1, 0xFF
    ctx->pc = 0x164c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 17) & (uint64_t)(uint16_t)255);
label_164c2c:
    // 0x164c2c: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x164c2cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x164c30: 0x304200f0  andi        $v0, $v0, 0xF0
    ctx->pc = 0x164c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)240);
    // 0x164c34: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x164c34u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x164c38: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x164c38u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x164c3c: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x164c3cu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x164c40: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x164c40u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x164c44: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x164c44u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x164c48: 0x90420040  lbu         $v0, 0x40($v0)
    ctx->pc = 0x164c48u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 64)));
    // 0x164c4c: 0x3e00008  jr          $ra
    ctx->pc = 0x164C4Cu;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x164C50u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x164C4Cu;
            // 0x164c50: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x164C54u;
    // 0x164c54: 0x0  nop
    ctx->pc = 0x164c54u;
    // NOP
    // 0x164c58: 0x0  nop
    ctx->pc = 0x164c58u;
    // NOP
    // 0x164c5c: 0x0  nop
    ctx->pc = 0x164c5cu;
    // NOP
    ctx->pc = 0x164c60u;
}
