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

// Function: sub_0011D1C8
// Address: 0x11d1c8 - 0x11d378
void sub_0011D1C8_0x11d1c8(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0011D1C8_0x11d1c8");
#endif

    switch (ctx->pc) {
        case 0x11d1f0u: goto label_11d1f0;
        case 0x11d224u: goto label_11d224;
        case 0x11d250u: goto label_11d250;
        case 0x11d2acu: goto label_11d2ac;
        case 0x11d300u: goto label_11d300;
        case 0x11d368u: goto label_11d368;
        default: break;
    }

    ctx->pc = 0x11d1c8u;

label_11d1c8:
    // 0x11d1c8: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x11d1c8u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x11d1cc: 0xffb20020  sd          $s2, 0x20($sp)
    ctx->pc = 0x11d1ccu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 18));
    // 0x11d1d0: 0xffb10010  sd          $s1, 0x10($sp)
    ctx->pc = 0x11d1d0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 17));
    // 0x11d1d4: 0xc0902d  daddu       $s2, $a2, $zero
    ctx->pc = 0x11d1d4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d1d8: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x11d1d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x11d1dc: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x11d1dcu;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d1e0: 0xffb30030  sd          $s3, 0x30($sp)
    ctx->pc = 0x11d1e0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 19));
    // 0x11d1e4: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x11d1e4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x11d1e8: 0xc045ba8  jal         func_116EA0
    ctx->pc = 0x11D1E8u;
    SET_GPR_U32(ctx, 31, 0x11D1F0u);
    ctx->pc = 0x11D1ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D1E8u;
    // 0x11d1ec: 0xa0802d  daddu       $s0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x116EA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EA0u, 0x11D1E8u, 0x11D1F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D1F0u;
label_11d1f0:
    // 0x11d1f0: 0x40982d  daddu       $s3, $v0, $zero
    ctx->pc = 0x11d1f0u;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d1f4: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x11d1f4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x11d1f8: 0x2402001c  addiu       $v0, $zero, 0x1C
    ctx->pc = 0x11d1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x11d1fc: 0x72238818  mult1       $s1, $s1, $v1
    ctx->pc = 0x11d1fcu;
    { int64_t result = (int64_t)GPR_S32(ctx, 17) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 17, (int32_t)result); }
    // 0x11d200: 0x2028018  mult        $s0, $s0, $v0
    ctx->pc = 0x11d200u;
    { int64_t result = (int64_t)GPR_S32(ctx, 16) * (int64_t)GPR_S32(ctx, 2); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 16, (int32_t)result); }
    // 0x11d204: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11d204u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11d208: 0x2442db50  addiu       $v0, $v0, -0x24B0
    ctx->pc = 0x11d208u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957904));
    // 0x11d20c: 0x2118021  addu        $s0, $s0, $s1
    ctx->pc = 0x11d20cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x11d210: 0x2028021  addu        $s0, $s0, $v0
    ctx->pc = 0x11d210u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 2)));
    // 0x11d214: 0x8e100000  lw          $s0, 0x0($s0)
    ctx->pc = 0x11d214u;
    SET_GPR_S32(ctx, 16, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 0)));
    // 0x11d218: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x11d218u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d21c: 0xc043556  jal         func_10D558
    ctx->pc = 0x11D21Cu;
    SET_GPR_U32(ctx, 31, 0x11D224u);
    ctx->pc = 0x11D220u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D21Cu;
    // 0x11d220: 0x260500ff  addiu       $a1, $s0, 0xFF (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 255));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10D558u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10D558u, 0x11D21Cu, 0x11D224u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D224u;
