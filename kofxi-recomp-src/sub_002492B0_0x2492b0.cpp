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

// Function: sub_002492B0
// Address: 0x2492b0 - 0x249458
void sub_002492B0_0x2492b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002492B0_0x2492b0");
#endif

    switch (ctx->pc) {
        case 0x2492d4u: goto label_2492d4;
        case 0x2492e0u: goto label_2492e0;
        case 0x2492ecu: goto label_2492ec;
        case 0x249324u: goto label_249324;
        case 0x2493d4u: goto label_2493d4;
        case 0x249424u: goto label_249424;
        default: break;
    }

    ctx->pc = 0x2492b0u;

    // 0x2492b0: 0x27bdff50  addiu       $sp, $sp, -0xB0
    ctx->pc = 0x2492b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967120));
    // 0x2492b4: 0xffb30090  sd          $s3, 0x90($sp)
    ctx->pc = 0x2492b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 144), GPR_U64(ctx, 19));
    // 0x2492b8: 0xffb20080  sd          $s2, 0x80($sp)
    ctx->pc = 0x2492b8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 128), GPR_U64(ctx, 18));
    // 0x2492bc: 0xa0982d  daddu       $s3, $a1, $zero
    ctx->pc = 0x2492bcu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2492c0: 0xffbf00a0  sd          $ra, 0xA0($sp)
    ctx->pc = 0x2492c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 160), GPR_U64(ctx, 31));
    // 0x2492c4: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x2492c4u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2492c8: 0xffb10070  sd          $s1, 0x70($sp)
    ctx->pc = 0x2492c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 112), GPR_U64(ctx, 17));
    // 0x2492cc: 0xc08c682  jal         func_231A08
    ctx->pc = 0x2492CCu;
    SET_GPR_U32(ctx, 31, 0x2492D4u);
    ctx->pc = 0x2492D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2492CCu;
    // 0x2492d0: 0xffb00060  sd          $s0, 0x60($sp) (Delay Slot)
    WRITE64(ADD32(GPR_U32(ctx, 29), 96), GPR_U64(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A08u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A08u, 0x2492CCu, 0x2492D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2492D4u;
label_2492d4:
    // 0x2492d4: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x2492d4u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2492d8: 0xc098552  jal         func_261548
    ctx->pc = 0x2492D8u;
    SET_GPR_U32(ctx, 31, 0x2492E0u);
    ctx->pc = 0x2492DCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2492D8u;
    // 0x2492dc: 0x24040100  addiu       $a0, $zero, 0x100 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 256));
    ctx->in_delay_slot = false;
    ctx->pc = 0x261548u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x261548u, 0x2492D8u, 0x2492E0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2492E0u;
label_2492e0:
    // 0x2492e0: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x2492e0u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2492e4: 0xc08c698  jal         func_231A60
    ctx->pc = 0x2492E4u;
    SET_GPR_U32(ctx, 31, 0x2492ECu);
    ctx->pc = 0x2492E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2492E4u;
    // 0x2492e8: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x231A60u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x231A60u, 0x2492E4u, 0x2492ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2492ECu;
label_2492ec:
    // 0x2492ec: 0x1220000a  beqz        $s1, . + 4 + (0xA << 2)
    ctx->pc = 0x2492ECu;
    {
        const bool branch_taken_0x2492ec = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x2492F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2492ECu;
        // 0x2492f0: 0x24030002  addiu       $v1, $zero, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x2492ec) {
            ctx->pc = 0x249318u;
            goto label_249318;
        }
    }
    ctx->pc = 0x2492F4u;
    // 0x2492f4: 0x26220020  addiu       $v0, $s1, 0x20
    ctx->pc = 0x2492f4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 17), 32));
    // 0x2492f8: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x2492f8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x2492fc: 0xa6230012  sh          $v1, 0x12($s1)
    ctx->pc = 0x2492fcu;
    WRITE16(ADD32(GPR_U32(ctx, 17), 18), (uint16_t)GPR_U32(ctx, 3));
    // 0x249300: 0xa6230010  sh          $v1, 0x10($s1)
    ctx->pc = 0x249300u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 16), (uint16_t)GPR_U32(ctx, 3));
    // 0x249304: 0xae200000  sw          $zero, 0x0($s1)
    ctx->pc = 0x249304u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 0), GPR_U32(ctx, 0));
    // 0x249308: 0xae200004  sw          $zero, 0x4($s1)
    ctx->pc = 0x249308u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4), GPR_U32(ctx, 0));
    // 0x24930c: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x24930Cu;
    {
        const bool branch_taken_0x24930c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x249310u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24930Cu;
        // 0x249310: 0xae20001c  sw          $zero, 0x1C($s1) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 17), 28), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x24930c) {
            ctx->pc = 0x249328u;
            goto label_249328;
        }
    }
    ctx->pc = 0x249314u;
    // 0x249314: 0x0  nop
    ctx->pc = 0x249314u;
    // NOP
