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

// Function: sub_002DE0B0
// Address: 0x2de0b0 - 0x2de208
void sub_002DE0B0_0x2de0b0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DE0B0_0x2de0b0");
#endif

    switch (ctx->pc) {
        case 0x2de0f0u: goto label_2de0f0;
        case 0x2de110u: goto label_2de110;
        case 0x2de15cu: goto label_2de15c;
        case 0x2de17cu: goto label_2de17c;
        case 0x2de18cu: goto label_2de18c;
        case 0x2de1acu: goto label_2de1ac;
        case 0x2de1b4u: goto label_2de1b4;
        case 0x2de1ecu: goto label_2de1ec;
        default: break;
    }

    ctx->pc = 0x2de0b0u;

    // 0x2de0b0: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2de0b0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2de0b4: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2de0b4u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2de0b8: 0x2411ffff  addiu       $s1, $zero, -0x1
    ctx->pc = 0x2de0b8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2de0bc: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2de0bcu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2de0c0: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2de0c0u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2de0c4: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2de0c4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2de0c8: 0x2463e110  addiu       $v1, $v1, -0x1EF0
    ctx->pc = 0x2de0c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294959376));
    // 0x2de0cc: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2de0ccu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2de0d0: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DE0D0u;
    {
        const bool branch_taken_0x2de0d0 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2de0d0) {
            ctx->pc = 0x2DE0F0u;
            goto label_2de0f0;
        }
    }
    ctx->pc = 0x2DE0D8u;
    // 0x2de0d8: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2de0d8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2de0dc: 0x2484e124  addiu       $a0, $a0, -0x1EDC
    ctx->pc = 0x2de0dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959396));
    // 0x2de0e0: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2de0e0u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2de0e4: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2de0e4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2de0e8: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DE0E8u;
    SET_GPR_U32(ctx, 31, 0x2DE0F0u);
    ctx->pc = 0x2DE0ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE0E8u;
    // 0x2de0ec: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2DE0E8u, 0x2DE0F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE0F0u;
label_2de0f0:
    // 0x2de0f0: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DE0F0u;
    {
        const bool branch_taken_0x2de0f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de0f0) {
            ctx->pc = 0x2DE124u;
            goto label_2de124;
        }
    }
    ctx->pc = 0x2DE0F8u;
    // 0x2de0f8: 0xfe2a0ad2  sd          $t2, 0xAD2($s1)
    ctx->pc = 0x2de0f8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 2770), GPR_U64(ctx, 10));
    // 0x2de0fc: 0xff6020  add         $t4, $a3, $ra
    ctx->pc = 0x2de0fcu;
    {     int32_t rs_val = GPR_S32(ctx, 7);     int32_t rt_val = GPR_S32(ctx, 31);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 12, (int32_t)result);     } }
    // 0x2de100: 0x8ff244f5  lw          $s2, 0x44F5($ra)
    ctx->pc = 0x2de100u;
    SET_GPR_S32(ctx, 18, (int32_t)READ32(ADD32(GPR_U32(ctx, 31), 17653)));
    // 0x2de104: 0x8c73c1f5  lw          $s3, -0x3E0B($v1)
    ctx->pc = 0x2de104u;
    SET_GPR_S32(ctx, 19, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294951413)));
    // 0x2de108: 0xca14ed0  jal         func_2853B40
    ctx->pc = 0x2DE108u;
    SET_GPR_U32(ctx, 31, 0x2DE110u);
    ctx->pc = 0x2DE10Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE108u;
    // 0x2de10c: 0xdc7dfd17  ld          $sp, -0x2E9($v1) (Delay Slot)
    SET_GPR_U64(ctx, 29, READ64(ADD32(GPR_U32(ctx, 3), 4294966551)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2853B40u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2853B40u, 0x2DE108u, 0x2DE110u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE110u;
label_2de110:
    // 0x2de110: 0x0  nop
    ctx->pc = 0x2de110u;
    // NOP
    // 0x2de114: 0x89aa9654  lwl         $t2, -0x69AC($t5)
    ctx->pc = 0x2de114u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 4294940244); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 10) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 10, (int32_t)merged); }
    // 0x2de118: 0xc713164a  lwc1        $f19, 0x164A($t8)
    ctx->pc = 0x2de118u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 5706)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x2de11c: 0x89aa962c  lwl         $t2, -0x69D4($t5)
    ctx->pc = 0x2de11cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 4294940204); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 10) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 10, (int32_t)merged); }
    // 0x2de120: 0x0  nop
    ctx->pc = 0x2de120u;
    // NOP
