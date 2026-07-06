#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_002CB3C0
// Address: 0x2cb3c0 - 0x2cb428
void sub_002CB3C0_0x2cb3c0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002CB3C0_0x2cb3c0");
#endif

    switch (ctx->pc) {
        case 0x2cb3f8u: goto label_2cb3f8;
        default: break;
    }

    ctx->pc = 0x2cb3c0u;

    // 0x2cb3c0: 0x68820013  ldl         $v0, 0x13($a0)
    ctx->pc = 0x2cb3c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 19); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem << shift)); }
    // 0x2cb3c4: 0x6c82000c  ldr         $v0, 0xC($a0)
    ctx->pc = 0x2cb3c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 4), 12); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 2, (GPR_U64(ctx, 2) & keepMask) | (mem >> shift)); }
    // 0x2cb3c8: 0xb0a20007  sdl         $v0, 0x7($a1)
    ctx->pc = 0x2cb3c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2cb3cc: 0xb4a20000  sdr         $v0, 0x0($a1)
    ctx->pc = 0x2cb3ccu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 5), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2cb3d0: 0x8ca40004  lw          $a0, 0x4($a1)
    ctx->pc = 0x2cb3d0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 4)));
    // 0x2cb3d4: 0x10800006  beqz        $a0, . + 4 + (0x6 << 2)
    ctx->pc = 0x2CB3D4u;
    {
        const bool branch_taken_0x2cb3d4 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb3d4) {
            ctx->pc = 0x2CB3F0u;
            goto label_2cb3f0;
        }
    }
    ctx->pc = 0x2CB3DCu;
    // 0x2cb3dc: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2cb3dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cb3e0: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2cb3e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cb3e4: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x2cb3e4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x2cb3e8: 0x10400007  beqz        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2CB3E8u;
    {
        const bool branch_taken_0x2cb3e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb3e8) {
            ctx->pc = 0x2CB408u;
            goto label_2cb408;
        }
    }
    ctx->pc = 0x2CB3F0u;
label_2cb3f0:
    // 0x2cb3f0: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB3F0u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB3F4u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB3F0u;
            // 0x2cb3f4: 0x24020801  addiu       $v0, $zero, 0x801 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2049));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CB3F8u;
label_2cb3f8:
    // 0x2cb3f8: 0x2482ffff  addiu       $v0, $a0, -0x1
    ctx->pc = 0x2cb3f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 4), 4294967295));
    // 0x2cb3fc: 0xaca60000  sw          $a2, 0x0($a1)
    ctx->pc = 0x2cb3fcu;
    WRITE32(ADD32(GPR_U32(ctx, 5), 0), GPR_U32(ctx, 6));
    // 0x2cb400: 0xaca20004  sw          $v0, 0x4($a1)
    ctx->pc = 0x2cb400u;
    WRITE32(ADD32(GPR_U32(ctx, 5), 4), GPR_U32(ctx, 2));
    // 0x2cb404: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x2cb404u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_2cb408:
    // 0x2cb408: 0x10800005  beqz        $a0, . + 4 + (0x5 << 2)
    ctx->pc = 0x2CB408u;
    {
        const bool branch_taken_0x2cb408 = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        if (branch_taken_0x2cb408) {
            ctx->pc = 0x2CB420u;
            goto label_2cb420;
        }
    }
    ctx->pc = 0x2CB410u;
    // 0x2cb410: 0x8ca30000  lw          $v1, 0x0($a1)
    ctx->pc = 0x2cb410u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 5), 0)));
    // 0x2cb414: 0x90620000  lbu         $v0, 0x0($v1)
    ctx->pc = 0x2cb414u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2cb418: 0x1040fff7  beqz        $v0, . + 4 + (-0x9 << 2)
    ctx->pc = 0x2CB418u;
    {
        const bool branch_taken_0x2cb418 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x2CB41Cu;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB418u;
            // 0x2cb41c: 0x24660001  addiu       $a2, $v1, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 3), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2cb418) {
            ctx->pc = 0x2CB3F8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2cb3f8;
        }
    }
    ctx->pc = 0x2CB420u;
label_2cb420:
    // 0x2cb420: 0x3e00008  jr          $ra
    ctx->pc = 0x2CB420u;
    {
        uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2CB424u;
        ctx->in_delay_slot = true; ctx->branch_pc = 0x2CB420u;
            // 0x2cb424: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        return;
    }
    ctx->pc = 0x2CB428u;
    ctx->pc = 0x2cb428u;
}