label_11d224:
    // 0x11d224: 0x8e030058  lw          $v1, 0x58($s0)
    ctx->pc = 0x11d224u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 88)));
    // 0x11d228: 0x8e0200d8  lw          $v0, 0xD8($s0)
    ctx->pc = 0x11d228u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 216)));
    // 0x11d22c: 0x1240002e  beqz        $s2, . + 4 + (0x2E << 2)
    ctx->pc = 0x11D22Cu;
    {
        const bool branch_taken_0x11d22c = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D230u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D22Cu;
        // 0x11d230: 0x62182a  slt         $v1, $v1, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 3) < (int64_t)GPR_S64(ctx, 2)) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d22c) {
            ctx->pc = 0x11D2E8u;
            goto label_11d2e8;
        }
    }
    ctx->pc = 0x11D234u;
    // 0x11d234: 0x389c0  sll         $s1, $v1, 7
    ctx->pc = 0x11d234u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x11d238: 0x240302d  daddu       $a2, $s2, $zero
    ctx->pc = 0x11d238u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d23c: 0x2301821  addu        $v1, $s1, $s0
    ctx->pc = 0x11d23cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 17), GPR_U32(ctx, 16)));
    // 0x11d240: 0x661025  or          $v0, $v1, $a2
    ctx->pc = 0x11d240u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 3) | GPR_U64(ctx, 6));
    // 0x11d244: 0x30420007  andi        $v0, $v0, 0x7
    ctx->pc = 0x11d244u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)7);
    // 0x11d248: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x11D248u;
    {
        const bool branch_taken_0x11d248 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D24Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D248u;
        // 0x11d24c: 0x24620080  addiu       $v0, $v1, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 3), 128));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d248) {
            ctx->pc = 0x11D2ACu;
            goto label_11d2ac;
        }
    }
    ctx->pc = 0x11D250u;
label_11d250:
    // 0x11d250: 0x68640007  ldl         $a0, 0x7($v1)
    ctx->pc = 0x11d250u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem << shift)); }
    // 0x11d254: 0x6c640000  ldr         $a0, 0x0($v1)
    ctx->pc = 0x11d254u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 4, (GPR_U64(ctx, 4) & keepMask) | (mem >> shift)); }
    // 0x11d258: 0x6865000f  ldl         $a1, 0xF($v1)
    ctx->pc = 0x11d258u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem << shift)); }
    // 0x11d25c: 0x6c650008  ldr         $a1, 0x8($v1)
    ctx->pc = 0x11d25cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 5, (GPR_U64(ctx, 5) & keepMask) | (mem >> shift)); }
    // 0x11d260: 0x68670017  ldl         $a3, 0x17($v1)
    ctx->pc = 0x11d260u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem << shift)); }
    // 0x11d264: 0x6c670010  ldr         $a3, 0x10($v1)
    ctx->pc = 0x11d264u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 7, (GPR_U64(ctx, 7) & keepMask) | (mem >> shift)); }
    // 0x11d268: 0x6868001f  ldl         $t0, 0x1F($v1)
    ctx->pc = 0x11d268u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = (7u - offset) << 3; uint64_t keepMask = (shift == 0) ? 0ull : ((1ull << shift) - 1ull); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem << shift)); }
    // 0x11d26c: 0x6c680018  ldr         $t0, 0x18($v1)
    ctx->pc = 0x11d26cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint64_t mem = READ64(aligned_addr); uint32_t shift = offset << 3; uint64_t keepMask = (offset == 0) ? 0ull : (0xFFFFFFFFFFFFFFFFull << ((8u - offset) << 3)); SET_GPR_U64(ctx, 8, (GPR_U64(ctx, 8) & keepMask) | (mem >> shift)); }
    // 0x11d270: 0xb0c40007  sdl         $a0, 0x7($a2)
    ctx->pc = 0x11d270u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 7); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11d274: 0xb4c40000  sdr         $a0, 0x0($a2)
    ctx->pc = 0x11d274u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 0); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 4); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11d278: 0xb0c5000f  sdl         $a1, 0xF($a2)
    ctx->pc = 0x11d278u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 15); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11d27c: 0xb4c50008  sdr         $a1, 0x8($a2)
    ctx->pc = 0x11d27cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 8); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 5); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11d280: 0xb0c70017  sdl         $a3, 0x17($a2)
    ctx->pc = 0x11d280u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 23); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11d284: 0xb4c70010  sdr         $a3, 0x10($a2)
    ctx->pc = 0x11d284u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 16); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11d288: 0xb0c8001f  sdl         $t0, 0x1F($a2)
    ctx->pc = 0x11d288u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 31); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11d28c: 0xb4c80018  sdr         $t0, 0x18($a2)
    ctx->pc = 0x11d28cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 6), 24); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 8); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x11d290: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x11d290u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x11d294: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x11d294u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x11d298: 0x0  nop
    ctx->pc = 0x11d298u;
    // NOP
    // 0x11d29c: 0x1462ffec  bne         $v1, $v0, . + 4 + (-0x14 << 2)
    ctx->pc = 0x11D29Cu;
    {
        const bool branch_taken_0x11d29c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11d29c) {
            ctx->pc = 0x11D250u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11d250;
        }
    }
    ctx->pc = 0x11D2A4u;
    // 0x11d2a4: 0x10000012  b           . + 4 + (0x12 << 2)
    ctx->pc = 0x11D2A4u;
    {
        const bool branch_taken_0x11d2a4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D2A8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D2A4u;
        // 0x11d2a8: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d2a4) {
            ctx->pc = 0x11D2F0u;
            goto label_11d2f0;
        }
    }
    ctx->pc = 0x11D2ACu;
