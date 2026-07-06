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

// Function: sub_0027B420
// Address: 0x27b420 - 0x27b758
void sub_0027B420_0x27b420(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0027B420_0x27b420");
#endif

    switch (ctx->pc) {
        case 0x27b46cu: goto label_27b46c;
        case 0x27b490u: goto label_27b490;
        case 0x27b4acu: goto label_27b4ac;
        case 0x27b54cu: goto label_27b54c;
        case 0x27b5b4u: goto label_27b5b4;
        case 0x27b5dcu: goto label_27b5dc;
        case 0x27b5e4u: goto label_27b5e4;
        case 0x27b610u: goto label_27b610;
        case 0x27b62cu: goto label_27b62c;
        case 0x27b684u: goto label_27b684;
        case 0x27b6a4u: goto label_27b6a4;
        case 0x27b6a8u: goto label_27b6a8;
        case 0x27b6ecu: goto label_27b6ec;
        case 0x27b730u: goto label_27b730;
        default: break;
    }

    ctx->pc = 0x27b420u;

    // 0x27b420: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x27b420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x27b424: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x27b424u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x27b428: 0x80902d  daddu       $s2, $a0, $zero
    ctx->pc = 0x27b428u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x27b42c: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x27b42cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x27b430: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x27b430u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x27b434: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x27b434u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x27b438: 0xffb40020  sd          $s4, 0x20($sp)
    ctx->pc = 0x27b438u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 20));
    // 0x27b43c: 0xffbf0028  sd          $ra, 0x28($sp)
    ctx->pc = 0x27b43cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 40), GPR_U64(ctx, 31));
    // 0x27b440: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x27b440u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x27b444: 0x2463b48c  addiu       $v1, $v1, -0x4B74
    ctx->pc = 0x27b444u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294947980));
    // 0x27b448: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27b448u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27b44c: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27B44Cu;
    {
        const bool branch_taken_0x27b44c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27b44c) {
            ctx->pc = 0x27B46Cu;
            goto label_27b46c;
        }
    }
    ctx->pc = 0x27B454u;
    // 0x27b454: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27b454u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27b458: 0x2484b4a0  addiu       $a0, $a0, -0x4B60
    ctx->pc = 0x27b458u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948000));
    // 0x27b45c: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x27b45cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27b460: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x27b460u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x27b464: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x27B464u;
    SET_GPR_U32(ctx, 31, 0x27B46Cu);
    ctx->pc = 0x27B468u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B464u;
    // 0x27b468: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x27B464u, 0x27B46Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B46Cu;
label_27b46c:
    // 0x27b46c: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27B46Cu;
    {
        const bool branch_taken_0x27b46c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b46c) {
            ctx->pc = 0x27B4A0u;
            goto label_27b4a0;
        }
    }
    ctx->pc = 0x27B474u;
    // 0x27b474: 0xa07bb089  sb          $k1, -0x4F77($v1)
    ctx->pc = 0x27b474u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294946953), (uint8_t)GPR_U32(ctx, 27));
    // 0x27b478: 0xa3ca8651  sb          $t2, -0x79AF($fp)
    ctx->pc = 0x27b478u;
    WRITE8(ADD32(GPR_U32(ctx, 30), 4294936145), (uint8_t)GPR_U32(ctx, 10));
    // 0x27b47c: 0xa1c46839  sb          $a0, 0x6839($t6)
    ctx->pc = 0x27b47cu;
    WRITE8(ADD32(GPR_U32(ctx, 14), 26681), (uint8_t)GPR_U32(ctx, 4));
    // 0x27b480: 0x2ecf020  add         $fp, $s7, $t4
    ctx->pc = 0x27b480u;
    {     int32_t rs_val = GPR_S32(ctx, 23);     int32_t rt_val = GPR_S32(ctx, 12);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 30, (int32_t)result);     } }
    // 0x27b484: 0x2795aa38  addiu       $s5, $gp, -0x55C8
    ctx->pc = 0x27b484u;
    SET_GPR_S32(ctx, 21, (int32_t)ADD32(GPR_U32(ctx, 28), 4294945336));
    // 0x27b488: 0xc1dd042  jal         func_774108
    ctx->pc = 0x27B488u;
    SET_GPR_U32(ctx, 31, 0x27B490u);
    ctx->pc = 0x774108u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x774108u, 0x27B488u, 0x27B490u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B490u;