label_249318:
    // 0x249318: 0x24040001  addiu       $a0, $zero, 0x1
    ctx->pc = 0x249318u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x24931c: 0xc08a8cc  jal         func_22A330
    ctx->pc = 0x24931Cu;
    SET_GPR_U32(ctx, 31, 0x249324u);
    ctx->pc = 0x249320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24931Cu;
    // 0x249320: 0x24050002  addiu       $a1, $zero, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x22A330u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x22A330u, 0x24931Cu, 0x249324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249324u;
label_249324:
    // 0x249324: 0x40882d  daddu       $s1, $v0, $zero
    ctx->pc = 0x249324u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_249328:
    // 0x249328: 0x12200043  beqz        $s1, . + 4 + (0x43 << 2)
    ctx->pc = 0x249328u;
    {
        const bool branch_taken_0x249328 = (GPR_U64(ctx, 17) == GPR_U64(ctx, 0));
        ctx->pc = 0x24932Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x249328u;
        // 0x24932c: 0x3c04003a  lui         $a0, 0x3A (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)58 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x249328) {
            ctx->pc = 0x249438u;
            goto label_249438;
        }
    }
    ctx->pc = 0x249330u;
    // 0x249330: 0x8e220008  lw          $v0, 0x8($s1)
    ctx->pc = 0x249330u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x249334: 0x8c85f9e8  lw          $a1, -0x618($a0)
    ctx->pc = 0x249334u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 4294965736)));
    // 0x249338: 0x2403001c  addiu       $v1, $zero, 0x1C
    ctx->pc = 0x249338u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 28));
    // 0x24933c: 0xae23000c  sw          $v1, 0xC($s1)
    ctx->pc = 0x24933cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 3));
    // 0x249340: 0x24060002  addiu       $a2, $zero, 0x2
    ctx->pc = 0x249340u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x249344: 0x451021  addu        $v0, $v0, $a1
    ctx->pc = 0x249344u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 5)));
    // 0x249348: 0xae230018  sw          $v1, 0x18($s1)
    ctx->pc = 0x249348u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 24), GPR_U32(ctx, 3));
    // 0x24934c: 0xae220008  sw          $v0, 0x8($s1)
    ctx->pc = 0x24934cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 2));
    // 0x249350: 0x3c07003a  lui         $a3, 0x3A
    ctx->pc = 0x249350u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)58 << 16));
    // 0x249354: 0xa0430002  sb          $v1, 0x2($v0)
    ctx->pc = 0x249354u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 2), (uint8_t)GPR_U32(ctx, 3));
    // 0x249358: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x249358u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x24935c: 0xa0460009  sb          $a2, 0x9($v0)
    ctx->pc = 0x24935cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 9), (uint8_t)GPR_U32(ctx, 6));
    // 0x249360: 0x24050008  addiu       $a1, $zero, 0x8
    ctx->pc = 0x249360u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x249364: 0xa0400001  sb          $zero, 0x1($v0)
    ctx->pc = 0x249364u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x249368: 0xa0400003  sb          $zero, 0x3($v0)
    ctx->pc = 0x249368u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 3), (uint8_t)GPR_U32(ctx, 0));
    // 0x24936c: 0xa0400006  sb          $zero, 0x6($v0)
    ctx->pc = 0x24936cu;
    WRITE8(ADD32(GPR_U32(ctx, 2), 6), (uint8_t)GPR_U32(ctx, 0));
    // 0x249370: 0xa0400007  sb          $zero, 0x7($v0)
    ctx->pc = 0x249370u;
    WRITE8(ADD32(GPR_U32(ctx, 2), 7), (uint8_t)GPR_U32(ctx, 0));
    // 0x249374: 0x24e901d0  addiu       $t1, $a3, 0x1D0
    ctx->pc = 0x249374u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 7), 464));
    // 0x249378: 0x89230003  lwl         $v1, 0x3($t1)
    ctx->pc = 0x249378u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x24937c: 0x99230000  lwr         $v1, 0x0($t1)
    ctx->pc = 0x24937cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x249380: 0xa843000f  swl         $v1, 0xF($v0)
    ctx->pc = 0x249380u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 15); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x249384: 0xb843000c  swr         $v1, 0xC($v0)
    ctx->pc = 0x249384u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 12); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x249388: 0x8a430003  lwl         $v1, 0x3($s2)
    ctx->pc = 0x249388u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 3) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 3, (int32_t)merged); }
    // 0x24938c: 0x9a430000  lwr         $v1, 0x0($s2)
    ctx->pc = 0x24938cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 3) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 3) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 3, merged64); }
    // 0x249390: 0xa8430013  swl         $v1, 0x13($v0)
    ctx->pc = 0x249390u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 19); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x249394: 0xb8430010  swr         $v1, 0x10($v0)
    ctx->pc = 0x249394u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 2), 16); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 3); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x249398: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x249398u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x24939c: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x24939cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2493a0: 0x24700014  addiu       $s0, $v1, 0x14
    ctx->pc = 0x2493a0u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 3), 20));
    // 0x2493a4: 0x2442ffec  addiu       $v0, $v0, -0x14
    ctx->pc = 0x2493a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967276));
    // 0x2493a8: 0xae300008  sw          $s0, 0x8($s1)
    ctx->pc = 0x2493a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 16));
    // 0x2493ac: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x2493acu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x2493b0: 0xa0730014  sb          $s3, 0x14($v1)
    ctx->pc = 0x2493b0u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 20), (uint8_t)GPR_U32(ctx, 19));
    // 0x2493b4: 0xa2000001  sb          $zero, 0x1($s0)
    ctx->pc = 0x2493b4u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 1), (uint8_t)GPR_U32(ctx, 0));
    // 0x2493b8: 0x8a490003  lwl         $t1, 0x3($s2)
    ctx->pc = 0x2493b8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 3); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 9) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 9, (int32_t)merged); }
    // 0x2493bc: 0x9a490000  lwr         $t1, 0x0($s2)
    ctx->pc = 0x2493bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 18), 0); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 9) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 9) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 9, merged64); }
    // 0x2493c0: 0xa869001b  swl         $t1, 0x1B($v1)
    ctx->pc = 0x2493c0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 27); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2493c4: 0xb8690018  swr         $t1, 0x18($v1)
    ctx->pc = 0x2493c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 3), 24); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 9); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2493c8: 0xa2000002  sb          $zero, 0x2($s0)
    ctx->pc = 0x2493c8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x2493cc: 0xc092d7e  jal         func_24B5F8
    ctx->pc = 0x2493CCu;
    SET_GPR_U32(ctx, 31, 0x2493D4u);
    ctx->pc = 0x2493D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2493CCu;
    // 0x2493d0: 0xa2000003  sb          $zero, 0x3($s0) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x24B5F8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x24B5F8u, 0x2493CCu, 0x2493D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2493D4u;
