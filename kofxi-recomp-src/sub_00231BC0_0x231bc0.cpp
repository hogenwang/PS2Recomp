#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00231BC0
// Address: 0x231bc0 - 0x231c90
void sub_00231BC0_0x231bc0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00231BC0_0x231bc0");
#endif

    switch (ctx->pc) {
        case 0x231be8u: goto label_231be8;
        case 0x231c00u: goto label_231c00;
        case 0x231c28u: goto label_231c28;
        case 0x231c40u: goto label_231c40;
        case 0x231c88u: goto label_231c88;
        default: break;
    }

    ctx->pc = 0x231bc0u;

    // 0x231bc0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x231bc0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x231bc4: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x231bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x231bc8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x231bc8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x231bcc: 0xa0882d  daddu       $s1, $a1, $zero
    ctx->pc = 0x231bccu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231bd0: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x231bd0u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231bd4: 0x1e000004  bgtz        $s0, . + 4 + (0x4 << 2)
    ctx->pc = 0x231BD4u;
    {
        const bool branch_taken_0x231bd4 = (GPR_S32(ctx, 16) > 0);
        ctx->pc = 0x231BD8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231BD4u;
            // 0x231bd8: 0xffbf0020  sd          $ra, 0x20($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231bd4) {
            ctx->pc = 0x231BE8u;
            goto label_231be8;
        }
    }
    ctx->pc = 0x231BDCu;
    // 0x231bdc: 0x3c04003f  lui         $a0, 0x3F
    ctx->pc = 0x231bdcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)63 << 16));
    // 0x231be0: 0xc08b5e0  jal         func_22D780
    ctx->pc = 0x231BE0u;
    SET_GPR_U32(ctx, 31, 0x231BE8u);
    ctx->pc = 0x231BE4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231BE0u;
            // 0x231be4: 0x24844728  addiu       $a0, $a0, 0x4728 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 18216));
        ctx->in_delay_slot = false;
    ctx->pc = 0x22D780u;
    if (runtime->hasFunction(0x22D780u)) {
        auto targetFn = runtime->lookupFunction(0x22D780u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231BE8u; }
        if (ctx->pc != 0x231BE8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0022D780_0x22d780(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231BE8u; }
        if (ctx->pc != 0x231BE8u) { return; }
    }
    ctx->pc = 0x231BE8u;
label_231be8:
    // 0x231be8: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x231be8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231bec: 0x24100001  addiu       $s0, $zero, 0x1
    ctx->pc = 0x231becu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x231bf0: 0x204102a  slt         $v0, $s0, $a0
    ctx->pc = 0x231bf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x231bf4: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x231BF4u;
    {
        const bool branch_taken_0x231bf4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x231bf4) {
            ctx->pc = 0x231C1Cu;
            goto label_231c1c;
        }
    }
    ctx->pc = 0x231BFCu;
    // 0x231bfc: 0x0  nop
    ctx->pc = 0x231bfcu;
    // NOP
label_231c00:
    // 0x231c00: 0x108078  dsll        $s0, $s0, 1
    ctx->pc = 0x231c00u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) << 1);
    // 0x231c04: 0x204102a  slt         $v0, $s0, $a0
    ctx->pc = 0x231c04u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 16) < (int64_t)GPR_S64(ctx, 4)) ? 1 : 0);
    // 0x231c08: 0x0  nop
    ctx->pc = 0x231c08u;
    // NOP
    // 0x231c0c: 0x0  nop
    ctx->pc = 0x231c0cu;
    // NOP
    // 0x231c10: 0x0  nop
    ctx->pc = 0x231c10u;
    // NOP
    // 0x231c14: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x231C14u;
    {
        const bool branch_taken_0x231c14 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231c14) {
            ctx->pc = 0x231C00u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_231c00;
        }
    }
    ctx->pc = 0x231C1Cu;