label_27b490:
    // 0x27b490: 0xa7659d5f  sh          $a1, -0x62A1($k1)
    ctx->pc = 0x27b490u;
    WRITE16(ADD32(GPR_U32(ctx, 27), 4294942047), (uint16_t)GPR_U32(ctx, 5));
    // 0x27b494: 0x980d2a26  lwr         $t5, 0x2A26($zero)
    ctx->pc = 0x27b494u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 10790); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
    // 0x27b498: 0xa7659c7f  sh          $a1, -0x6381($k1)
    ctx->pc = 0x27b498u;
    WRITE16(ADD32(GPR_U32(ctx, 27), 4294941823), (uint16_t)GPR_U32(ctx, 5));
    // 0x27b49c: 0x0  nop
    ctx->pc = 0x27b49cu;
    // NOP
label_27b4a0:
    // 0x27b4a0: 0x3c1301c3  lui         $s3, 0x1C3
    ctx->pc = 0x27b4a0u;
    SET_GPR_S32(ctx, 19, (int32_t)((uint32_t)451 << 16));
    // 0x27b4a4: 0xc043328  jal         func_10CCA0
    ctx->pc = 0x27B4A4u;
    SET_GPR_U32(ctx, 31, 0x27B4ACu);
    ctx->pc = 0x27B4A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B4A4u;
    // 0x27b4a8: 0x8e645398  lw          $a0, 0x5398($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 21400)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CCA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CCA0u, 0x27B4A4u, 0x27B4ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B4ACu;
label_27b4ac:
    // 0x27b4ac: 0x3c0301c3  lui         $v1, 0x1C3
    ctx->pc = 0x27b4acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)451 << 16));
    // 0x27b4b0: 0x246353f0  addiu       $v1, $v1, 0x53F0
    ctx->pc = 0x27b4b0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 21488));
    // 0x27b4b4: 0x3667fe7e  ori         $a3, $s3, 0xFE7E
    ctx->pc = 0x27b4b4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)65150);
    // 0x27b4b8: 0x30c7fefe  andi        $a3, $a2, 0xFEFE
    ctx->pc = 0x27b4b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65278);
    // 0x27b4bc: 0x36e7fe7e  ori         $a3, $s7, 0xFE7E
    ctx->pc = 0x27b4bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)65150);
    // 0x27b4c0: 0x3007cff6  andi        $a3, $zero, 0xCFF6
    ctx->pc = 0x27b4c0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)53238);
    // 0x27b4c4: 0x3447eff6  ori         $a3, $v0, 0xEFF6
    ctx->pc = 0x27b4c4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61430);
    // 0x27b4c8: 0x3447eff6  ori         $a3, $v0, 0xEFF6
    ctx->pc = 0x27b4c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61430);
    // 0x27b4cc: 0x3447eff6  ori         $a3, $v0, 0xEFF6
    ctx->pc = 0x27b4ccu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61430);
    // 0x27b4d0: 0x94c36e4f  lhu         $v1, 0x6E4F($a2)
    ctx->pc = 0x27b4d0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 6), 28239)));
    // 0x27b4d4: 0xe9ca9a7b  swc2        $10, -0x6585($t6)
    ctx->pc = 0x27b4d4u;
    throw std::runtime_error("Unhandled opcode: 0x3A at 0x27B4D4 raw=0xE9CA9A7B");
    // 0x27b4d8: 0xa9d68a4f  swl         $s6, -0x75B1($t6)
    ctx->pc = 0x27b4d8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294937167); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 22); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27b4dc: 0x59da2a43  .word       0x59DA2A43                   # blezl       $t6, . + 4 + (0x2A43 << 2) # 001A0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27B4DCu;
    {
        const bool branch_taken_0x27b4dc = (GPR_S32(ctx, 14) <= 0);
        if (branch_taken_0x27b4dc) {
            ctx->pc = 0x27B4E0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27B4DCu;
            // 0x27b4e0: 0x85d6424b  lh          $s6, 0x424B($t6) (Delay Slot)
            SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 14), 16971)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x285DECu;
            return;
        }
    }
    ctx->pc = 0x27B4E4u;
    // 0x27b4e4: 0x94434f1e  lhu         $v1, 0x4F1E($v0)
    ctx->pc = 0x27b4e4u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 20254)));
    // 0x27b4e8: 0x3447eff6  ori         $a3, $v0, 0xEFF6
    ctx->pc = 0x27b4e8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61430);
    // 0x27b4ec: 0x3c050028  lui         $a1, 0x28
    ctx->pc = 0x27b4ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)40 << 16));
    // 0x27b4f0: 0x24a5b4d0  addiu       $a1, $a1, -0x4B30
    ctx->pc = 0x27b4f0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294948048));
    // 0x27b4f4: 0x3c1401c3  lui         $s4, 0x1C3
    ctx->pc = 0x27b4f4u;
    SET_GPR_S32(ctx, 20, (int32_t)((uint32_t)451 << 16));
    // 0x27b4f8: 0x3c0301c3  lui         $v1, 0x1C3
    ctx->pc = 0x27b4f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)451 << 16));
    // 0x27b4fc: 0x2690539c  addiu       $s0, $s4, 0x539C
    ctx->pc = 0x27b4fcu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 20), 21404));
    // 0x27b500: 0x30c7ffe6  andi        $a3, $a2, 0xFFE6
    ctx->pc = 0x27b500u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)65510);
    // 0x27b504: 0x3667f7b2  ori         $a3, $s3, 0xF7B2
    ctx->pc = 0x27b504u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 19) | (uint64_t)(uint16_t)63410);
    // 0x27b508: 0xac6553ec  sw          $a1, 0x53EC($v1)
    ctx->pc = 0x27b508u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 21484), GPR_U32(ctx, 5));
    // 0x27b50c: 0x30c7f77e  andi        $a3, $a2, 0xF77E
    ctx->pc = 0x27b50cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)63358);
    // 0x27b510: 0x3007aee6  andi        $a3, $zero, 0xAEE6
    ctx->pc = 0x27b510u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 0) & (uint64_t)(uint16_t)44774);
    // 0x27b514: 0x36e7f7fe  ori         $a3, $s7, 0xF7FE
    ctx->pc = 0x27b514u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)63486);
    // 0x27b518: 0x2807eff6  slti        $a3, $zero, -0x100A
    ctx->pc = 0x27b518u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)4294963190) ? 1 : 0);
    // 0x27b51c: 0x3447eff6  ori         $a3, $v0, 0xEFF6
    ctx->pc = 0x27b51cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61430);
    // 0x27b520: 0x3447eff6  ori         $a3, $v0, 0xEFF6
    ctx->pc = 0x27b520u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61430);
    // 0x27b524: 0x3447eff6  ori         $a3, $v0, 0xEFF6
    ctx->pc = 0x27b524u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61430);
    // 0x27b528: 0xbd923a7b  cache       0x12, 0x3A7B($t4)
    ctx->pc = 0x27b528u;
    // CACHE instruction (ignored)
    // 0x27b52c: 0xfd8a3653  sd          $t2, 0x3653($t4)
    ctx->pc = 0x27b52cu;
    WRITE64(ADD32(GPR_U32(ctx, 12), 13907), GPR_U64(ctx, 10));
    // 0x27b530: 0xa1c66a7a  sb          $a2, 0x6A7A($t6)
    ctx->pc = 0x27b530u;
    WRITE8(ADD32(GPR_U32(ctx, 14), 27258), (uint8_t)GPR_U32(ctx, 6));
    // 0x27b534: 0x84564f4f  lh          $s6, 0x4F4F($v0)
    ctx->pc = 0x27b534u;
    SET_GPR_S32(ctx, 22, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 20303)));
    // 0x27b538: 0x3447eff6  ori         $a3, $v0, 0xEFF6
    ctx->pc = 0x27b538u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61430);
    // 0x27b53c: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27b53cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27b540: 0x2484b528  addiu       $a0, $a0, -0x4AD8
    ctx->pc = 0x27b540u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948136));
    // 0x27b544: 0xc09e574  jal         func_2795D0
    ctx->pc = 0x27B544u;
    SET_GPR_U32(ctx, 31, 0x27B54Cu);
    ctx->pc = 0x27B548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B544u;
    // 0x27b548: 0x3447eff6  ori         $a3, $v0, 0xEFF6 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61430);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2795D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2795D0u, 0x27B544u, 0x27B54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B54Cu;
