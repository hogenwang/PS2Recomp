#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00109BB0
// Address: 0x109bb0 - 0x109cb0
void sub_00109BB0_0x109bb0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00109BB0_0x109bb0");
#endif

    switch (ctx->pc) {
        case 0x109bf0u: goto label_109bf0;
        case 0x109c54u: goto label_109c54;
        case 0x109c5cu: goto label_109c5c;
        case 0x109ca4u: goto label_109ca4;
        default: break;
    }

    ctx->pc = 0x109bb0u;

    // 0x109bb0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x109bb0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x109bb4: 0x2484118f  addiu       $a0, $a0, 0x118F
    ctx->pc = 0x109bb4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4495));
    // 0x109bb8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x109bb8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x109bbc: 0x42102  srl         $a0, $a0, 4
    ctx->pc = 0x109bbcu;
    SET_GPR_S32(ctx, 4, (int32_t)SRL32(GPR_U32(ctx, 4), 4));
    // 0x109bc0: 0x48100  sll         $s0, $a0, 4
    ctx->pc = 0x109bc0u;
    SET_GPR_S32(ctx, 16, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x109bc4: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x109bc4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x109bc8: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x109bc8u;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109bcc: 0xc0402d  daddu       $t0, $a2, $zero
    ctx->pc = 0x109bccu;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109bd0: 0x1900001e  blez        $t0, . + 4 + (0x1E << 2)
    ctx->pc = 0x109BD0u;
    {
        const bool branch_taken_0x109bd0 = (GPR_S32(ctx, 8) <= 0);
        ctx->pc = 0x109BD4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109BD0u;
            // 0x109bd4: 0x200502d  daddu       $t2, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109bd0) {
            ctx->pc = 0x109C4Cu;
            goto label_109c4c;
        }
    }
    ctx->pc = 0x109BD8u;
    // 0x109bd8: 0x3c09000f  lui         $t1, 0xF
    ctx->pc = 0x109bd8u;
    SET_GPR_S32(ctx, 9, (int32_t)((uint32_t)15 << 16));
    // 0x109bdc: 0x3c0c0fff  lui         $t4, 0xFFF
    ctx->pc = 0x109bdcu;
    SET_GPR_S32(ctx, 12, (int32_t)((uint32_t)4095 << 16));
    // 0x109be0: 0x3529ff40  ori         $t1, $t1, 0xFF40
    ctx->pc = 0x109be0u;
    SET_GPR_U64(ctx, 9, GPR_U64(ctx, 9) | (uint64_t)(uint16_t)65344);
    // 0x109be4: 0x358cffff  ori         $t4, $t4, 0xFFFF
    ctx->pc = 0x109be4u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | (uint64_t)(uint16_t)65535);
    // 0x109be8: 0x240e0003  addiu       $t6, $zero, 0x3
    ctx->pc = 0x109be8u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x109bec: 0x240dffff  addiu       $t5, $zero, -0x1
    ctx->pc = 0x109becu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
