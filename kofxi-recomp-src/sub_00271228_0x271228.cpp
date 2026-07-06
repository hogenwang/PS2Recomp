#include <stdexcept>
#include "ps2_runtime_macros.h"
#include "ps2_runtime.h"
#include "ps2_recompiled_functions.h"
#include "ps2_recompiled_stubs.h"

#include "ps2_syscalls.h"
#include "ps2_stubs.h"

#ifdef PS2_FUNCTION_LOG_TRACKER
#include "ps2_log.h"
#endif

// Function: sub_00271228
// Address: 0x271228 - 0x271438
void sub_00271228_0x271228(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00271228_0x271228");
#endif

    switch (ctx->pc) {
        case 0x271260u: goto label_271260;
        case 0x27129cu: goto label_27129c;
        case 0x271324u: goto label_271324;
        case 0x271344u: goto label_271344;
        case 0x271390u: goto label_271390;
        case 0x2713a0u: goto label_2713a0;
        case 0x2713d0u: goto label_2713d0;
        case 0x2713ecu: goto label_2713ec;
        default: break;
    }

    ctx->pc = 0x271228u;

    // 0x271228: 0x27bdff40  addiu       $sp, $sp, -0xC0
    ctx->pc = 0x271228u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967104));
    // 0x27122c: 0x3c0f0040  lui         $t7, 0x40
    ctx->pc = 0x27122cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64 << 16));
    // 0x271230: 0xffb00090  sd          $s0, 0x90($sp)
    ctx->pc = 0x271230u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 16));
    // 0x271234: 0x25ef9d68  addiu       $t7, $t7, -0x6298
    ctx->pc = 0x271234u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294942056));
    // 0x271238: 0xffb10098  sd          $s1, 0x98($sp)
    ctx->pc = 0x271238u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 152), GPR_U64(ctx, 17));
    // 0x27123c: 0xa0582d  daddu       $t3, $a1, $zero
    ctx->pc = 0x27123cu;
    SET_GPR_U64(ctx, 11, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271240: 0xffb200a0  sd          $s2, 0xA0($sp)
    ctx->pc = 0x271240u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 18));
    // 0x271244: 0xc0802d  daddu       $s0, $a2, $zero
    ctx->pc = 0x271244u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271248: 0xffb300a8  sd          $s3, 0xA8($sp)
    ctx->pc = 0x271248u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 168), GPR_U64(ctx, 19));
    // 0x27124c: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x27124cu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271250: 0xffb400b0  sd          $s4, 0xB0($sp)
    ctx->pc = 0x271250u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 176), GPR_U64(ctx, 20));
    // 0x271254: 0x3a0702d  daddu       $t6, $sp, $zero
    ctx->pc = 0x271254u;
    SET_GPR_U64(ctx, 14, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271258: 0xffbf00b8  sd          $ra, 0xB8($sp)
    ctx->pc = 0x271258u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 184), GPR_U64(ctx, 31));
    // 0x27125c: 0x25ed0040  addiu       $t5, $t7, 0x40
    ctx->pc = 0x27125cu;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 64));
label_271260:
    // 0x271260: 0x69e80007  ldl         $t0, 0x7($t7)
    ctx->pc = 0x271260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x271264: 0x6de80000  ldr         $t0, 0x0($t7)
    ctx->pc = 0x271264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x271268: 0x69e9000f  ldl         $t1, 0xF($t7)
    ctx->pc = 0x271268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x27126c: 0x6de90008  ldr         $t1, 0x8($t7)
    ctx->pc = 0x27126cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x271270: 0xb1c80007  sdl         $t0, 0x7($t6)
    ctx->pc = 0x271270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x271274: 0xb5c80000  sdr         $t0, 0x0($t6)
    ctx->pc = 0x271274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x271278: 0xb1c9000f  sdl         $t1, 0xF($t6)
    ctx->pc = 0x271278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27127c: 0xb5c90008  sdr         $t1, 0x8($t6)
    ctx->pc = 0x27127cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x271280: 0x25ef0010  addiu       $t7, $t7, 0x10
    ctx->pc = 0x271280u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 16));
    // 0x271284: 0x15edfff6  bne         $t7, $t5, . + 4 + (-0xA << 2)
    ctx->pc = 0x271284u;
    {
        const bool branch_taken_0x271284 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 13));
        ctx->pc = 0x271288u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271284u;
        // 0x271288: 0x25ce0010  addiu       $t6, $t6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271284) {
            ctx->pc = 0x271260u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_271260;
        }
    }
    ctx->pc = 0x27128Cu;
    // 0x27128c: 0x3c0f0040  lui         $t7, 0x40
    ctx->pc = 0x27128cu;
    SET_GPR_S32(ctx, 15, (int32_t)((uint32_t)64 << 16));
    // 0x271290: 0x27ae0040  addiu       $t6, $sp, 0x40
    ctx->pc = 0x271290u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x271294: 0x25ef9da8  addiu       $t7, $t7, -0x6258
    ctx->pc = 0x271294u;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 4294942120));
    // 0x271298: 0x25ed0040  addiu       $t5, $t7, 0x40
    ctx->pc = 0x271298u;
    SET_GPR_S32(ctx, 13, (int32_t)ADD32(GPR_U32(ctx, 15), 64));