label_27b54c:
    // 0x27b54c: 0x2c062ff6  sltiu       $a2, $zero, 0x2FF6
    ctx->pc = 0x27b54cu;
    SET_GPR_U64(ctx, 6, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)(int64_t)(int32_t)12278) ? 1 : 0);
    // 0x27b550: 0x36e7f7b2  ori         $a3, $s7, 0xF7B2
    ctx->pc = 0x27b550u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 23) | (uint64_t)(uint16_t)63410);
    // 0x27b554: 0x3447eff6  ori         $a3, $v0, 0xEFF6
    ctx->pc = 0x27b554u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61430);
    // 0x27b558: 0x3c02003b  lui         $v0, 0x3B
    ctx->pc = 0x27b558u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)59 << 16));
    // 0x27b55c: 0x8c4334b8  lw          $v1, 0x34B8($v0)
    ctx->pc = 0x27b55cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 13496)));
    // 0x27b560: 0x2807be76  slti        $a3, $zero, -0x418A
    ctx->pc = 0x27b560u;
    SET_GPR_U64(ctx, 7, ((int64_t)GPR_S64(ctx, 0) < (int64_t)(int32_t)4294950518) ? 1 : 0);
    // 0x27b564: 0x3447eff6  ori         $a3, $v0, 0xEFF6
    ctx->pc = 0x27b564u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61430);
    // 0x27b568: 0x2007cff6  addi        $a3, $zero, -0x300A
    ctx->pc = 0x27b568u;
    { uint32_t tmp; bool ov; ADD32_OV(GPR_U32(ctx, 0), (int32_t)4294954998, tmp, ov); if (ov) runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S32(ctx, 7, (int32_t)tmp); }
    // 0x27b56c: 0x3447eff6  ori         $a3, $v0, 0xEFF6
    ctx->pc = 0x27b56cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61430);
    // 0x27b570: 0x3447eff6  ori         $a3, $v0, 0xEFF6
    ctx->pc = 0x27b570u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61430);
    // 0x27b574: 0x3447eff6  ori         $a3, $v0, 0xEFF6
    ctx->pc = 0x27b574u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61430);
    // 0x27b578: 0xb9e27e47  swr         $v0, 0x7E47($t7)
    ctx->pc = 0x27b578u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 32327); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 2); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27b57c: 0x55db623b  bnel        $t6, $k1, . + 4 + (0x623B << 2)
    ctx->pc = 0x27B57Cu;
    {
        const bool branch_taken_0x27b57c = (GPR_U64(ctx, 14) != GPR_U64(ctx, 27));
        if (branch_taken_0x27b57c) {
            ctx->pc = 0x27B580u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27B57Cu;
            // 0x27b580: 0x41fa7667  .word       0x41FA7667                   # INVALID     $t7, $k0, 0x7667 # 00000000 <InstrIdType: R5900_COP0> (Delay Slot)
            throw std::runtime_error("Unhandled COP0 instruction format: 0xF at 0x27B580 raw=0x41FA7667");
            ctx->in_delay_slot = false;
            ctx->pc = 0x293E6Cu;
            return;
        }
    }
    ctx->pc = 0x27B584u;
    // 0x27b584: 0xf1ea7a8b  scd         $t2, 0x7A8B($t7)
    ctx->pc = 0x27b584u;
    throw std::runtime_error("Unhandled opcode: 0x3C at 0x27B584 raw=0xF1EA7A8B");
    // 0x27b588: 0x91f67247  lbu         $s6, 0x7247($t7)
    ctx->pc = 0x27b588u;
    SET_GPR_U32(ctx, 22, (uint8_t)READ8(ADD32(GPR_U32(ctx, 15), 29255)));
    // 0x27b58c: 0x59fa7653  .word       0x59FA7653                   # blezl       $t7, . + 4 + (0x7653 << 2) # 001A0000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x27B58Cu;
    {
        const bool branch_taken_0x27b58c = (GPR_S32(ctx, 15) <= 0);
        if (branch_taken_0x27b58c) {
            ctx->pc = 0x27B590u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x27B58Cu;
            // 0x27b590: 0xf0f64b57  scd         $s6, 0x4B57($a3) (Delay Slot)
            throw std::runtime_error("Unhandled opcode: 0x3C at 0x27B590 raw=0xF0F64B57");
            ctx->in_delay_slot = false;
            ctx->pc = 0x298EDCu;
            return;
        }
    }
    ctx->pc = 0x27B594u;
    // 0x27b594: 0xb59f6653  sdr         $ra, 0x6653($t4)
    ctx->pc = 0x27b594u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 26195); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 31); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x27b598: 0xf8562f4f  sqc2        $vf22, 0x2F4F($v0)
    ctx->pc = 0x27b598u;
    WRITE128(ADD32(GPR_U32(ctx, 2), 12111), _mm_castps_si128(ctx->vu0_vf[22]));
    // 0x27b59c: 0x3447eff6  ori         $a3, $v0, 0xEFF6
    ctx->pc = 0x27b59cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61430);
    // 0x27b5a0: 0x3447eff6  ori         $a3, $v0, 0xEFF6
    ctx->pc = 0x27b5a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61430);
    // 0x27b5a4: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27b5a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27b5a8: 0x2484b578  addiu       $a0, $a0, -0x4A88
    ctx->pc = 0x27b5a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948216));
    // 0x27b5ac: 0xc09e574  jal         func_2795D0
    ctx->pc = 0x27B5ACu;
    SET_GPR_U32(ctx, 31, 0x27B5B4u);
    ctx->pc = 0x27B5B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B5ACu;
    // 0x27b5b0: 0x3447eff6  ori         $a3, $v0, 0xEFF6 (Delay Slot)
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61430);
    ctx->in_delay_slot = false;
    ctx->pc = 0x2795D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2795D0u, 0x27B5ACu, 0x27B5B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B5B4u;
