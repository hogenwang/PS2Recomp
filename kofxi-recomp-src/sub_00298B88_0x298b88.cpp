#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00298B88
// Address: 0x298b88 - 0x298cb0
void sub_00298B88_0x298b88(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00298B88_0x298b88");
#endif

    switch (ctx->pc) {
        case 0x298be0u: goto label_298be0;
        case 0x298c78u: goto label_298c78;
        default: break;
    }

    ctx->pc = 0x298b88u;

    // 0x298b88: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x298b88u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x298b8c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x298b8cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x298b90: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x298b90u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x298b94: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x298b94u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298b98: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x298b98u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x298b9c: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x298b9cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x298ba0: 0x8e030018  lw          $v1, 0x18($s0)
    ctx->pc = 0x298ba0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
    // 0x298ba4: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x298ba4u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x298ba8: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x298ba8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x298bac: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x298bacu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x298bb0: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x298bb0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x298bb4: 0x8c51fffc  lw          $s1, -0x4($v0)
    ctx->pc = 0x298bb4u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294967292)));
    // 0x298bb8: 0xac40fffc  sw          $zero, -0x4($v0)
    ctx->pc = 0x298bb8u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294967292), GPR_U32(ctx, 0));
    // 0x298bbc: 0x8e020014  lw          $v0, 0x14($s0)
    ctx->pc = 0x298bbcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x298bc0: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x298BC0u;
    {
        const bool branch_taken_0x298bc0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x298BC4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298BC0u;
            // 0x298bc4: 0x2442ffff  addiu       $v0, $v0, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298bc0) {
            ctx->pc = 0x298C2Cu;
            goto label_298c2c;
        }
    }
    ctx->pc = 0x298BC8u;
    // 0x298bc8: 0x8e060010  lw          $a2, 0x10($s0)
    ctx->pc = 0x298bc8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x298bcc: 0x8e040000  lw          $a0, 0x0($s0)
    ctx->pc = 0x298bccu;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x298bd0: 0x62842  srl         $a1, $a2, 1
    ctx->pc = 0x298bd0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 6), 1));
    // 0x298bd4: 0x63080  sll         $a2, $a2, 2
    ctx->pc = 0x298bd4u;
    SET_GPR_S32(ctx, 6, (int32_t)SLL32(GPR_U32(ctx, 6), 2));
    // 0x298bd8: 0xc0a8c00  jal         func_2A3000
    ctx->pc = 0x298BD8u;
    SET_GPR_U32(ctx, 31, 0x298BE0u);
    ctx->pc = 0x298BDCu;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x298BD8u;
            // 0x298bdc: 0x52880  sll         $a1, $a1, 2 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 5), 2));
        ctx->in_delay_slot = false;
    ctx->pc = 0x2A3000u;
    if (runtime->hasFunction(0x2A3000u)) {
        auto targetFn = runtime->lookupFunction(0x2A3000u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298BE0u; }
        if (ctx->pc != 0x298BE0u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_002A3000_0x2a3000(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x298BE0u; }
        if (ctx->pc != 0x298BE0u) { return; }
    }
    ctx->pc = 0x298BE0u;
label_298be0:
    // 0x298be0: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x298be0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298be4: 0x54c00005  bnel        $a2, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x298BE4u;
    {
        const bool branch_taken_0x298be4 = (GPR_U64(ctx, 6) != GPR_U64(ctx, 0));
        if (branch_taken_0x298be4) {
            ctx->pc = 0x298BE8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x298BE4u;
            // 0x298be8: 0x8e040018  lw          $a0, 0x18($s0) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 24)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x298BFCu;
            goto label_298bfc;
        }
    }
    ctx->pc = 0x298BECu;
    // 0x298bec: 0x8e0200a0  lw          $v0, 0xA0($s0)
    ctx->pc = 0x298becu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 160)));
    // 0x298bf0: 0x24420001  addiu       $v0, $v0, 0x1
    ctx->pc = 0x298bf0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
    // 0x298bf4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x298BF4u;
    {
        const bool branch_taken_0x298bf4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298BF8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298BF4u;
            // 0x298bf8: 0xae0200a0  sw          $v0, 0xA0($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 160), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298bf4) {
            ctx->pc = 0x298C98u;
            goto label_298c98;
        }
    }
    ctx->pc = 0x298BFCu;
label_298bfc:
    // 0x298bfc: 0xde020050  ld          $v0, 0x50($s0)
    ctx->pc = 0x298bfcu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 16), 80)));
    // 0x298c00: 0x8e030010  lw          $v1, 0x10($s0)
    ctx->pc = 0x298c00u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 16)));
    // 0x298c04: 0x42042  srl         $a0, $a0, 1
    ctx->pc = 0x298c04u;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x298c08: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x298c08u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x298c0c: 0x2485ffff  addiu       $a1, $a0, -0x1
    ctx->pc = 0x298c0cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x298c10: 0x31842  srl         $v1, $v1, 1
    ctx->pc = 0x298c10u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 1));
    // 0x298c14: 0xfe020050  sd          $v0, 0x50($s0)
    ctx->pc = 0x298c14u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 80), GPR_U64(ctx, 2));
    // 0x298c18: 0xae030010  sw          $v1, 0x10($s0)
    ctx->pc = 0x298c18u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 16), GPR_U32(ctx, 3));
    // 0x298c1c: 0xae050014  sw          $a1, 0x14($s0)
    ctx->pc = 0x298c1cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 5));
    // 0x298c20: 0xae060000  sw          $a2, 0x0($s0)
    ctx->pc = 0x298c20u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 6));
    // 0x298c24: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x298C24u;
    {
        const bool branch_taken_0x298c24 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298C28u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298C24u;
            // 0x298c28: 0xae040018  sw          $a0, 0x18($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 24), GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298c24) {
            ctx->pc = 0x298C30u;
            goto label_298c30;
        }
    }
    ctx->pc = 0x298C2Cu;