label_27129c:
    // 0x27129c: 0x69e80007  ldl         $t0, 0x7($t7)
    ctx->pc = 0x27129cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x2712a0: 0x6de80000  ldr         $t0, 0x0($t7)
    ctx->pc = 0x2712a0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x2712a4: 0x69e9000f  ldl         $t1, 0xF($t7)
    ctx->pc = 0x2712a4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem << shift)); }
    // 0x2712a8: 0x6de90008  ldr         $t1, 0x8($t7)
    ctx->pc = 0x2712a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 9, (GPR_U64(ctx, 9) & keepMask) | (mem >> shift)); }
    // 0x2712ac: 0xb1c80007  sdl         $t0, 0x7($t6)
    ctx->pc = 0x2712acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2712b0: 0xb5c80000  sdr         $t0, 0x0($t6)
    ctx->pc = 0x2712b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2712b4: 0xb1c9000f  sdl         $t1, 0xF($t6)
    ctx->pc = 0x2712b4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2712b8: 0xb5c90008  sdr         $t1, 0x8($t6)
    ctx->pc = 0x2712b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 9); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2712bc: 0x25ef0010  addiu       $t7, $t7, 0x10
    ctx->pc = 0x2712bcu;
    SET_GPR_S32(ctx, 15, (int32_t)ADD32(GPR_U32(ctx, 15), 16));
    // 0x2712c0: 0x15edfff6  bne         $t7, $t5, . + 4 + (-0xA << 2)
    ctx->pc = 0x2712C0u;
    {
        const bool branch_taken_0x2712c0 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 13));
        ctx->pc = 0x2712C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2712C0u;
        // 0x2712c4: 0x25ce0010  addiu       $t6, $t6, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 14), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2712c0) {
            ctx->pc = 0x27129Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_27129c;
        }
    }
    ctx->pc = 0x2712C8u;
    // 0x2712c8: 0x916a0005  lbu         $t2, 0x5($t3)
    ctx->pc = 0x2712c8u;
    SET_GPR_U32(ctx, 10, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 5)));
    // 0x2712cc: 0x27a40080  addiu       $a0, $sp, 0x80
    ctx->pc = 0x2712ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    // 0x2712d0: 0x91660000  lbu         $a2, 0x0($t3)
    ctx->pc = 0x2712d0u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 0)));
    // 0x2712d4: 0x27a50088  addiu       $a1, $sp, 0x88
    ctx->pc = 0x2712d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 136));
    // 0x2712d8: 0x916e0002  lbu         $t6, 0x2($t3)
    ctx->pc = 0x2712d8u;
    SET_GPR_U32(ctx, 14, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 2)));
    // 0x2712dc: 0xa5438  dsll        $t2, $t2, 16
    ctx->pc = 0x2712dcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) << 16);
    // 0x2712e0: 0x916d0001  lbu         $t5, 0x1($t3)
    ctx->pc = 0x2712e0u;
    SET_GPR_U32(ctx, 13, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 1)));
    // 0x2712e4: 0x63638  dsll        $a2, $a2, 24
    ctx->pc = 0x2712e4u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) << 24);
    // 0x2712e8: 0x91670004  lbu         $a3, 0x4($t3)
    ctx->pc = 0x2712e8u;
    SET_GPR_U32(ctx, 7, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 4)));
    // 0x2712ec: 0xe7238  dsll        $t6, $t6, 8
    ctx->pc = 0x2712ecu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) << 8);
    // 0x2712f0: 0x916f0006  lbu         $t7, 0x6($t3)
    ctx->pc = 0x2712f0u;
    SET_GPR_U32(ctx, 15, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 6)));
    // 0x2712f4: 0xd6c38  dsll        $t5, $t5, 16
    ctx->pc = 0x2712f4u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) << 16);
    // 0x2712f8: 0x916c0003  lbu         $t4, 0x3($t3)
    ctx->pc = 0x2712f8u;
    SET_GPR_U32(ctx, 12, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 3)));
    // 0x2712fc: 0x73e38  dsll        $a3, $a3, 24
    ctx->pc = 0x2712fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) << 24);
    // 0x271300: 0xf7a38  dsll        $t7, $t7, 8
    ctx->pc = 0x271300u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) << 8);
    // 0x271304: 0x1cd7025  or          $t6, $t6, $t5
    ctx->pc = 0x271304u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) | GPR_U64(ctx, 13));
    // 0x271308: 0x916b0007  lbu         $t3, 0x7($t3)
    ctx->pc = 0x271308u;
    SET_GPR_U32(ctx, 11, (uint8_t)READ8(ADD32(GPR_U32(ctx, 11), 7)));
    // 0x27130c: 0xcc3025  or          $a2, $a2, $t4
    ctx->pc = 0x27130cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 12));
    // 0x271310: 0x1ea7825  or          $t7, $t7, $t2
    ctx->pc = 0x271310u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) | GPR_U64(ctx, 10));
    // 0x271314: 0xce3025  or          $a2, $a2, $t6
    ctx->pc = 0x271314u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 14));
    // 0x271318: 0xeb3825  or          $a3, $a3, $t3
    ctx->pc = 0x271318u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 11));
    // 0x27131c: 0xc09c50e  jal         func_271438
    ctx->pc = 0x27131Cu;
    SET_GPR_U32(ctx, 31, 0x271324u);
    ctx->pc = 0x271320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27131Cu;
    // 0x271320: 0xef3825  or          $a3, $a3, $t7 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 15));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271438u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271438u, 0x27131Cu, 0x271324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271324u;
