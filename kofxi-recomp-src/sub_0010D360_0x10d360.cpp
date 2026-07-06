#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_0010D360
// Address: 0x10d360 - 0x10d410
void sub_0010D360_0x10d360(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0010D360_0x10d360");
#endif

    switch (ctx->pc) {
        case 0x10d388u: goto label_10d388;
        case 0x10d3b8u: goto label_10d3b8;
        case 0x10d3ccu: goto label_10d3cc;
        default: break;
    }

    ctx->pc = 0x10d360u;

    // 0x10d360: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x10d360u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x10d364: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x10d364u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x10d368: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x10d368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x10d36c: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x10d36cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x10d370: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x10d370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x10d374: 0x40116000  mfc0        $s1, Status
    ctx->pc = 0x10d374u;
    SET_GPR_S32(ctx, 17, (int32_t)ctx->cop0_status);
    // 0x10d378: 0x3c020001  lui         $v0, 0x1
    ctx->pc = 0x10d378u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)1 << 16));
    // 0x10d37c: 0x2228824  and         $s1, $s1, $v0
    ctx->pc = 0x10d37cu;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x10d380: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x10D380u;
    {
        const bool branch_taken_0x10d380 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D384u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D380u;
            // 0x10d384: 0x3c120036  lui         $s2, 0x36 (Delay Slot)
        SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)54 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d380) {
            ctx->pc = 0x10D3ACu;
            goto label_10d3ac;
        }
    }
    ctx->pc = 0x10D388u;
label_10d388:
    // 0x10d388: 0x42000039  di
    ctx->pc = 0x10d388u;
    ctx->cop0_status &= ~0x10000u; // Disable guest EIE interrupt state
    // 0x10d38c: 0x40f  sync.p
    ctx->pc = 0x10d38cu;
    // SYNC instruction - memory barrier
// In recompiled code, we don't need explicit memory barriers
    // 0x10d390: 0x40026000  mfc0        $v0, Status
    ctx->pc = 0x10d390u;
    SET_GPR_S32(ctx, 2, (int32_t)ctx->cop0_status);
    // 0x10d394: 0x3c030001  lui         $v1, 0x1
    ctx->pc = 0x10d394u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)1 << 16));
    // 0x10d398: 0x431024  and         $v0, $v0, $v1
    ctx->pc = 0x10d398u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & GPR_U64(ctx, 3));
    // 0x10d39c: 0x1440fffa  bnez        $v0, . + 4 + (-0x6 << 2)
    ctx->pc = 0x10D39Cu;
    {
        const bool branch_taken_0x10d39c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x10d39c) {
            ctx->pc = 0x10D388u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_10d388;
        }
    }
    ctx->pc = 0x10D3A4u;
    // 0x10d3a4: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x10D3A4u;
    {
        const bool branch_taken_0x10d3a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D3A8u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D3A4u;
            // 0x10d3a8: 0x8e428694  lw          $v0, -0x796C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d3a4) {
            ctx->pc = 0x10D3B0u;
            goto label_10d3b0;
        }
    }
    ctx->pc = 0x10D3ACu;
label_10d3ac:
    // 0x10d3ac: 0x8e428694  lw          $v0, -0x796C($s2)
    ctx->pc = 0x10d3acu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936212)));
label_10d3b0:
    // 0x10d3b0: 0xc043310  jal         func_10CC40
    ctx->pc = 0x10D3B0u;
    SET_GPR_U32(ctx, 31, 0x10D3B8u);
    ctx->pc = 0x10D3B4u;
    ctx->in_delay_slot = true; ctx->branch_pc = 0x10D3B0u;
            // 0x10d3b4: 0x448021  addu        $s0, $v0, $a0 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
        ctx->in_delay_slot = false;
    ctx->pc = 0x10CC40u;
    if (runtime->hasFunction(0x10CC40u)) {
        auto targetFn = runtime->lookupFunction(0x10CC40u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D3B8u; }
        if (ctx->pc != 0x10D3B8u) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_0010CC40_0x10cc40(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D3B8u; }
        if (ctx->pc != 0x10D3B8u) { return; }
    }
    ctx->pc = 0x10D3B8u;
