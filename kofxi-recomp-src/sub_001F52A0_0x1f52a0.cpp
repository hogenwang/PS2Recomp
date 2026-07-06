#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_001F52A0
// Address: 0x1f52a0 - 0x1f5340
void sub_001F52A0_0x1f52a0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001F52A0_0x1f52a0");
#endif

    switch (ctx->pc) {
        case 0x1f52b8u: goto label_1f52b8;
        case 0x1f52e0u: goto label_1f52e0;
        case 0x1f532cu: goto label_1f532c;
        default: break;
    }

    ctx->pc = 0x1f52a0u;

    // 0x1f52a0: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x1f52a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x1f52a4: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x1f52a4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x1f52a8: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x1f52a8u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f52ac: 0xffbf0018  sd          $ra, 0x18($sp)
    ctx->pc = 0x1f52acu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 31));
    // 0x1f52b0: 0xc07b670  jal         func_1ED9C0
    ctx->pc = 0x1F52B0u;
    SET_GPR_U32(ctx, 31, 0x1F52B8u);
    ctx->pc = 0x1F52B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F52B0u;
            // 0x1f52b4: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED9C0u;
    if (runtime->hasFunction(0x1ED9C0u)) {
        auto targetFn = runtime->lookupFunction(0x1ED9C0u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F52B8u; }
        if (ctx->pc != 0x1F52B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED9C0_0x1ed9c0(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F52B8u; }
        if (ctx->pc != 0x1F52B8u) { return; }
    }
    ctx->pc = 0x1F52B8u;
label_1f52b8:
    // 0x1f52b8: 0x8e062018  lw          $a2, 0x2018($s0)
    ctx->pc = 0x1f52b8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 8216)));
    // 0x1f52bc: 0x802d  daddu       $s0, $zero, $zero
    ctx->pc = 0x1f52bcu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f52c0: 0x8cc20178  lw          $v0, 0x178($a2)
    ctx->pc = 0x1f52c0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 376)));
    // 0x1f52c4: 0x18400012  blez        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1F52C4u;
    {
        const bool branch_taken_0x1f52c4 = (GPR_S32(ctx, 2) <= 0);
        ctx->pc = 0x1F52C8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F52C4u;
            // 0x1f52c8: 0x24c40180  addiu       $a0, $a2, 0x180 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 6), 384));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f52c4) {
            ctx->pc = 0x1F5310u;
            goto label_1f5310;
        }
    }
    ctx->pc = 0x1F52CCu;
    // 0x1f52cc: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1f52ccu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f52d0: 0x24090002  addiu       $t1, $zero, 0x2
    ctx->pc = 0x1f52d0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1f52d4: 0x24080004  addiu       $t0, $zero, 0x4
    ctx->pc = 0x1f52d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1f52d8: 0x2407ffff  addiu       $a3, $zero, -0x1
    ctx->pc = 0x1f52d8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x1f52dc: 0x0  nop
    ctx->pc = 0x1f52dcu;
    // NOP
label_1f52e0:
    // 0x1f52e0: 0x8c820000  lw          $v0, 0x0($a0)
    ctx->pc = 0x1f52e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x1f52e4: 0x50490004  beql        $v0, $t1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1F52E4u;
    {
        const bool branch_taken_0x1f52e4 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 9));
        if (branch_taken_0x1f52e4) {
            ctx->pc = 0x1F52E8u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F52E4u;
            // 0x1f52e8: 0x8c820058  lw          $v0, 0x58($a0) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F52F8u;
            goto label_1f52f8;
        }
    }
    ctx->pc = 0x1F52ECu;
    // 0x1f52ec: 0x54480006  bnel        $v0, $t0, . + 4 + (0x6 << 2)
    ctx->pc = 0x1F52ECu;
    {
        const bool branch_taken_0x1f52ec = (GPR_U64(ctx, 2) != GPR_U64(ctx, 8));
        if (branch_taken_0x1f52ec) {
            ctx->pc = 0x1F52F0u;
            ctx->in_delay_slot = true; ctx->branch_pc = 0x1F52ECu;
            // 0x1f52f0: 0x24a5ffff  addiu       $a1, $a1, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
        ctx->in_delay_slot = false;
            ctx->pc = 0x1F5308u;
            goto label_1f5308;
        }
    }
    ctx->pc = 0x1F52F4u;
    // 0x1f52f4: 0x8c820058  lw          $v0, 0x58($a0)
    ctx->pc = 0x1f52f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 88)));
label_1f52f8:
    // 0x1f52f8: 0x26030001  addiu       $v1, $s0, 0x1
    ctx->pc = 0x1f52f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1f52fc: 0x471026  xor         $v0, $v0, $a3
    ctx->pc = 0x1f52fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) ^ GPR_U64(ctx, 7));
    // 0x1f5300: 0x62800a  movz        $s0, $v1, $v0
    ctx->pc = 0x1f5300u;
    if (GPR_U64(ctx, 2) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 3));
    // 0x1f5304: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x1f5304u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
label_1f5308:
    // 0x1f5308: 0x14a0fff5  bnez        $a1, . + 4 + (-0xB << 2)
    ctx->pc = 0x1F5308u;
    {
        const bool branch_taken_0x1f5308 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1F530Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5308u;
            // 0x1f530c: 0x248400f0  addiu       $a0, $a0, 0xF0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 240));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5308) {
            ctx->pc = 0x1F52E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1f52e0;
        }
    }
    ctx->pc = 0x1F5310u;
label_1f5310:
    // 0x1f5310: 0x8cc3007c  lw          $v1, 0x7C($a2)
    ctx->pc = 0x1f5310u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 6), 124)));
    // 0x1f5314: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1f5314u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1f5318: 0x14620002  bne         $v1, $v0, . + 4 + (0x2 << 2)
    ctx->pc = 0x1F5318u;
    {
        const bool branch_taken_0x1f5318 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        ctx->pc = 0x1F531Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5318u;
            // 0x1f531c: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1f5318) {
            ctx->pc = 0x1F5324u;
            goto label_1f5324;
        }
    }
    ctx->pc = 0x1F5320u;
    // 0x1f5320: 0x50800a  movz        $s0, $v0, $s0
    ctx->pc = 0x1f5320u;
    if (GPR_U64(ctx, 16) == 0) SET_GPR_VEC(ctx, 16, GPR_VEC(ctx, 2));
label_1f5324:
    // 0x1f5324: 0xc07b676  jal         func_1ED9D8
    ctx->pc = 0x1F5324u;
    SET_GPR_U32(ctx, 31, 0x1F532Cu);
    ctx->pc = 0x1F5328u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5324u;
            // 0x1f5328: 0x3a0202d  daddu       $a0, $sp, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
    ctx->pc = 0x1ED9D8u;
    if (runtime->hasFunction(0x1ED9D8u)) {
        auto targetFn = runtime->lookupFunction(0x1ED9D8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F532Cu; }
        if (ctx->pc != 0x1F532Cu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001ED9D8_0x1ed9d8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x1F532Cu; }
        if (ctx->pc != 0x1F532Cu) { return; }
    }
    ctx->pc = 0x1F532Cu;
label_1f532c:
    // 0x1f532c: 0x200102d  daddu       $v0, $s0, $zero
    ctx->pc = 0x1f532cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1f5330: 0xdfbf0018  ld          $ra, 0x18($sp)
    ctx->pc = 0x1f5330u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1f5334: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x1f5334u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1f5338: 0x3e00008  jr          $ra
    ctx->pc = 0x1F5338u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1F533Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x1F5338u;
            // 0x1f533c: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x1F5340u;
    ctx->pc = 0x1f5340u;
}