label_271324:
    // 0x271324: 0x12000025  beqz        $s0, . + 4 + (0x25 << 2)
    ctx->pc = 0x271324u;
    {
        const bool branch_taken_0x271324 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x271328u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271324u;
        // 0x271328: 0x220802d  daddu       $s0, $s1, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271324) {
            ctx->pc = 0x2713BCu;
            goto label_2713bc;
        }
    }
    ctx->pc = 0x27132Cu;
    // 0x27132c: 0x3c130fff  lui         $s3, 0xFFF
    ctx->pc = 0x27132cu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4095 << 16));
    // 0x271330: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x271330u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271334: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x271334u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x271338: 0x2414001c  addiu       $s4, $zero, 0x1C
    ctx->pc = 0x271338u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x27133c: 0x3a0902d  daddu       $s2, $sp, $zero
    ctx->pc = 0x27133cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271340: 0x8e470000  lw          $a3, 0x0($s2)
    ctx->pc = 0x271340u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
label_271344:
    // 0x271344: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x271344u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x271348: 0xdfae0080  ld          $t6, 0x80($sp)
    ctx->pc = 0x271348u;
    SET_GPR_U64(ctx, 14, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x27134c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x27134cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x271350: 0xdfaf0088  ld          $t7, 0x88($sp)
    ctx->pc = 0x271350u;
    SET_GPR_U64(ctx, 15, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x271354: 0x2876823  subu        $t5, $s4, $a3
    ctx->pc = 0x271354u;
    SET_GPR_S32(ctx, 13, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 7)));
    // 0x271358: 0xee3014  dsllv       $a2, $t6, $a3
    ctx->pc = 0x271358u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 14) << (GPR_U32(ctx, 7) & 0x3F));
    // 0x27135c: 0x26310001  addiu       $s1, $s1, 0x1
    ctx->pc = 0x27135cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 1));
    // 0x271360: 0xef3814  dsllv       $a3, $t7, $a3
    ctx->pc = 0x271360u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 15) << (GPR_U32(ctx, 7) & 0x3F));
    // 0x271364: 0x1ae7016  dsrlv       $t6, $t6, $t5
    ctx->pc = 0x271364u;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) >> (GPR_U32(ctx, 13) & 0x3F));
    // 0x271368: 0x1af7816  dsrlv       $t7, $t7, $t5
    ctx->pc = 0x271368u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) >> (GPR_U32(ctx, 13) & 0x3F));
    // 0x27136c: 0xd33024  and         $a2, $a2, $s3
    ctx->pc = 0x27136cu;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) & GPR_U64(ctx, 19));
    // 0x271370: 0xf33824  and         $a3, $a3, $s3
    ctx->pc = 0x271370u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) & GPR_U64(ctx, 19));
    // 0x271374: 0xce3025  or          $a2, $a2, $t6
    ctx->pc = 0x271374u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 6) | GPR_U64(ctx, 14));
    // 0x271378: 0xef3825  or          $a3, $a3, $t7
    ctx->pc = 0x271378u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 15));
    // 0x27137c: 0xffa60080  sd          $a2, 0x80($sp)
    ctx->pc = 0x27137cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 6));
    // 0x271380: 0xffa70088  sd          $a3, 0x88($sp)
    ctx->pc = 0x271380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 7));
    // 0x271384: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x271384u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x271388: 0xc09c562  jal         func_271588
    ctx->pc = 0x271388u;
    SET_GPR_U32(ctx, 31, 0x271390u);
    ctx->pc = 0x27138Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x271388u;
    // 0x27138c: 0x26520004  addiu       $s2, $s2, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271588u, 0x271388u, 0x271390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x271390u;