label_109bf0:
    // 0x109bf0: 0x128102a  slt         $v0, $t1, $t0
    ctx->pc = 0x109bf0u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 8)) ? 1 : 0);
    // 0x109bf4: 0x120382d  daddu       $a3, $t1, $zero
    ctx->pc = 0x109bf4u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 9) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109bf8: 0x102380a  movz        $a3, $t0, $v0
    ctx->pc = 0x109bf8u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 7, GPR_VEC(ctx, 8));
    // 0x109bfc: 0x182d  daddu       $v1, $zero, $zero
    ctx->pc = 0x109bfcu;
    SET_GPR_U64(ctx, 3, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x109c00: 0x24e6000f  addiu       $a2, $a3, 0xF
    ctx->pc = 0x109c00u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 7), 15));
    // 0x109c04: 0x24e2001e  addiu       $v0, $a3, 0x1E
    ctx->pc = 0x109c04u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 7), 30));
    // 0x109c08: 0x1a6282a  slt         $a1, $t5, $a2
    ctx->pc = 0x109c08u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 13) < (int64_t)GPR_S64(ctx, 6)) ? 1 : 0);
    // 0x109c0c: 0x1074023  subu        $t0, $t0, $a3
    ctx->pc = 0x109c0cu;
    SET_GPR_S32(ctx, 8, (int32_t)SUB32(GPR_U32(ctx, 8), GPR_U32(ctx, 7)));
    // 0x109c10: 0xc5100b  movn        $v0, $a2, $a1
    ctx->pc = 0x109c10u;
    if (GPR_U64(ctx, 5) != 0) SET_GPR_VEC(ctx, 2, GPR_VEC(ctx, 6));
    // 0x109c14: 0x16c2024  and         $a0, $t3, $t4
    ctx->pc = 0x109c14u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 11) & GPR_U64(ctx, 12));
    // 0x109c18: 0x1c8180b  movn        $v1, $t6, $t0
    ctx->pc = 0x109c18u;
    if (GPR_U64(ctx, 8) != 0) SET_GPR_VEC(ctx, 3, GPR_VEC(ctx, 14));
    // 0x109c1c: 0x21103  sra         $v0, $v0, 4
    ctx->pc = 0x109c1cu;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 4));
    // 0x109c20: 0x4203c  dsll32      $a0, $a0, 0
    ctx->pc = 0x109c20u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 0));
    // 0x109c24: 0x31f38  dsll        $v1, $v1, 28
    ctx->pc = 0x109c24u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) << 28);
    // 0x109c28: 0x2103c  dsll32      $v0, $v0, 0
    ctx->pc = 0x109c28u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) << (32 + 0));
    // 0x109c2c: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x109c2cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x109c30: 0x2103e  dsrl32      $v0, $v0, 0
    ctx->pc = 0x109c30u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) >> (32 + 0));
    // 0x109c34: 0x822025  or          $a0, $a0, $v0
    ctx->pc = 0x109c34u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 2));
    // 0x109c38: 0xfd440000  sd          $a0, 0x0($t2)
    ctx->pc = 0x109c38u;
    WRITE64(ADD32(GPR_U32(ctx, 10), 0), GPR_U64(ctx, 4));
    // 0x109c3c: 0xf  sync
    ctx->pc = 0x109c3cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x109c40: 0x1675821  addu        $t3, $t3, $a3
    ctx->pc = 0x109c40u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 11), GPR_U32(ctx, 7)));
    // 0x109c44: 0x1d00ffea  bgtz        $t0, . + 4 + (-0x16 << 2)
    ctx->pc = 0x109C44u;
    {
        const bool branch_taken_0x109c44 = (GPR_S32(ctx, 8) > 0);
        ctx->pc = 0x109C48u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109C44u;
            // 0x109c48: 0x254a0010  addiu       $t2, $t2, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)ADD32(GPR_U32(ctx, 10), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109c44) {
            ctx->pc = 0x109BF0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_109bf0;
        }
    }
    ctx->pc = 0x109C4Cu;
label_109c4c:
    // 0x109c4c: 0xc0433b8  jal         func_10CEE0
    ctx->pc = 0x109C4Cu;
    SET_GPR_U32(ctx, 31, 0x109C54u);
    ctx->pc = 0x109C50u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109C4Cu;
            // 0x109c50: 0x202d  daddu       $a0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CEE0u;
    if (runtime->hasFunction(0x10CEE0u)) {
        auto targetFn = runtime->lookupFunction(0x10CEE0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109C54u; }
        if (ctx->pc != 0x109C54u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CEE0_0x10cee0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109C54u; }
        if (ctx->pc != 0x109C54u) { return; }
    }
    ctx->pc = 0x109C54u;