label_2de124:
    // 0x2de124: 0xc57a5682  lwc1        $f26, 0x5682($t3)
    ctx->pc = 0x2de124u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 11), 22146)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[26] = f; }
    // 0x2de128: 0xe53a5682  swc1        $f26, 0x5682($t1)
    ctx->pc = 0x2de128u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 22146), bits); }
    // 0x2de12c: 0xe53a5682  swc1        $f26, 0x5682($t1)
    ctx->pc = 0x2de12cu;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 22146), bits); }
    // 0x2de130: 0xe53a5682  swc1        $f26, 0x5682($t1)
    ctx->pc = 0x2de130u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 22146), bits); }
    // 0x2de134: 0xa0f7b34e  sb          $s7, -0x4CB2($a3)
    ctx->pc = 0x2de134u;
    WRITE8(ADD32(GPR_U32(ctx, 7), 4294947662), (uint8_t)GPR_U32(ctx, 23));
    // 0x2de138: 0x8093c75f  lb          $s3, -0x38A1($a0)
    ctx->pc = 0x2de138u;
    SET_GPR_S32(ctx, 19, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294952799)));
    // 0x2de13c: 0x24f3c35a  addiu       $s3, $a3, -0x3CA6
    ctx->pc = 0x2de13cu;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 7), 4294951770));
    // 0x2de140: 0x253a5692  addiu       $k0, $t1, 0x5692
    ctx->pc = 0x2de140u;
    SET_GPR_S32(ctx, 26, (int32_t)ADD32(GPR_U32(ctx, 9), 22162));
    // 0x2de144: 0xe53a5682  swc1        $f26, 0x5682($t1)
    ctx->pc = 0x2de144u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 22146), bits); }
    // 0x2de148: 0xe53a5682  swc1        $f26, 0x5682($t1)
    ctx->pc = 0x2de148u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 22146), bits); }
    // 0x2de14c: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2de14cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2de150: 0x2484e134  addiu       $a0, $a0, -0x1ECC
    ctx->pc = 0x2de150u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959412));
    // 0x2de154: 0xc045714  jal         func_115C50
    ctx->pc = 0x2DE154u;
    SET_GPR_U32(ctx, 31, 0x2DE15Cu);
    ctx->pc = 0x2DE158u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE154u;
    // 0x2de158: 0xe53a5682  swc1        $f26, 0x5682($t1) (Delay Slot)
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 22146), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x115C50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115C50u, 0x2DE154u, 0x2DE15Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE15Cu;
label_2de15c:
    // 0x2de15c: 0x453af696  .word       0x453AF696                   # INVALID     $t1, $k0, -0x96A # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2de15cu;
    throw std::runtime_error("Unhandled FPU instruction: format 0x9, function 0x16 at 0x2DE15C raw=0x453AF696");
    // 0x2de160: 0x44385696  .word       0x44385696                   # dmfc1       $t8, $f10 # 00000696 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2de160u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x1, function 0x16 at 0x2DE160 raw=0x44385696");
    // 0x2de164: 0x453a9696  .word       0x453A9696                   # INVALID     $t1, $k0, -0x696A # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2de164u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x9, function 0x16 at 0x2DE164 raw=0x453A9696");
    // 0x2de168: 0x4d3ad696  .word       0x4D3AD696                   # INVALID     $t1, $k0, -0x296A # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2de168u;
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x2DE168 raw=0x4D3AD696");
    // 0x2de16c: 0xdd3a568e  ld          $k0, 0x568E($t1)
    ctx->pc = 0x2de16cu;
    SET_GPR_U64(ctx, 26, READ64(ADD32(GPR_U32(ctx, 9), 22158)));
    // 0x2de170: 0x4b3ab616  vminiz.xw   $vf24, $vf22, $vf26z
    ctx->pc = 0x2de170u;
    { __m128 res = _mm_min_ps(ctx->vu0_vf[22], _mm_shuffle_ps(ctx->vu0_vf[26], ctx->vu0_vf[26], _MM_SHUFFLE(2,2,2,2))); __m128i mask = _mm_set_epi32(-1, 0, 0, -1); ctx->vu0_vf[24] = _mm_blendv_ps(ctx->vu0_vf[24], res, _mm_castsi128_ps(mask)); }
    // 0x2de174: 0xc04566e  jal         func_1159B8
    ctx->pc = 0x2DE174u;
    SET_GPR_U32(ctx, 31, 0x2DE17Cu);
    ctx->pc = 0x2DE178u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE174u;
    // 0x2de178: 0xe53a5682  swc1        $f26, 0x5682($t1) (Delay Slot)
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 22146), bits); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x1159B8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1159B8u, 0x2DE174u, 0x2DE17Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE17Cu;
label_2de17c:
    // 0x2de17c: 0xf43a569e  sdc1        $f26, 0x569E($at)
    ctx->pc = 0x2de17cu;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x2DE17C raw=0xF43A569E");
    // 0x2de180: 0xe53a5682  swc1        $f26, 0x5682($t1)
    ctx->pc = 0x2de180u;
    { float f = ctx->f[26]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 22146), bits); }
    // 0x2de184: 0xc0456f0  jal         func_115BC0
    ctx->pc = 0x2DE184u;
    SET_GPR_U32(ctx, 31, 0x2DE18Cu);
    ctx->pc = 0x2DE188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE184u;
    // 0x2de188: 0x4d3ad696  .word       0x4D3AD696                   # INVALID     $t1, $k0, -0x296A # 00000000 <InstrIdType: CPU_NORMAL> (Delay Slot)
    throw std::runtime_error("Unhandled opcode: 0x13 at 0x2DE188 raw=0x4D3AD696");
    ctx->in_delay_slot = false;
    ctx->pc = 0x115BC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x115BC0u, 0x2DE184u, 0x2DE18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE18Cu;
