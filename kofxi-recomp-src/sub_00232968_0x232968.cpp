#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00232968
// Address: 0x232968 - 0x232a90
void sub_00232968_0x232968(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00232968_0x232968");
#endif

    switch (ctx->pc) {
        case 0x23299cu: goto label_23299c;
        case 0x2329bcu: goto label_2329bc;
        case 0x2329d0u: goto label_2329d0;
        case 0x2329e8u: goto label_2329e8;
        case 0x232a40u: goto label_232a40;
        case 0x232a68u: goto label_232a68;
        default: break;
    }

    ctx->pc = 0x232968u;

    // 0x232968: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x232968u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x23296c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x23296cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x232970: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x232970u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x232974: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x232974u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232978: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x232978u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x23297c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x23297cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x232980: 0x92220040  lbu         $v0, 0x40($s1)
    ctx->pc = 0x232980u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 64)));
    // 0x232984: 0x1040000d  beqz        $v0, . + 4 + (0xD << 2)
    ctx->pc = 0x232984u;
    {
        const bool branch_taken_0x232984 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x232988u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232984u;
            // 0x232988: 0x8e32001c  lw          $s2, 0x1C($s1) (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x232984) {
            ctx->pc = 0x2329BCu;
            goto label_2329bc;
        }
    }
    ctx->pc = 0x23298Cu;
    // 0x23298c: 0xa2200040  sb          $zero, 0x40($s1)
    ctx->pc = 0x23298cu;
    WRITE8(ADD32(GPR_U32(ctx, 17), 64), (uint8_t)GPR_U32(ctx, 0));
    // 0x232990: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x232990u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232994: 0xc08cec2  jal         func_233B08
    ctx->pc = 0x232994u;
    SET_GPR_U32(ctx, 31, 0x23299Cu);
    ctx->pc = 0x232998u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x232994u;
            // 0x232998: 0x8e440014  lw          $a0, 0x14($s2) (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 20)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x233B08u;
    if (runtime->hasFunction(0x233B08u)) {
        auto targetFn = runtime->lookupFunction(0x233B08u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23299Cu; }
        if (ctx->pc != 0x23299Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00233B08_0x233b08(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x23299Cu; }
        if (ctx->pc != 0x23299Cu) { return; }
    }
    ctx->pc = 0x23299Cu;
label_23299c:
    // 0x23299c: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x23299cu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2329a0: 0x10600006  beqz        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x2329A0u;
    {
        const bool branch_taken_0x2329a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x2329A4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2329A0u;
            // 0x2329a4: 0x24020016  addiu       $v0, $zero, 0x16 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 22));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2329a0) {
            ctx->pc = 0x2329BCu;
            goto label_2329bc;
        }
    }
    ctx->pc = 0x2329A8u;
    // 0x2329a8: 0x50620005  beql        $v1, $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2329A8u;
    {
        const bool branch_taken_0x2329a8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x2329a8) {
            ctx->pc = 0x2329ACu;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2329A8u;
            // 0x2329ac: 0x8e420004  lw          $v0, 0x4($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2329C0u;
            goto label_2329c0;
        }
    }
    ctx->pc = 0x2329B0u;
    // 0x2329b0: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2329b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2329b4: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x2329B4u;
    SET_GPR_U32(ctx, 31, 0x2329BCu);
    ctx->pc = 0x2329B8u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2329B4u;
            // 0x2329b8: 0x248447a0  addiu       $a0, $a0, 0x47A0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18336));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (runtime->hasFunction(0x22D780u)) {
        auto targetFn = runtime->lookupFunction(0x22D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2329BCu; }
        if (ctx->pc != 0x2329BCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D780_0x22d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2329BCu; }
        if (ctx->pc != 0x2329BCu) { return; }
    }
    ctx->pc = 0x2329BCu;
label_2329bc:
    // 0x2329bc: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x2329bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
label_2329c0:
    // 0x2329c0: 0x1051000e  beq         $v0, $s1, . + 4 + (0xE << 2)
    ctx->pc = 0x2329C0u;
    {
        const bool branch_taken_0x2329c0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 17));
        ctx->pc = 0x2329C4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2329C0u;
            // 0x2329c4: 0x26500004  addiu       $s0, $s2, 0x4 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2329c0) {
            ctx->pc = 0x2329FCu;
            goto label_2329fc;
        }
    }
    ctx->pc = 0x2329C8u;
    // 0x2329c8: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2329c8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2329cc: 0x0  nop
    ctx->pc = 0x2329ccu;
    // NOP
label_2329d0:
    // 0x2329d0: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2329d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x2329d4: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2329D4u;
    {
        const bool branch_taken_0x2329d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2329d4) {
            ctx->pc = 0x2329ECu;
            goto label_2329ec;
        }
    }
    ctx->pc = 0x2329DCu;
    // 0x2329dc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x2329dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x2329e0: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x2329E0u;
    SET_GPR_U32(ctx, 31, 0x2329E8u);
    ctx->pc = 0x2329E4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x2329E0u;
            // 0x2329e4: 0x248447b8  addiu       $a0, $a0, 0x47B8 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18360));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (runtime->hasFunction(0x22D780u)) {
        auto targetFn = runtime->lookupFunction(0x22D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2329E8u; }
        if (ctx->pc != 0x2329E8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D780_0x22d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x2329E8u; }
        if (ctx->pc != 0x2329E8u) { return; }
    }
    ctx->pc = 0x2329E8u;