label_231c1c:
    // 0x231c1c: 0x1020bc  dsll32      $a0, $s0, 2
    ctx->pc = 0x231c1cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) << (32 + 2));
    // 0x231c20: 0xc098552  jal         func_261548
    ctx->pc = 0x231C20u;
    SET_GPR_U32(ctx, 31, 0x231C28u);
    ctx->pc = 0x231C24u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x231C20u;
            // 0x231c24: 0x4203f  dsra32      $a0, $a0, 0 (Delay Slot)
        SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (runtime->hasFunction(0x261548u)) {
        auto targetFn = runtime->lookupFunction(0x261548u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231C28u; }
        if (ctx->pc != 0x231C28u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_00261548_0x261548(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x231C28u; }
        if (ctx->pc != 0x231C28u) { return; }
    }
    ctx->pc = 0x231C28u;
label_231c28:
    // 0x231c28: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x231c28u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x231c2c: 0x10800011  beqz        $a0, . + 4 + (0x11 << 2)
    ctx->pc = 0x231C2Cu;
    {
        const bool branch_taken_0x231c2c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x231C30u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231C2Cu;
            // 0x231c30: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231c2c) {
            ctx->pc = 0x231C74u;
            goto label_231c74;
        }
    }
    ctx->pc = 0x231C34u;
    // 0x231c34: 0x1a00000c  blez        $s0, . + 4 + (0xC << 2)
    ctx->pc = 0x231C34u;
    {
        const bool branch_taken_0x231c34 = (GPR_S32(ctx, 16) <= 0);
        ctx->pc = 0x231C38u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231C34u;
            // 0x231c38: 0x182d  daddu       $v1, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231c34) {
            ctx->pc = 0x231C68u;
            goto label_231c68;
        }
    }
    ctx->pc = 0x231C3Cu;
    // 0x231c3c: 0x6605ffff  daddiu      $a1, $s0, -0x1
    ctx->pc = 0x231c3cu;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)4294967295);
label_231c40:
    // 0x231c40: 0x31080  sll         $v0, $v1, 2
    ctx->pc = 0x231c40u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 3), 2));
    // 0x231c44: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x231c44u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x231c48: 0xac400000  sw          $zero, 0x0($v0)
    ctx->pc = 0x231c48u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 0));
    // 0x231c4c: 0x24630001  addiu       $v1, $v1, 0x1
    ctx->pc = 0x231c4cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
    // 0x231c50: 0x70102a  slt         $v0, $v1, $s0
    ctx->pc = 0x231c50u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 16)) ? 1 : 0);
    // 0x231c54: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x231C54u;
    {
        const bool branch_taken_0x231c54 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x231c54) {
            ctx->pc = 0x231C40u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_231c40;
        }
    }
    ctx->pc = 0x231C5Cu;
    // 0x231c5c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x231C5Cu;
    {
        const bool branch_taken_0x231c5c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x231C60u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231C5Cu;
            // 0x231c60: 0xfe250000  sd          $a1, 0x0($s1) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x231c5c) {
            ctx->pc = 0x231C70u;
            goto label_231c70;
        }
    }
    ctx->pc = 0x231C64u;
    // 0x231c64: 0x0  nop
    ctx->pc = 0x231c64u;
    // NOP
label_231c68:
    // 0x231c68: 0x6605ffff  daddiu      $a1, $s0, -0x1
    ctx->pc = 0x231c68u;
    SET_GPR_S64(ctx, 5, (int64_t)GPR_S64(ctx, 16) + (int64_t)(int32_t)4294967295);
    // 0x231c6c: 0xfe250000  sd          $a1, 0x0($s1)
    ctx->pc = 0x231c6cu;
    WRITE64(ADD32(GPR_U32(ctx, 17), 0), GPR_U64(ctx, 5));
label_231c70:
    // 0x231c70: 0x80102d  daddu       $v0, $a0, $zero
    ctx->pc = 0x231c70u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_231c74:
    // 0x231c74: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x231c74u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x231c78: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x231c78u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x231c7c: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x231c7cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x231c80: 0x3e00008  jr          $ra
    ctx->pc = 0x231C80u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x231C84u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x231C80u;
            // 0x231c84: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x231C88u;
label_231c88:
    // 0x231c88: 0x8098560  j           func_261580
    ctx->pc = 0x231C88u;
    ctx->pc = 0x261580u;
    if (runtime->hasFunction(0x261580u)) {
        auto targetFn = runtime->lookupFunction(0x261580u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        sub_00261580_0x261580(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x231C90u;
    ctx->pc = 0x231c90u;
}