label_27b5b4:
    // 0x27b5b4: 0x24068ff6  addiu       $a2, $zero, -0x700A
    ctx->pc = 0x27b5b4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 4294938614));
    // 0x27b5b8: 0x3447eff6  ori         $a3, $v0, 0xEFF6
    ctx->pc = 0x27b5b8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61430);
    // 0x27b5bc: 0x3447eff6  ori         $a3, $v0, 0xEFF6
    ctx->pc = 0x27b5bcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)61430);
    // 0x27b5c0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27B5C0u;
    {
        const bool branch_taken_0x27b5c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b5c0) {
            ctx->pc = 0x27B5F0u;
            goto label_27b5f0;
        }
    }
    ctx->pc = 0x27B5C8u;
    // 0x27b5c8: 0x87c9e903  lh          $t1, -0x16FD($fp)
    ctx->pc = 0x27b5c8u;
    SET_GPR_S32(ctx, 9, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294961411)));
    // 0x27b5cc: 0xdc7661df  ld          $s6, 0x61DF($v1)
    ctx->pc = 0x27b5ccu;
    SET_GPR_U64(ctx, 22, READ64(ADD32(GPR_U32(ctx, 3), 25055)));
    // 0x27b5d0: 0xa22569e9  sb          $a1, 0x69E9($s1)
    ctx->pc = 0x27b5d0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 27113), (uint8_t)GPR_U32(ctx, 5));
    // 0x27b5d4: 0xc3bf085  jal         func_EFC214
    ctx->pc = 0x27B5D4u;
    SET_GPR_U32(ctx, 31, 0x27B5DCu);
    ctx->pc = 0x27B5D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B5D4u;
    // 0x27b5d8: 0xa3a2b571  sb          $v0, -0x4A8F($sp) (Delay Slot)
    WRITE8(ADD32(GPR_U32(ctx, 29), 4294948209), (uint8_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0xEFC214u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xEFC214u, 0x27B5D4u, 0x27B5DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B5DCu;
label_27b5dc:
    // 0x27b5dc: 0xc6fa1ed  jal         func_1BE87B4
    ctx->pc = 0x27B5DCu;
    SET_GPR_U32(ctx, 31, 0x27B5E4u);
    ctx->pc = 0x27B5E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B5DCu;
    // 0x27b5e0: 0xa7659df5  sh          $a1, -0x620B($k1) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 27), 4294942197), (uint16_t)GPR_U32(ctx, 5));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1BE87B4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1BE87B4u, 0x27B5DCu, 0x27B5E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B5E4u;
label_27b5e4:
    // 0x27b5e4: 0x980d2a27  lwr         $t5, 0x2A27($zero)
    ctx->pc = 0x27b5e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 10791); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
    // 0x27b5e8: 0xa7659cd5  sh          $a1, -0x632B($k1)
    ctx->pc = 0x27b5e8u;
    WRITE16(ADD32(GPR_U32(ctx, 27), 4294941909), (uint16_t)GPR_U32(ctx, 5));
    // 0x27b5ec: 0x0  nop
    ctx->pc = 0x27b5ecu;
    // NOP
label_27b5f0:
    // 0x27b5f0: 0x3c1101c3  lui         $s1, 0x1C3
    ctx->pc = 0x27b5f0u;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)451 << 16));
    // 0x27b5f4: 0x8e2253dc  lw          $v0, 0x53DC($s1)
    ctx->pc = 0x27b5f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 21468)));
    // 0x27b5f8: 0x10400003  beqz        $v0, . + 4 + (0x3 << 2)
    ctx->pc = 0x27B5F8u;
    {
        const bool branch_taken_0x27b5f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b5f8) {
            ctx->pc = 0x27B608u;
            goto label_27b608;
        }
    }
    ctx->pc = 0x27B600u;
    // 0x27b600: 0x12400004  beqz        $s2, . + 4 + (0x4 << 2)
    ctx->pc = 0x27B600u;
    {
        const bool branch_taken_0x27b600 = (GPR_U64(ctx, 18) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B604u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B600u;
        // 0x27b604: 0x802d  daddu       $s0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b600) {
            ctx->pc = 0x27B614u;
            goto label_27b614;
        }
    }
    ctx->pc = 0x27B608u;