label_11d2ac:
    // 0x11d2ac: 0xdc640000  ld          $a0, 0x0($v1)
    ctx->pc = 0x11d2acu;
    SET_GPR_U64(ctx, 4, READ64(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x11d2b0: 0xdc650008  ld          $a1, 0x8($v1)
    ctx->pc = 0x11d2b0u;
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x11d2b4: 0xdc670010  ld          $a3, 0x10($v1)
    ctx->pc = 0x11d2b4u;
    SET_GPR_U64(ctx, 7, READ64(ADD32(GPR_U32(ctx, 3), 16)));
    // 0x11d2b8: 0xdc680018  ld          $t0, 0x18($v1)
    ctx->pc = 0x11d2b8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 3), 24)));
    // 0x11d2bc: 0xfcc40000  sd          $a0, 0x0($a2)
    ctx->pc = 0x11d2bcu;
    WRITE64(ADD32(GPR_U32(ctx, 6), 0), GPR_U64(ctx, 4));
    // 0x11d2c0: 0xfcc50008  sd          $a1, 0x8($a2)
    ctx->pc = 0x11d2c0u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 8), GPR_U64(ctx, 5));
    // 0x11d2c4: 0xfcc70010  sd          $a3, 0x10($a2)
    ctx->pc = 0x11d2c4u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 16), GPR_U64(ctx, 7));
    // 0x11d2c8: 0xfcc80018  sd          $t0, 0x18($a2)
    ctx->pc = 0x11d2c8u;
    WRITE64(ADD32(GPR_U32(ctx, 6), 24), GPR_U64(ctx, 8));
    // 0x11d2cc: 0x24630020  addiu       $v1, $v1, 0x20
    ctx->pc = 0x11d2ccu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 32));
    // 0x11d2d0: 0x24c60020  addiu       $a2, $a2, 0x20
    ctx->pc = 0x11d2d0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32));
    // 0x11d2d4: 0x0  nop
    ctx->pc = 0x11d2d4u;
    // NOP
    // 0x11d2d8: 0x1462fff4  bne         $v1, $v0, . + 4 + (-0xC << 2)
    ctx->pc = 0x11D2D8u;
    {
        const bool branch_taken_0x11d2d8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 2));
        if (branch_taken_0x11d2d8) {
            ctx->pc = 0x11D2ACu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_11d2ac;
        }
    }
    ctx->pc = 0x11D2E0u;
    // 0x11d2e0: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x11D2E0u;
    {
        const bool branch_taken_0x11d2e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D2E4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D2E0u;
        // 0x11d2e4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d2e0) {
            ctx->pc = 0x11D2F0u;
            goto label_11d2f0;
        }
    }
    ctx->pc = 0x11D2E8u;
label_11d2e8:
    // 0x11d2e8: 0x389c0  sll         $s1, $v1, 7
    ctx->pc = 0x11d2e8u;
    SET_GPR_S32(ctx, 17, (int32_t)SLL32(GPR_U32(ctx, 3), 7));
    // 0x11d2ec: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x11d2ecu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_11d2f0:
    // 0x11d2f0: 0x16620004  bne         $s3, $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x11D2F0u;
    {
        const bool branch_taken_0x11d2f0 = (GPR_U64(ctx, 19) != GPR_U64(ctx, 2));
        ctx->pc = 0x11D2F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D2F0u;
        // 0x11d2f4: 0x2111021  addu        $v0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d2f0) {
            ctx->pc = 0x11D304u;
            goto label_11d304;
        }
    }
    ctx->pc = 0x11D2F8u;
    // 0x11d2f8: 0xc045bbc  jal         func_116EF0
    ctx->pc = 0x11D2F8u;
    SET_GPR_U32(ctx, 31, 0x11D300u);
    ctx->pc = 0x116EF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x116EF0u, 0x11D2F8u, 0x11D300u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x11D300u;