label_271390:
    // 0x271390: 0x2a2f0010  slti        $t7, $s1, 0x10
    ctx->pc = 0x271390u;
    SET_GPR_U64(ctx, 15, ((int64_t)GPR_S64(ctx, 17) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x271394: 0x55e0ffeb  bnel        $t7, $zero, . + 4 + (-0x15 << 2)
    ctx->pc = 0x271394u;
    {
        const bool branch_taken_0x271394 = (GPR_U64(ctx, 15) != GPR_U64(ctx, 0));
        if (branch_taken_0x271394) {
            ctx->pc = 0x271398u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x271394u;
            // 0x271398: 0x8e470000  lw          $a3, 0x0($s2) (Delay Slot)
            SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x271344u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_271344;
        }
    }
    ctx->pc = 0x27139Cu;
    // 0x27139c: 0xdfb00090  ld          $s0, 0x90($sp)
    ctx->pc = 0x27139cu;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
label_2713a0:
    // 0x2713a0: 0xdfb10098  ld          $s1, 0x98($sp)
    ctx->pc = 0x2713a0u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 152)));
    // 0x2713a4: 0xdfb200a0  ld          $s2, 0xA0($sp)
    ctx->pc = 0x2713a4u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x2713a8: 0xdfb300a8  ld          $s3, 0xA8($sp)
    ctx->pc = 0x2713a8u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x2713ac: 0xdfb400b0  ld          $s4, 0xB0($sp)
    ctx->pc = 0x2713acu;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x2713b0: 0xdfbf00b8  ld          $ra, 0xB8($sp)
    ctx->pc = 0x2713b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x2713b4: 0x3e00008  jr          $ra
    ctx->pc = 0x2713B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2713B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2713B4u;
        // 0x2713b8: 0x27bd00c0  addiu       $sp, $sp, 0xC0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 192));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2713B4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2713BCu;
label_2713bc:
    // 0x2713bc: 0x3c130fff  lui         $s3, 0xFFF
    ctx->pc = 0x2713bcu;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)4095 << 16));
    // 0x2713c0: 0x2414001c  addiu       $s4, $zero, 0x1C
    ctx->pc = 0x2713c0u;
    SET_GPR_S32(ctx, 20, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x2713c4: 0x3673ffff  ori         $s3, $s3, 0xFFFF
    ctx->pc = 0x2713c4u;
    SET_GPR_U64(ctx, 19, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65535);
    // 0x2713c8: 0x27b2007c  addiu       $s2, $sp, 0x7C
    ctx->pc = 0x2713c8u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 29), 124));
    // 0x2713cc: 0x2411000f  addiu       $s1, $zero, 0xF
    ctx->pc = 0x2713ccu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
label_2713d0:
    // 0x2713d0: 0xdfa60080  ld          $a2, 0x80($sp)
    ctx->pc = 0x2713d0u;
    SET_GPR_U64(ctx, 6, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2713d4: 0x26050008  addiu       $a1, $s0, 0x8
    ctx->pc = 0x2713d4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x2713d8: 0xdfa70088  ld          $a3, 0x88($sp)
    ctx->pc = 0x2713d8u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2713dc: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x2713dcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2713e0: 0x26100010  addiu       $s0, $s0, 0x10
    ctx->pc = 0x2713e0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
    // 0x2713e4: 0xc09c562  jal         func_271588
    ctx->pc = 0x2713E4u;
    SET_GPR_U32(ctx, 31, 0x2713ECu);
    ctx->pc = 0x2713E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2713E4u;
    // 0x2713e8: 0x2631ffff  addiu       $s1, $s1, -0x1 (Delay Slot)
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4294967295));
    ctx->in_delay_slot = false;
    ctx->pc = 0x271588u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x271588u, 0x2713E4u, 0x2713ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2713ECu;