label_27b608:
    // 0x27b608: 0xc09e6f8  jal         func_279BE0
    ctx->pc = 0x27B608u;
    SET_GPR_U32(ctx, 31, 0x27B610u);
    ctx->pc = 0x27B60Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B608u;
    // 0x27b60c: 0x240202d  daddu       $a0, $s2, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 18) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x279BE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x279BE0u, 0x27B608u, 0x27B610u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B610u;
label_27b610:
    // 0x27b610: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x27b610u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
label_27b614:
    // 0x27b614: 0x2683539c  addiu       $v1, $s4, 0x539C
    ctx->pc = 0x27b614u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 20), 21404));
    // 0x27b618: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27b618u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27b61c: 0x2442ffff  addiu       $v0, $v0, -0x1
    ctx->pc = 0x27b61cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967295));
    // 0x27b620: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x27b620u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x27b624: 0xc043320  jal         func_10CC80
    ctx->pc = 0x27B624u;
    SET_GPR_U32(ctx, 31, 0x27B62Cu);
    ctx->pc = 0x27B628u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B624u;
    // 0x27b628: 0x8e645398  lw          $a0, 0x5398($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 21400)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x27B624u, 0x27B62Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B62Cu;
label_27b62c:
    // 0x27b62c: 0x16000041  bnez        $s0, . + 4 + (0x41 << 2)
    ctx->pc = 0x27B62Cu;
    {
        const bool branch_taken_0x27b62c = (GPR_U64(ctx, 16) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B630u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B62Cu;
        // 0x27b630: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b62c) {
            ctx->pc = 0x27B734u;
            goto label_27b734;
        }
    }
    ctx->pc = 0x27B634u;
    // 0x27b634: 0x16400005  bnez        $s2, . + 4 + (0x5 << 2)
    ctx->pc = 0x27B634u;
    {
        const bool branch_taken_0x27b634 = (GPR_U64(ctx, 18) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B638u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B634u;
        // 0x27b638: 0x3c0201c3  lui         $v0, 0x1C3 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)451 << 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b634) {
            ctx->pc = 0x27B64Cu;
            goto label_27b64c;
        }
    }
    ctx->pc = 0x27B63Cu;
    // 0x27b63c: 0x8e2253dc  lw          $v0, 0x53DC($s1)
    ctx->pc = 0x27b63cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 21468)));
    // 0x27b640: 0x1440003c  bnez        $v0, . + 4 + (0x3C << 2)
    ctx->pc = 0x27B640u;
    {
        const bool branch_taken_0x27b640 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x27B644u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B640u;
        // 0x27b644: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b640) {
            ctx->pc = 0x27B734u;
            goto label_27b734;
        }
    }
    ctx->pc = 0x27B648u;
    // 0x27b648: 0x3c0201c3  lui         $v0, 0x1C3
    ctx->pc = 0x27b648u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)451 << 16));