label_11d300:
    // 0x11d300: 0x2111021  addu        $v0, $s0, $s1
    ctx->pc = 0x11d300u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
label_11d304:
    // 0x11d304: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x11d304u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x11d308: 0xdfb30030  ld          $s3, 0x30($sp)
    ctx->pc = 0x11d308u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x11d30c: 0xdfb20020  ld          $s2, 0x20($sp)
    ctx->pc = 0x11d30cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x11d310: 0xdfb10010  ld          $s1, 0x10($sp)
    ctx->pc = 0x11d310u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x11d314: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x11d314u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d318: 0x3e00008  jr          $ra
    ctx->pc = 0x11D318u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D31Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D318u;
        // 0x11d31c: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D318u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D320u;
    // 0x11d320: 0x80302d  daddu       $a2, $a0, $zero
    ctx->pc = 0x11d320u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x11d324: 0x24030070  addiu       $v1, $zero, 0x70
    ctx->pc = 0x11d324u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 112));
    // 0x11d328: 0x2404001c  addiu       $a0, $zero, 0x1C
    ctx->pc = 0x11d328u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x11d32c: 0x70c31818  mult1       $v1, $a2, $v1
    ctx->pc = 0x11d32cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 3); ctx->lo1 = (uint64_t)(int64_t)(int32_t)result; ctx->hi1 = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 3, (int32_t)result); }
    // 0x11d330: 0xa42018  mult        $a0, $a1, $a0
    ctx->pc = 0x11d330u;
    { int64_t result = (int64_t)GPR_S32(ctx, 5) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); SET_GPR_S32(ctx, 4, (int32_t)result); }
    // 0x11d334: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x11d334u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x11d338: 0x3c020041  lui         $v0, 0x41
    ctx->pc = 0x11d338u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)65 << 16));
    // 0x11d33c: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x11d33cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x11d340: 0x2442db50  addiu       $v0, $v0, -0x24B0
    ctx->pc = 0x11d340u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294957904));
    // 0x11d344: 0x832021  addu        $a0, $a0, $v1
    ctx->pc = 0x11d344u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 3)));
    // 0x11d348: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x11d348u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x11d34c: 0x8c430010  lw          $v1, 0x10($v0)
    ctx->pc = 0x11d34cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x11d350: 0x14600003  bnez        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x11D350u;
    {
        const bool branch_taken_0x11d350 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x11D354u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D350u;
        // 0x11d354: 0xc0202d  daddu       $a0, $a2, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 6) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d350) {
            ctx->pc = 0x11D360u;
            goto label_11d360;
        }
    }
    ctx->pc = 0x11D358u;
    // 0x11d358: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x11D358u;
    {
        const bool branch_taken_0x11d358 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x11D35Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D358u;
        // 0x11d35c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x11d358) {
            ctx->pc = 0x11D36Cu;
            goto label_11d36c;
        }
    }
    ctx->pc = 0x11D360u;
label_11d360:
    // 0x11d360: 0xc047472  jal         func_11D1C8
    ctx->pc = 0x11D360u;
    SET_GPR_U32(ctx, 31, 0x11D368u);
    ctx->pc = 0x11D364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x11D360u;
    // 0x11d364: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x11D1C8u;
    goto label_11d1c8;
    ctx->pc = 0x11D368u;
label_11d368:
    // 0x11d368: 0x8c420058  lw          $v0, 0x58($v0)
    ctx->pc = 0x11d368u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 88)));
label_11d36c:
    // 0x11d36c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x11d36cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x11d370: 0x3e00008  jr          $ra
    ctx->pc = 0x11D370u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x11D374u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x11D370u;
        // 0x11d374: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x11D370u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x11D378u;
}