label_2329e8:
    // 0x2329e8: 0x8e020000  lw          $v0, 0x0($s0)
    ctx->pc = 0x2329e8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
label_2329ec:
    // 0x2329ec: 0x5451fff8  bnel        $v0, $s1, . + 4 + (-0x8 << 2)
    ctx->pc = 0x2329ECu;
    {
        const bool branch_taken_0x2329ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 17));
        if (branch_taken_0x2329ec) {
            ctx->pc = 0x2329F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x2329ECu;
            // 0x2329f0: 0x40802d  daddu       $s0, $v0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x2329D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2329d0;
        }
    }
    ctx->pc = 0x2329F4u;
    // 0x2329f4: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x2329F4u;
    {
        const bool branch_taken_0x2329f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x2329F8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2329F4u;
            // 0x2329f8: 0x8c420000  lw          $v0, 0x0($v0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2329f4) {
            ctx->pc = 0x232A04u;
            goto label_232a04;
        }
    }
    ctx->pc = 0x2329FCu;
label_2329fc:
    // 0x2329fc: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2329fcu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x232a00: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x232a00u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
label_232a04:
    // 0x232a04: 0xae020000  sw          $v0, 0x0($s0)
    ctx->pc = 0x232a04u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 0), GPR_U32(ctx, 2));
    // 0x232a08: 0x8e430004  lw          $v1, 0x4($s2)
    ctx->pc = 0x232a08u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x232a0c: 0x54600005  bnel        $v1, $zero, . + 4 + (0x5 << 2)
    ctx->pc = 0x232A0Cu;
    {
        const bool branch_taken_0x232a0c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x232a0c) {
            ctx->pc = 0x232A10u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x232A0Cu;
            // 0x232a10: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
            ctx->pc = 0x232A24u;
            goto label_232a24;
        }
    }
    ctx->pc = 0x232A14u;
    // 0x232a14: 0x8e22001c  lw          $v0, 0x1C($s1)
    ctx->pc = 0x232a14u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 28)));
    // 0x232a18: 0x8c430008  lw          $v1, 0x8($v0)
    ctx->pc = 0x232a18u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x232a1c: 0xac600000  sw          $zero, 0x0($v1)
    ctx->pc = 0x232a1cu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 0));
    // 0x232a20: 0xae20001c  sw          $zero, 0x1C($s1)
    ctx->pc = 0x232a20u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
label_232a24:
    // 0x232a24: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x232a24u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x232a28: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x232a28u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x232a2c: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x232a2cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x232a30: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x232a30u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x232a34: 0x3e00008  jr          $ra
    ctx->pc = 0x232A34u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x232A38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x232A34u;
            // 0x232a38: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x232A3Cu;
    // 0x232a3c: 0x0  nop
    ctx->pc = 0x232a3cu;
    // NOP
label_232a40:
    // 0x232a40: 0x3c02003a  lui         $v0, 0x3A
    ctx->pc = 0x232a40u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)58 << 16));
    // 0x232a44: 0x24032000  addiu       $v1, $zero, 0x2000
    ctx->pc = 0x232a44u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x232a48: 0x3c04003a  lui         $a0, 0x3A
    ctx->pc = 0x232a48u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
    // 0x232a4c: 0x3c05003a  lui         $a1, 0x3A
    ctx->pc = 0x232a4cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)58 << 16));
    // 0x232a50: 0x2442fa30  addiu       $v0, $v0, -0x5D0
    ctx->pc = 0x232a50u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294965808));
    // 0x232a54: 0xaca3fa28  sw          $v1, -0x5D8($a1)
    ctx->pc = 0x232a54u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4294965800), GPR_U32(ctx, 3));
    // 0x232a58: 0x24420230  addiu       $v0, $v0, 0x230
    ctx->pc = 0x232a58u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 560));
    // 0x232a5c: 0xac80fa2c  sw          $zero, -0x5D4($a0)
    ctx->pc = 0x232a5cu;
    WRITE32(ADD32(GPR_U32(ctx, 4), 4294965804), GPR_U32(ctx, 0));
    // 0x232a60: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x232a60u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x232a64: 0x40182d  daddu       $v1, $v0, $zero
    ctx->pc = 0x232a64u;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_232a68:
    // 0x232a68: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x232a68u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x232a6c: 0x2484ffff  addiu       $a0, $a0, -0x1
    ctx->pc = 0x232a6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x232a70: 0x2463ffb0  addiu       $v1, $v1, -0x50
    ctx->pc = 0x232a70u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967216));
    // 0x232a74: 0x2442ffb0  addiu       $v0, $v0, -0x50
    ctx->pc = 0x232a74u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967216));
    // 0x232a78: 0x0  nop
    ctx->pc = 0x232a78u;
    // NOP
    // 0x232a7c: 0x481fffa  bgez        $a0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x232A7Cu;
    {
        const bool branch_taken_0x232a7c = (GPR_S32(ctx, 4) >= 0);
        if (branch_taken_0x232a7c) {
            ctx->pc = 0x232A68u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_232a68;
        }
    }
    ctx->pc = 0x232A84u;
    // 0x232a84: 0x3e00008  jr          $ra
    ctx->pc = 0x232A84u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x232A8Cu;
    // 0x232a8c: 0x0  nop
    ctx->pc = 0x232a8cu;
    // NOP
    ctx->pc = 0x232a90u;
}