label_27b64c:
    // 0x27b64c: 0x8c4353d8  lw          $v1, 0x53D8($v0)
    ctx->pc = 0x27b64cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 21464)));
    // 0x27b650: 0x10600038  beqz        $v1, . + 4 + (0x38 << 2)
    ctx->pc = 0x27B650u;
    {
        const bool branch_taken_0x27b650 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B654u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B650u;
        // 0x27b654: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b650) {
            ctx->pc = 0x27B734u;
            goto label_27b734;
        }
    }
    ctx->pc = 0x27B658u;
    // 0x27b658: 0x3c030028  lui         $v1, 0x28
    ctx->pc = 0x27b658u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)40 << 16));
    // 0x27b65c: 0x2463b6a4  addiu       $v1, $v1, -0x495C
    ctx->pc = 0x27b65cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294948516));
    // 0x27b660: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x27b660u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x27b664: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x27B664u;
    {
        const bool branch_taken_0x27b664 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x27b664) {
            ctx->pc = 0x27B684u;
            goto label_27b684;
        }
    }
    ctx->pc = 0x27B66Cu;
    // 0x27b66c: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27b66cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27b670: 0x2484b6b8  addiu       $a0, $a0, -0x4948
    ctx->pc = 0x27b670u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948536));
    // 0x27b674: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x27b674u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x27b678: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x27b678u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x27b67c: 0xc0a7814  jal         func_29E050
    ctx->pc = 0x27B67Cu;
    SET_GPR_U32(ctx, 31, 0x27B684u);
    ctx->pc = 0x27B680u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B67Cu;
    // 0x27b680: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x29E050u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x29E050u, 0x27B67Cu, 0x27B684u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B684u;