label_298c2c:
    // 0x298c2c: 0xae020014  sw          $v0, 0x14($s0)
    ctx->pc = 0x298c2cu;
    WRITE32(ADD32(GPR_U32(ctx, 16), 20), GPR_U32(ctx, 2));
label_298c30:
    // 0x298c30: 0x8e02000c  lw          $v0, 0xC($s0)
    ctx->pc = 0x298c30u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 12)));
    // 0x298c34: 0xde040048  ld          $a0, 0x48($s0)
    ctx->pc = 0x298c34u;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 16), 72)));
    // 0x298c38: 0x8e030014  lw          $v1, 0x14($s0)
    ctx->pc = 0x298c38u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 20)));
    // 0x298c3c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x298c3cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x298c40: 0x64840001  daddiu      $a0, $a0, 0x1
    ctx->pc = 0x298c40u;
    SET_GPR_S64(ctx, 4, (int64_t)GPR_S64(ctx, 4) + (int64_t)(int32_t)1);
    // 0x298c44: 0x8e050000  lw          $a1, 0x0($s0)
    ctx->pc = 0x298c44u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x298c48: 0xae02000c  sw          $v0, 0xC($s0)
    ctx->pc = 0x298c48u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 12), GPR_U32(ctx, 2));
    // 0x298c4c: 0x31880  sll         $v1, $v1, 2
    ctx->pc = 0x298c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x298c50: 0xfe040048  sd          $a0, 0x48($s0)
    ctx->pc = 0x298c50u;
    WRITE64(ADD32(GPR_U32(ctx, 16), 72), GPR_U64(ctx, 4));
    // 0x298c54: 0x651821  addu        $v1, $v1, $a1
    ctx->pc = 0x298c54u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 5)));
    // 0x298c58: 0x8c640000  lw          $a0, 0x0($v1)
    ctx->pc = 0x298c58u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x298c5c: 0x54800003  bnel        $a0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x298C5Cu;
    {
        const bool branch_taken_0x298c5c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 0));
        if (branch_taken_0x298c5c) {
            ctx->pc = 0x298C60u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x298C5Cu;
            // 0x298c60: 0x8c830004  lw          $v1, 0x4($a0) (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x298C6Cu;
            goto label_298c6c;
        }
    }
    ctx->pc = 0x298C64u;
    // 0x298c64: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x298C64u;
    {
        const bool branch_taken_0x298c64 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x298C68u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298C64u;
            // 0x298c68: 0xac710000  sw          $s1, 0x0($v1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
        if (branch_taken_0x298c64) {
            ctx->pc = 0x298C98u;
            goto label_298c98;
        }
    }
    ctx->pc = 0x298C6Cu;
label_298c6c:
    // 0x298c6c: 0x5060000a  beql        $v1, $zero, . + 4 + (0xA << 2)
    ctx->pc = 0x298C6Cu;
    {
        const bool branch_taken_0x298c6c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x298c6c) {
            ctx->pc = 0x298C70u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x298C6Cu;
            // 0x298c70: 0xac910004  sw          $s1, 0x4($a0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 17));
        ctx->in_delay_slot = false;
            ctx->pc = 0x298C98u;
            goto label_298c98;
        }
    }
    ctx->pc = 0x298C74u;
    // 0x298c74: 0x0  nop
    ctx->pc = 0x298c74u;
    // NOP
label_298c78:
    // 0x298c78: 0x60202d  daddu       $a0, $v1, $zero
    ctx->pc = 0x298c78u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 3) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298c7c: 0x8c820004  lw          $v0, 0x4($a0)
    ctx->pc = 0x298c7cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4)));
    // 0x298c80: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x298c80u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x298c84: 0x0  nop
    ctx->pc = 0x298c84u;
    // NOP
    // 0x298c88: 0x0  nop
    ctx->pc = 0x298c88u;
    // NOP
    // 0x298c8c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x298C8Cu;
    {
        const bool branch_taken_0x298c8c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x298c8c) {
            ctx->pc = 0x298C78u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_298c78;
        }
    }
    ctx->pc = 0x298C94u;
    // 0x298c94: 0xac910004  sw          $s1, 0x4($a0)
    ctx->pc = 0x298c94u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4), GPR_U32(ctx, 17));
label_298c98:
    // 0x298c98: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x298c98u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x298c9c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x298c9cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x298ca0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x298ca0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x298ca4: 0x3e00008  jr          $ra
    ctx->pc = 0x298CA4u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x298CA8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x298CA4u;
            // 0x298ca8: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x298CACu;
    // 0x298cac: 0x0  nop
    ctx->pc = 0x298cacu;
    // NOP
    ctx->pc = 0x298cb0u;
}