label_2493d4:
    // 0x2493d4: 0x21a3a  dsrl        $v1, $v0, 8
    ctx->pc = 0x2493d4u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) >> 8);
    // 0x2493d8: 0xa2020002  sb          $v0, 0x2($s0)
    ctx->pc = 0x2493d8u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 2), (uint8_t)GPR_U32(ctx, 2));
    // 0x2493dc: 0xa2030003  sb          $v1, 0x3($s0)
    ctx->pc = 0x2493dcu;
    WRITE8(ADD32(GPR_U32(ctx, 16), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x2493e0: 0x24090001  addiu       $t1, $zero, 0x1
    ctx->pc = 0x2493e0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x2493e4: 0x220202d  daddu       $a0, $s1, $zero
    ctx->pc = 0x2493e4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2493e8: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x2493e8u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2493ec: 0x8e230008  lw          $v1, 0x8($s1)
    ctx->pc = 0x2493ecu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 8)));
    // 0x2493f0: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x2493f0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2493f4: 0x8e22000c  lw          $v0, 0xC($s1)
    ctx->pc = 0x2493f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 12)));
    // 0x2493f8: 0x382d  daddu       $a3, $zero, $zero
    ctx->pc = 0x2493f8u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2493fc: 0x2463ffec  addiu       $v1, $v1, -0x14
    ctx->pc = 0x2493fcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967276));
    // 0x249400: 0x3a0402d  daddu       $t0, $sp, $zero
    ctx->pc = 0x249400u;
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 29) + (uint64_t)GPR_U64(ctx, 0));
    // 0x249404: 0x24420014  addiu       $v0, $v0, 0x14
    ctx->pc = 0x249404u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 20));
    // 0x249408: 0xae230008  sw          $v1, 0x8($s1)
    ctx->pc = 0x249408u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 8), GPR_U32(ctx, 3));
    // 0x24940c: 0xae22000c  sw          $v0, 0xC($s1)
    ctx->pc = 0x24940cu;
    WRITE32(ADD32(GPR_U32(ctx, 17), 12), GPR_U32(ctx, 2));
    // 0x249410: 0xa3a90004  sb          $t1, 0x4($sp)
    ctx->pc = 0x249410u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 4), (uint8_t)GPR_U32(ctx, 9));
    // 0x249414: 0x8e420004  lw          $v0, 0x4($s2)
    ctx->pc = 0x249414u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4)));
    // 0x249418: 0xa3a00005  sb          $zero, 0x5($sp)
    ctx->pc = 0x249418u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 5), (uint8_t)GPR_U32(ctx, 0));
    // 0x24941c: 0xc0942d4  jal         func_250B50
    ctx->pc = 0x24941Cu;
    SET_GPR_U32(ctx, 31, 0x249424u);
    ctx->pc = 0x249420u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x24941Cu;
    // 0x249420: 0xafa20000  sw          $v0, 0x0($sp) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 29), 0), GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x250B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x250B50u, 0x24941Cu, 0x249424u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x249424u;