label_27b684:
    // 0x27b684: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x27B684u;
    {
        const bool branch_taken_0x27b684 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b684) {
            ctx->pc = 0x27B6B8u;
            goto label_27b6b8;
        }
    }
    ctx->pc = 0x27B68Cu;
    // 0x27b68c: 0x8fdee595  lw          $fp, -0x1A6B($fp)
    ctx->pc = 0x27b68cu;
    SET_GPR_S32(ctx, 30, (int32_t)READ32(ADD32(GPR_U32(ctx, 30), 4294960533)));
    // 0x27b690: 0xdc53da77  ld          $s3, -0x2589($v0)
    ctx->pc = 0x27b690u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 2), 4294957687)));
    // 0x27b694: 0x87d77b13  lh          $s7, 0x7B13($fp)
    ctx->pc = 0x27b694u;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 31507)));
    // 0x27b698: 0x8773f353  lh          $s3, -0xCAD($k1)
    ctx->pc = 0x27b698u;
    SET_GPR_S32(ctx, 19, (int16_t)READ16(ADD32(GPR_U32(ctx, 27), 4294964051)));
    // 0x27b69c: 0xc3c5cef  jal         func_F173BC
    ctx->pc = 0x27B69Cu;
    SET_GPR_U32(ctx, 31, 0x27B6A4u);
    ctx->pc = 0x27B6A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B69Cu;
    // 0x27b6a0: 0xcf0774d  jal         func_3C1DD34 (Delay Slot)
    // JAL 0x3C1DD34 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0xF173BCu;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xF173BCu, 0x27B69Cu, 0x27B6A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B6A4u;
label_27b6a4:
    // 0x27b6a4: 0x0  nop
    ctx->pc = 0x27b6a4u;
    // NOP
label_27b6a8:
    // 0x27b6a8: 0xa832fd65  swl         $s2, -0x29B($at)
    ctx->pc = 0x27b6a8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 4294966629); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 18); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27b6ac: 0x980d2a80  lwr         $t5, 0x2A80($zero)
    ctx->pc = 0x27b6acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 10880); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
    // 0x27b6b0: 0xa832fd51  swl         $s2, -0x2AF($at)
    ctx->pc = 0x27b6b0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 4294966609); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 18); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27b6b4: 0x0  nop
    ctx->pc = 0x27b6b4u;
    // NOP
label_27b6b8:
    // 0x27b6b8: 0x7cdd072d  sq          $sp, 0x72D($a2)
    ctx->pc = 0x27b6b8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 1837), GPR_VEC(ctx, 29));
    // 0x27b6bc: 0x7cdde72f  sq          $sp, -0x18D1($a2)
    ctx->pc = 0x27b6bcu;
    WRITE128(ADD32(GPR_U32(ctx, 6), 4294960943), GPR_VEC(ctx, 29));
    // 0x27b6c0: 0x7cdde72f  sq          $sp, -0x18D1($a2)
    ctx->pc = 0x27b6c0u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 4294960943), GPR_VEC(ctx, 29));
    // 0x27b6c4: 0x7cdde72f  sq          $sp, -0x18D1($a2)
    ctx->pc = 0x27b6c4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 4294960943), GPR_VEC(ctx, 29));
    // 0x27b6c8: 0x7250098b  .word       0x7250098B                   # INVALID     $s2, $s0, 0x98B # 00000000 <InstrIdType: R5900_MMI>
    ctx->pc = 0x27b6c8u;
    throw std::runtime_error("Unhandled MMI instruction: function 0xB at 0x27B6C8 raw=0x7250098B");
    // 0x27b6cc: 0xd8d00be2  lqc2        $vf16, 0xBE2($a2)
    ctx->pc = 0x27b6ccu;
    ctx->vu0_vf[16] = _mm_castsi128_ps(READ128(ADD32(GPR_U32(ctx, 6), 3042)));
    // 0x27b6d0: 0x31314a81  andi        $s1, $t1, 0x4A81
    ctx->pc = 0x27b6d0u;
    SET_GPR_U64(ctx, 17, GPR_U64(ctx, 9) & (uint64_t)(uint16_t)19073);
    // 0x27b6d4: 0x7cd2c2ef  sq          $s2, -0x3D11($a2)
    ctx->pc = 0x27b6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 4294951663), GPR_VEC(ctx, 18));
    // 0x27b6d8: 0x7cdde72f  sq          $sp, -0x18D1($a2)
    ctx->pc = 0x27b6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 6), 4294960943), GPR_VEC(ctx, 29));
    // 0x27b6dc: 0x3c040028  lui         $a0, 0x28
    ctx->pc = 0x27b6dcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)40 << 16));
    // 0x27b6e0: 0x2484b6c8  addiu       $a0, $a0, -0x4938
    ctx->pc = 0x27b6e0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294948552));
    // 0x27b6e4: 0xc09e572  jal         func_2795C8
    ctx->pc = 0x27B6E4u;
    SET_GPR_U32(ctx, 31, 0x27B6ECu);
    ctx->pc = 0x27B6E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B6E4u;
    // 0x27b6e8: 0x7cdde72f  sq          $sp, -0x18D1($a2) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 6), 4294960943), GPR_VEC(ctx, 29));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2795C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2795C8u, 0x27B6E4u, 0x27B6ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B6ECu;