label_2de18c:
    // 0x2de18c: 0xf43a568e  sdc1        $f26, 0x568E($at)
    ctx->pc = 0x2de18cu;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x2DE18C raw=0xF43A568E");
    // 0x2de190: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2de190u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2de194: 0x45387696  .word       0x45387696                   # INVALID     $t1, $t8, 0x7696 # 00000000 <InstrIdType: R5900_COP1>
    ctx->pc = 0x2de194u;
    throw std::runtime_error("Unhandled FPU instruction: format 0x9, function 0x16 at 0x2DE194 raw=0x45387696");
    // 0x2de198: 0xac4098b4  sw          $zero, -0x674C($v0)
    ctx->pc = 0x2de198u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 4294940852), GPR_U32(ctx, 0));
    // 0x2de19c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DE19Cu;
    {
        const bool branch_taken_0x2de19c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2de19c) {
            ctx->pc = 0x2DE1CCu;
            goto label_2de1cc;
        }
    }
    ctx->pc = 0x2DE1A4u;
    // 0x2de1a4: 0xc281efd  jal         func_A07BF4
    ctx->pc = 0x2DE1A4u;
    SET_GPR_U32(ctx, 31, 0x2DE1ACu);
    ctx->pc = 0x2DE1A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE1A4u;
    // 0x2de1a8: 0x8708e813  lh          $t0, -0x17ED($t8) (Delay Slot)
    SET_GPR_S32(ctx, 8, (int16_t)READ16(ADD32(GPR_U32(ctx, 24), 4294961171)));
    ctx->in_delay_slot = false;
    ctx->pc = 0xA07BF4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0xA07BF4u, 0x2DE1A4u, 0x2DE1ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE1ACu;
label_2de1ac:
    // 0x2de1ac: 0xce5f229  jal         func_397C8A4
    ctx->pc = 0x2DE1ACu;
    SET_GPR_U32(ctx, 31, 0x2DE1B4u);
    ctx->pc = 0x2DE1B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE1ACu;
    // 0x2de1b0: 0x8e8beb2d  lw          $t3, -0x14D3($s4) (Delay Slot)
    SET_GPR_S32(ctx, 11, (int32_t)READ32(ADD32(GPR_U32(ctx, 20), 4294961965)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x397C8A4u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x397C8A4u, 0x2DE1ACu, 0x2DE1B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE1B4u;
label_2de1b4:
    // 0x2de1b4: 0x26c922c0  addiu       $t1, $s6, 0x22C0
    ctx->pc = 0x2de1b4u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 22), 8896));
    // 0x2de1b8: 0xdc88b63f  ld          $t0, -0x49C1($a0)
    ctx->pc = 0x2de1b8u;
    SET_GPR_U64(ctx, 8, READ64(ADD32(GPR_U32(ctx, 4), 4294948415)));
    // 0x2de1bc: 0x89a4569a  lwl         $a0, 0x569A($t5)
    ctx->pc = 0x2de1bcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 22170); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x2de1c0: 0xc713164b  lwc1        $f19, 0x164B($t8)
    ctx->pc = 0x2de1c0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 5707)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x2de1c4: 0x89a456e2  lwl         $a0, 0x56E2($t5)
    ctx->pc = 0x2de1c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 13), 22242); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t mem = READ32(aligned_addr); uint32_t shift = (3u - offset) << 3; uint32_t keepMask = (shift == 0) ? 0u : ((1u << shift) - 1u); uint32_t merged = (GPR_U32(ctx, 4) & keepMask) | (mem << shift); SET_GPR_S32(ctx, 4, (int32_t)merged); }
    // 0x2de1c8: 0x0  nop
    ctx->pc = 0x2de1c8u;
    // NOP
label_2de1cc:
    // 0x2de1cc: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2de1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2de1d0: 0x2442e1bc  addiu       $v0, $v0, -0x1E44
    ctx->pc = 0x2de1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294959548));
    // 0x2de1d4: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2de1d4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2de1d8: 0x2484e19c  addiu       $a0, $a0, -0x1E64
    ctx->pc = 0x2de1d8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959516));
    // 0x2de1dc: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2de1dcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2de1e0: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2de1e0u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2de1e4: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DE1E4u;
    SET_GPR_U32(ctx, 31, 0x2DE1ECu);
    ctx->pc = 0x2DE1E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DE1E4u;
    // 0x2de1e8: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2DE1E4u, 0x2DE1ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DE1ECu;
label_2de1ec:
    // 0x2de1ec: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2de1ecu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2de1f0: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2de1f0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2de1f4: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2de1f4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2de1f8: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2de1f8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2de1fc: 0x3e00008  jr          $ra
    ctx->pc = 0x2DE1FCu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DE200u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DE1FCu;
        // 0x2de200: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DE1FCu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DE204u;
    // 0x2de204: 0x0  nop
    ctx->pc = 0x2de204u;
    // NOP
}