label_249424:
    // 0x249424: 0x3c03003a  lui         $v1, 0x3A
    ctx->pc = 0x249424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)58 << 16));
    // 0x249428: 0x24630148  addiu       $v1, $v1, 0x148
    ctx->pc = 0x249428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 328));
    // 0x24942c: 0xdc620040  ld          $v0, 0x40($v1)
    ctx->pc = 0x24942cu;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 3), 64)));
    // 0x249430: 0x64420001  daddiu      $v0, $v0, 0x1
    ctx->pc = 0x249430u;
    SET_GPR_S64(ctx, 2, (int64_t)GPR_S64(ctx, 2) + (int64_t)(int32_t)1);
    // 0x249434: 0xfc620040  sd          $v0, 0x40($v1)
    ctx->pc = 0x249434u;
    WRITE64(ADD32(GPR_U32(ctx, 3), 64), GPR_U64(ctx, 2));
label_249438:
    // 0x249438: 0xdfbf00a0  ld          $ra, 0xA0($sp)
    ctx->pc = 0x249438u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x24943c: 0xdfb30090  ld          $s3, 0x90($sp)
    ctx->pc = 0x24943cu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 144)));
    // 0x249440: 0xdfb20080  ld          $s2, 0x80($sp)
    ctx->pc = 0x249440u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x249444: 0xdfb10070  ld          $s1, 0x70($sp)
    ctx->pc = 0x249444u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x249448: 0xdfb00060  ld          $s0, 0x60($sp)
    ctx->pc = 0x249448u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x24944c: 0x3e00008  jr          $ra
    ctx->pc = 0x24944Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x249450u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x24944Cu;
        // 0x249450: 0x27bd00b0  addiu       $sp, $sp, 0xB0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 176));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x24944Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x249454u;
    // 0x249454: 0x0  nop
    ctx->pc = 0x249454u;
    // NOP
}