label_2713ec:
    // 0x2713ec: 0x8e4b0000  lw          $t3, 0x0($s2)
    ctx->pc = 0x2713ecu;
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 0)));
    // 0x2713f0: 0xdfad0080  ld          $t5, 0x80($sp)
    ctx->pc = 0x2713f0u;
    SET_GPR_U64(ctx, 13, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x2713f4: 0xdfac0088  ld          $t4, 0x88($sp)
    ctx->pc = 0x2713f4u;
    SET_GPR_U64(ctx, 12, READ64(ADD32(GPR_U32(ctx, 29), 136)));
    // 0x2713f8: 0x28b7823  subu        $t7, $s4, $t3
    ctx->pc = 0x2713f8u;
    SET_GPR_S32(ctx, 15, (int32_t)SUB32(GPR_U32(ctx, 20), GPR_U32(ctx, 11)));
    // 0x2713fc: 0x1ed7014  dsllv       $t6, $t5, $t7
    ctx->pc = 0x2713fcu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 13) << (GPR_U32(ctx, 15) & 0x3F));
    // 0x271400: 0x2652fffc  addiu       $s2, $s2, -0x4
    ctx->pc = 0x271400u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 4294967292));
    // 0x271404: 0x1ec7814  dsllv       $t7, $t4, $t7
    ctx->pc = 0x271404u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 12) << (GPR_U32(ctx, 15) & 0x3F));
    // 0x271408: 0x16d6816  dsrlv       $t5, $t5, $t3
    ctx->pc = 0x271408u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) >> (GPR_U32(ctx, 11) & 0x3F));
    // 0x27140c: 0x1d37024  and         $t6, $t6, $s3
    ctx->pc = 0x27140cu;
    SET_GPR_U64(ctx, 14, GPR_U64(ctx, 14) & GPR_U64(ctx, 19));
    // 0x271410: 0x16c6016  dsrlv       $t4, $t4, $t3
    ctx->pc = 0x271410u;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) >> (GPR_U32(ctx, 11) & 0x3F));
    // 0x271414: 0x1f37824  and         $t7, $t7, $s3
    ctx->pc = 0x271414u;
    SET_GPR_U64(ctx, 15, GPR_U64(ctx, 15) & GPR_U64(ctx, 19));
    // 0x271418: 0x1ae6825  or          $t5, $t5, $t6
    ctx->pc = 0x271418u;
    SET_GPR_U64(ctx, 13, GPR_U64(ctx, 13) | GPR_U64(ctx, 14));
    // 0x27141c: 0x18f6025  or          $t4, $t4, $t7
    ctx->pc = 0x27141cu;
    SET_GPR_U64(ctx, 12, GPR_U64(ctx, 12) | GPR_U64(ctx, 15));
    // 0x271420: 0xffad0080  sd          $t5, 0x80($sp)
    ctx->pc = 0x271420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 13));
    // 0x271424: 0x621ffea  bgez        $s1, . + 4 + (-0x16 << 2)
    ctx->pc = 0x271424u;
    {
        const bool branch_taken_0x271424 = (GPR_S32(ctx, 17) >= 0);
        ctx->pc = 0x271428u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x271424u;
        // 0x271428: 0xffac0088  sd          $t4, 0x88($sp) (Delay Slot)
        WRITE64(ADD32(GPR_U32(ctx, 29), 136), GPR_U64(ctx, 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x271424) {
            ctx->pc = 0x2713D0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2713d0;
        }
    }
    ctx->pc = 0x27142Cu;
    // 0x27142c: 0x1000ffdc  b           . + 4 + (-0x24 << 2)
    ctx->pc = 0x27142Cu;
    {
        const bool branch_taken_0x27142c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x271430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27142Cu;
        // 0x271430: 0xdfb00090  ld          $s0, 0x90($sp) (Delay Slot)
        SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 144)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27142c) {
            ctx->pc = 0x2713A0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_2713a0;
        }
    }
    ctx->pc = 0x271434u;
    // 0x271434: 0x0  nop
    ctx->pc = 0x271434u;
    // NOP
}