label_10d3b8:
    // 0x10d3b8: 0x50102b  sltu        $v0, $v0, $s0
    ctx->pc = 0x10d3b8u;
    SET_GPR_U64(ctx, 2, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)GPR_U64(ctx, 16)) ? 1 : 0);
    // 0x10d3bc: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x10D3BCu;
    {
        const bool branch_taken_0x10d3bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D3C0u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D3BCu;
            // 0x10d3c0: 0x8e428694  lw          $v0, -0x796C($s2) (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294936212)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d3bc) {
            ctx->pc = 0x10D3E8u;
            goto label_10d3e8;
        }
    }
    ctx->pc = 0x10D3C4u;
    // 0x10d3c4: 0xc0491f2  jal         func_1247C8
    ctx->pc = 0x10D3C4u;
    SET_GPR_U32(ctx, 31, 0x10D3CCu);
    ctx->pc = 0x1247C8u;
    if (runtime->hasFunction(0x1247C8u)) {
        auto targetFn = runtime->lookupFunction(0x1247C8u);
        const uint32_t __entryPc = ctx->pc;
        targetFn(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D3CCu; }
        if (ctx->pc != 0x10D3CCu) { return; }
    } else {
        const uint32_t __entryPc = ctx->pc;
        sub_001247C8_0x1247c8(rdram, ctx, runtime);
        if (ctx->pc == __entryPc) { ctx->pc = 0x10D3CCu; }
        if (ctx->pc != 0x10D3CCu) { return; }
    }
    ctx->pc = 0x10D3CCu;
label_10d3cc:
    // 0x10d3cc: 0x2403000c  addiu       $v1, $zero, 0xC
    ctx->pc = 0x10d3ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 12));
    // 0x10d3d0: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10D3D0u;
    {
        const bool branch_taken_0x10d3d0 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D3D4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D3D0u;
            // 0x10d3d4: 0xac430000  sw          $v1, 0x0($v0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 2), 0), GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d3d0) {
            ctx->pc = 0x10D3DCu;
            goto label_10d3dc;
        }
    }
    ctx->pc = 0x10D3D8u;
    // 0x10d3d8: 0x42000038  ei
    ctx->pc = 0x10d3d8u;
    ctx->cop0_status |= 0x10000u; // Enable guest EIE interrupt state
label_10d3dc:
    // 0x10d3dc: 0x3c02ffff  lui         $v0, 0xFFFF
    ctx->pc = 0x10d3dcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65535 << 16));
    // 0x10d3e0: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x10D3E0u;
    {
        const bool branch_taken_0x10d3e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D3E4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D3E0u;
            // 0x10d3e4: 0x3442ffff  ori         $v0, $v0, 0xFFFF (Delay Slot)
        SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d3e0) {
            ctx->pc = 0x10D3F4u;
            goto label_10d3f4;
        }
    }
    ctx->pc = 0x10D3E8u;
label_10d3e8:
    // 0x10d3e8: 0x12200002  beqz        $s1, . + 4 + (0x2 << 2)
    ctx->pc = 0x10D3E8u;
    {
        const bool branch_taken_0x10d3e8 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x10D3ECu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D3E8u;
            // 0x10d3ec: 0xae508694  sw          $s0, -0x796C($s2) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 18), 4294936212), GPR_U32(ctx, 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x10d3e8) {
            ctx->pc = 0x10D3F4u;
            goto label_10d3f4;
        }
    }
    ctx->pc = 0x10D3F0u;
    // 0x10d3f0: 0x42000038  ei
    ctx->pc = 0x10d3f0u;
    ctx->cop0_status |= 0x10000u; // Enable guest EIE interrupt state
label_10d3f4:
    // 0x10d3f4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x10d3f4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x10d3f8: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x10d3f8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x10d3fc: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x10d3fcu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x10d400: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x10d400u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x10d404: 0x3e00008  jr          $ra
    ctx->pc = 0x10D404u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x10D408u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x10D404u;
            // 0x10d408: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x10D40Cu;
    // 0x10d40c: 0x0  nop
    ctx->pc = 0x10d40cu;
    // NOP
    ctx->pc = 0x10d410u;
}