label_27b6ec:
    // 0x27b6ec: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x27B6ECu;
    {
        const bool branch_taken_0x27b6ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x27b6ec) {
            ctx->pc = 0x27B71Cu;
            goto label_27b71c;
        }
    }
    ctx->pc = 0x27B6F4u;
    // 0x27b6f4: 0xa3efbd09  sb          $t7, -0x42F7($ra)
    ctx->pc = 0x27b6f4u;
    WRITE8(ADD32(GPR_U32(ctx, 31), 4294950153), (uint8_t)GPR_U32(ctx, 15));
    // 0x27b6f8: 0xa1e8b699  sb          $t0, -0x4967($t7)
    ctx->pc = 0x27b6f8u;
    WRITE8(ADD32(GPR_U32(ctx, 15), 4294948505), (uint8_t)GPR_U32(ctx, 8));
    // 0x27b6fc: 0xfeb62f32  sd          $s6, 0x2F32($s5)
    ctx->pc = 0x27b6fcu;
    WRITE64(ADD32(GPR_U32(ctx, 21), 12082), GPR_U64(ctx, 22));
    // 0x27b700: 0x8555aa13  lh          $s5, -0x55ED($t2)
    ctx->pc = 0x27b700u;
    SET_GPR_S32(ctx, 21, (int16_t)READ16(ADD32(GPR_U32(ctx, 10), 4294945299)));
    // 0x27b704: 0x25ae2758  addiu       $t6, $t5, 0x2758
    ctx->pc = 0x27b704u;
    SET_GPR_S32(ctx, 14, (int32_t)ADD32(GPR_U32(ctx, 13), 10072));
    // 0x27b708: 0x87d7acf3  lh          $s7, -0x530D($fp)
    ctx->pc = 0x27b708u;
    SET_GPR_S32(ctx, 23, (int16_t)READ16(ADD32(GPR_U32(ctx, 30), 4294946035)));
    // 0x27b70c: 0xa832fd56  swl         $s2, -0x2AA($at)
    ctx->pc = 0x27b70cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 4294966614); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 18); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27b710: 0x980d2a81  lwr         $t5, 0x2A81($zero)
    ctx->pc = 0x27b710u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 10881); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = offset << 3; uint32_t keepMask = (offset == 0) ? 0u : (0xFFFFFFFFu << ((4u - offset) << 3)); uint32_t merged32 = (GPR_U32(ctx, 13) & keepMask) | (mem >> shift); uint64_t merged64 = (GPR_U64(ctx, 13) & 0xFFFFFFFF00000000ull) | (uint64_t)merged32; if (offset == 0) merged64 = (uint64_t)(int64_t)(int32_t)merged32; SET_GPR_U64(ctx, 13, merged64); }
    // 0x27b714: 0xa832fd62  swl         $s2, -0x29E($at)
    ctx->pc = 0x27b714u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 1), 4294966626); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 18); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x27b718: 0x0  nop
    ctx->pc = 0x27b718u;
    // NOP
label_27b71c:
    // 0x27b71c: 0x10000005  b           . + 4 + (0x5 << 2)
    ctx->pc = 0x27B71Cu;
    {
        const bool branch_taken_0x27b71c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x27B720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B71Cu;
        // 0x27b720: 0x200102d  daddu       $v0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x27b71c) {
            ctx->pc = 0x27B734u;
            goto label_27b734;
        }
    }
    ctx->pc = 0x27B724u;
    // 0x27b724: 0x0  nop
    ctx->pc = 0x27b724u;
    // NOP
    // 0x27b728: 0xc043320  jal         func_10CC80
    ctx->pc = 0x27B728u;
    SET_GPR_U32(ctx, 31, 0x27B730u);
    ctx->pc = 0x27B72Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x27B728u;
    // 0x27b72c: 0x8e645398  lw          $a0, 0x5398($s3) (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 19), 21400)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x10CC80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x10CC80u, 0x27B728u, 0x27B730u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x27B730u;
label_27b730:
    // 0x27b730: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x27b730u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_27b734:
    // 0x27b734: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x27b734u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x27b738: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x27b738u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x27b73c: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x27b73cu;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x27b740: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x27b740u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x27b744: 0xdfb40020  ld          $s4, 0x20($sp)
    ctx->pc = 0x27b744u;
    SET_GPR_U64(ctx, 20, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x27b748: 0xdfbf0028  ld          $ra, 0x28($sp)
    ctx->pc = 0x27b748u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 40)));
    // 0x27b74c: 0x3e00008  jr          $ra
    ctx->pc = 0x27B74Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x27B750u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x27B74Cu;
        // 0x27b750: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x27B74Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x27B754u;
    // 0x27b754: 0x0  nop
    ctx->pc = 0x27b754u;
    // NOP
}