label_109c54:
    // 0x109c54: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x109C54u;
    SET_GPR_U32(ctx, 31, 0x109C5Cu);
    ctx->pc = 0x116EA0u;
    if (runtime->hasFunction(0x116EA0u)) {
        auto targetFn = runtime->lookupFunction(0x116EA0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109C5Cu; }
        if (ctx->pc != 0x109C5Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        kofxiDisableInterruptsAndReturnState_0x116ea0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x109C5Cu; }
        if (ctx->pc != 0x109C5Cu) { return; }
    }
    ctx->pc = 0x109C5Cu;
label_109c5c:
    // 0x109c5c: 0x3c030fff  lui         $v1, 0xFFF
    ctx->pc = 0x109c5cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4095 << 16));
    // 0x109c60: 0x3c051000  lui         $a1, 0x1000
    ctx->pc = 0x109c60u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)4096 << 16));
    // 0x109c64: 0x3463ffff  ori         $v1, $v1, 0xFFFF
    ctx->pc = 0x109c64u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)65535);
    // 0x109c68: 0x34a5b430  ori         $a1, $a1, 0xB430
    ctx->pc = 0x109c68u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | (uint64_t)(uint16_t)46128);
    // 0x109c6c: 0x2031824  and         $v1, $s0, $v1
    ctx->pc = 0x109c6cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & GPR_U64(ctx, 3));
    // 0x109c70: 0x3c041000  lui         $a0, 0x1000
    ctx->pc = 0x109c70u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)4096 << 16));
    // 0x109c74: 0xaca30000  sw          $v1, 0x0($a1)
    ctx->pc = 0x109c74u;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 3)); // MMIO: 0x10000000
    // 0x109c78: 0x3484b420  ori         $a0, $a0, 0xB420
    ctx->pc = 0x109c78u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | (uint64_t)(uint16_t)46112);
    // 0x109c7c: 0xac800000  sw          $zero, 0x0($a0)
    ctx->pc = 0x109c7cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 4), 0), GPR_U32(ctx, 0)); // MMIO: 0x10000000
    // 0x109c80: 0x3c031000  lui         $v1, 0x1000
    ctx->pc = 0x109c80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)4096 << 16));
    // 0x109c84: 0x3463b400  ori         $v1, $v1, 0xB400
    ctx->pc = 0x109c84u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)46080);
    // 0x109c88: 0x24040105  addiu       $a0, $zero, 0x105
    ctx->pc = 0x109c88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 261));
    // 0x109c8c: 0xac640000  sw          $a0, 0x0($v1)
    ctx->pc = 0x109c8cu;
    runtime->Store32(rdram, ctx, ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 4)); // MMIO: 0x10000000
    // 0x109c90: 0x10400004  beqz        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x109C90u;
    {
        const bool branch_taken_0x109c90 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x109C94u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109C90u;
            // 0x109c94: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x109c90) {
            ctx->pc = 0x109CA4u;
            goto label_109ca4;
        }
    }
    ctx->pc = 0x109C98u;
    // 0x109c98: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x109c98u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109c9c: 0x8045bbc  j           func_116EF0
    ctx->pc = 0x109C9Cu;
    ctx->pc = 0x109CA0u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x109C9Cu;
            // 0x109ca0: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
    ctx->pc = 0x116EF0u;
    if (runtime->hasFunction(0x116EF0u)) {
        auto targetFn = runtime->lookupFunction(0x116EF0u);
        targetFn(rdram, ctx, runtime); return;
    } else {
        kofxiEnableInterruptsAndReturnState_0x116ef0(rdram, ctx, runtime); return;
    }
    ctx->pc = 0x109CA4u;
label_109ca4:
    // 0x109ca4: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x109ca4u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x109ca8: 0x3e00008  jr          $ra
    ctx->pc = 0x109CA8u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x109CACu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x109CA8u;
            // 0x109cac: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x109CB0u;
    ctx->pc = 0x109cb0u;
}
