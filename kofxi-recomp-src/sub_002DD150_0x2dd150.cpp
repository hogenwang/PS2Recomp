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

// Function: sub_002DD150
// Address: 0x2dd150 - 0x2dd3c8
void sub_002DD150_0x2dd150(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DD150_0x2dd150");
#endif

    switch (ctx->pc) {
        case 0x2dd1a8u: goto label_2dd1a8;
        case 0x2dd1f4u: goto label_2dd1f4;
        case 0x2dd208u: goto label_2dd208;
        case 0x2dd23cu: goto label_2dd23c;
        case 0x2dd27cu: goto label_2dd27c;
        case 0x2dd2acu: goto label_2dd2ac;
        case 0x2dd2f8u: goto label_2dd2f8;
        case 0x2dd34cu: goto label_2dd34c;
        case 0x2dd39cu: goto label_2dd39c;
        case 0x2dd3a8u: goto label_2dd3a8;
        case 0x2dd3bcu: goto label_2dd3bc;
        default: break;
    }

    ctx->pc = 0x2dd150u;

    // 0x2dd150: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x2dd150u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x2dd154: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x2dd154u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x2dd158: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x2dd158u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd15c: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x2dd15cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x2dd160: 0x2413ffff  addiu       $s3, $zero, -0x1
    ctx->pc = 0x2dd160u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
    // 0x2dd164: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x2dd164u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x2dd168: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x2dd168u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x2dd16c: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2dd16cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2dd170: 0xe7b60038  swc1        $f22, 0x38($sp)
    ctx->pc = 0x2dd170u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 56), bits); }
    // 0x2dd174: 0xe7b50030  swc1        $f21, 0x30($sp)
    ctx->pc = 0x2dd174u;
    { float f = ctx->f[21]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 48), bits); }
    // 0x2dd178: 0xe7b40028  swc1        $f20, 0x28($sp)
    ctx->pc = 0x2dd178u;
    { float f = ctx->f[20]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 29), 40), bits); }
    // 0x2dd17c: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2dd17cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2dd180: 0x2463d1c8  addiu       $v1, $v1, -0x2E38
    ctx->pc = 0x2dd180u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294955464));
    // 0x2dd184: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2dd184u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dd188: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DD188u;
    {
        const bool branch_taken_0x2dd188 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dd188) {
            ctx->pc = 0x2DD1A8u;
            goto label_2dd1a8;
        }
    }
    ctx->pc = 0x2DD190u;
    // 0x2dd190: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2dd190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2dd194: 0x2484d1dc  addiu       $a0, $a0, -0x2E24
    ctx->pc = 0x2dd194u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955484));
    // 0x2dd198: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2dd198u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2dd19c: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2dd19cu;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2dd1a0: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DD1A0u;
    SET_GPR_U32(ctx, 31, 0x2DD1A8u);
    ctx->pc = 0x2DD1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD1A0u;
    // 0x2dd1a4: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2DD1A0u, 0x2DD1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD1A8u;
label_2dd1a8:
    // 0x2dd1a8: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DD1A8u;
    {
        const bool branch_taken_0x2dd1a8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd1a8) {
            ctx->pc = 0x2DD1DCu;
            goto label_2dd1dc;
        }
    }
    ctx->pc = 0x2DD1B0u;
    // 0x2dd1b0: 0x8ee83acd  lw          $t0, 0x3ACD($s7)
    ctx->pc = 0x2dd1b0u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 23), 15053)));
    // 0x2dd1b4: 0xa0d52e79  sb          $s5, 0x2E79($a2)
    ctx->pc = 0x2dd1b4u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 11897), (uint8_t)GPR_U32(ctx, 21));
    // 0x2dd1b8: 0xfe2b6f8a  sd          $t3, 0x6F8A($s1)
    ctx->pc = 0x2dd1b8u;
    WRITE64(ADD32(GPR_U32(ctx, 17), 28554), GPR_U64(ctx, 11));
    // 0x2dd1bc: 0xfec65152  sd          $a2, 0x5152($s6)
    ctx->pc = 0x2dd1bcu;
    WRITE64(ADD32(GPR_U32(ctx, 22), 20818), GPR_U64(ctx, 6));
    // 0x2dd1c0: 0xa28ad191  sb          $t2, -0x2E6F($s4)
    ctx->pc = 0x2dd1c0u;
    WRITE8(ADD32(GPR_U32(ctx, 20), 4294955409), (uint8_t)GPR_U32(ctx, 10));
    // 0x2dd1c4: 0x8d5f9bd5  lw          $ra, -0x642B($t2)
    ctx->pc = 0x2dd1c4u;
    SET_GPR_S32(ctx, 31, (int32_t)READ32(ADD32(GPR_U32(ctx, 10), 4294941653)));
    // 0x2dd1c8: 0x0  nop
    ctx->pc = 0x2dd1c8u;
    // NOP
    // 0x2dd1cc: 0xfbaaade8  sqc2        $vf10, -0x5218($sp)
    ctx->pc = 0x2dd1ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4294946280), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x2dd1d0: 0xc7130242  lwc1        $f19, 0x242($t8)
    ctx->pc = 0x2dd1d0u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 578)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x2dd1d4: 0xfbaaac98  sqc2        $vf10, -0x5368($sp)
    ctx->pc = 0x2dd1d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 4294945944), _mm_castps_si128(ctx->vu0_vf[10]));
    // 0x2dd1d8: 0x0  nop
    ctx->pc = 0x2dd1d8u;
    // NOP
label_2dd1dc:
    // 0x2dd1dc: 0x3c12003c  lui         $s2, 0x3C
    ctx->pc = 0x2dd1dcu;
    SET_GPR_S32(ctx, 18, (int32_t)((uint32_t)60 << 16));
    // 0x2dd1e0: 0x8e4398b0  lw          $v1, -0x6750($s2)
    ctx->pc = 0x2dd1e0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 18), 4294940848)));
    // 0x2dd1e4: 0xb5d3fa2e  sdr         $s3, -0x5D2($t6)
    ctx->pc = 0x2dd1e4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294965806); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 19); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dd1e8: 0xb4e2bc2a  sdr         $v0, -0x43D6($a3)
    ctx->pc = 0x2dd1e8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 7), 4294949930); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dd1ec: 0xc0b74f2  jal         func_2DD3C8
    ctx->pc = 0x2DD1ECu;
    SET_GPR_U32(ctx, 31, 0x2DD1F4u);
    ctx->pc = 0x2DD1F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD1ECu;
    // 0x2dd1f0: 0xb532bc28  sdr         $s2, -0x43D8($t1) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 4294949928); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DD3C8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DD3C8u, 0x2DD1ECu, 0x2DD1F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD1F4u;
label_2dd1f4:
    // 0x2dd1f4: 0xb507f82a  sdr         $a3, -0x7D6($t0)
    ctx->pc = 0x2dd1f4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 8), 4294965290); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dd1f8: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2dd1f8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2dd1fc: 0xf530fc2c  sdc1        $f16, -0x3D4($t1)
    ctx->pc = 0x2dd1fcu;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x2DD1FC raw=0xF530FC2C");
    // 0x2dd200: 0xc09ef32  jal         func_27BCC8
    ctx->pc = 0x2DD200u;
    SET_GPR_U32(ctx, 31, 0x2DD208u);
    ctx->pc = 0x2DD204u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD200u;
    // 0x2dd204: 0xe130fc59  sc          $s0, -0x3A7($t1) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 4294966361); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 16)); SET_GPR_S32(ctx, 16, 1); } else { SET_GPR_S32(ctx, 16, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27BCC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27BCC8u, 0x2DD200u, 0x2DD208u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD208u;
label_2dd208:
    // 0x2dd208: 0xbde2b8aa  cache       0x02, -0x4756($t7)
    ctx->pc = 0x2dd208u;
    // CACHE instruction (ignored)
    // 0x2dd20c: 0xb5c39e2c  sdr         $v1, -0x61D4($t6)
    ctx->pc = 0x2dd20cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 14), 4294942252); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dd210: 0x3c05003c  lui         $a1, 0x3C
    ctx->pc = 0x2dd210u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)60 << 16));
    // 0x2dd214: 0x3c04003c  lui         $a0, 0x3C
    ctx->pc = 0x2dd214u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)60 << 16));
    // 0x2dd218: 0x24a5df88  addiu       $a1, $a1, -0x2078
    ctx->pc = 0x2dd218u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294958984));
    // 0x2dd21c: 0xb530df2b  sdr         $s0, -0x20D5($t1)
    ctx->pc = 0x2dd21cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 4294958891); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 16); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dd220: 0x248498b8  addiu       $a0, $a0, -0x6748
    ctx->pc = 0x2dd220u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294940856));
    // 0x2dd224: 0xd5b0f628  ldc1        $f16, -0x9D8($t5)
    ctx->pc = 0x2dd224u;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x2DD224 raw=0xD5B0F628");
    // 0x2dd228: 0xc530f629  lwc1        $f16, -0x9D7($t1)
    ctx->pc = 0x2dd228u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 9), 4294964777)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[16] = f; }
    // 0x2dd22c: 0xb1e29c2a  sdl         $v0, -0x63D6($t7)
    ctx->pc = 0x2dd22cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 15), 4294941738); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = (7u - offset) << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull >> shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dd230: 0x25b0f629  addiu       $s0, $t5, -0x9D7
    ctx->pc = 0x2dd230u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 13), 4294964777));
    // 0x2dd234: 0xc0b81f8  jal         func_2E07E0
    ctx->pc = 0x2DD234u;
    SET_GPR_U32(ctx, 31, 0x2DD23Cu);
    ctx->pc = 0x2DD238u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD234u;
    // 0x2dd238: 0x1590fca5  bne         $t4, $s0, . + 4 + (-0x35B << 2) (Delay Slot)
    // Likely branch instruction at 0x2DD238 - Handled by branch logic
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E07E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E07E0u, 0x2DD234u, 0x2DD23Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD23Cu;
label_2dd23c:
    // 0x2dd23c: 0xb522f82a  sdr         $v0, -0x7D6($t1)
    ctx->pc = 0x2dd23cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 4294965290); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dd240: 0xca30fcd4  lwc2        $16, -0x32C($s1)
    ctx->pc = 0x2dd240u;
    throw std::runtime_error("Unhandled opcode: 0x32 at 0x2DD240 raw=0xCA30FCD4");
    // 0x2dd244: 0xe53b9c28  swc1        $f27, -0x63D8($t1)
    ctx->pc = 0x2dd244u;
    { float f = ctx->f[27]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 9), 4294941736), bits); }
    // 0x2dd248: 0x951b9e2b  lhu         $k1, -0x61D5($t0)
    ctx->pc = 0x2dd248u;
    SET_GPR_U32(ctx, 27, (uint16_t)READ16(ADD32(GPR_U32(ctx, 8), 4294942251)));
    // 0x2dd24c: 0xf530de2c  sdc1        $f16, -0x21D4($t1)
    ctx->pc = 0x2dd24cu;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x2DD24C raw=0xF530DE2C");
    // 0x2dd250: 0x852b9e2b  lh          $t3, -0x61D5($t1)
    ctx->pc = 0x2dd250u;
    SET_GPR_S32(ctx, 11, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 4294942251)));
    // 0x2dd254: 0xe732bcc8  swc1        $f18, -0x4338($t9)
    ctx->pc = 0x2dd254u;
    { float f = ctx->f[18]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 25), 4294950088), bits); }
    // 0x2dd258: 0xd50b9e2b  ldc1        $f11, -0x61D5($t0)
    ctx->pc = 0x2dd258u;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x2DD258 raw=0xD50B9E2B");
    // 0x2dd25c: 0x9432bc08  lhu         $s2, -0x43F8($at)
    ctx->pc = 0x2dd25cu;
    SET_GPR_U32(ctx, 18, (uint16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294949896)));
    // 0x2dd260: 0x8432bce8  lh          $s2, -0x4318($at)
    ctx->pc = 0x2dd260u;
    SET_GPR_S32(ctx, 18, (int16_t)READ16(ADD32(GPR_U32(ctx, 1), 4294950120)));
    // 0x2dd264: 0xd762b6aa  ldc1        $f2, -0x4956($k1)
    ctx->pc = 0x2dd264u;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x2DD264 raw=0xD762B6AA");
    // 0x2dd268: 0x8462b82a  lh          $v0, -0x47D6($v1)
    ctx->pc = 0x2dd268u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294948906)));
    // 0x2dd26c: 0x9762b6aa  lhu         $v0, -0x4956($k1)
    ctx->pc = 0x2dd26cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 27), 4294948522)));
    // 0x2dd270: 0xe5c0f62b  swc1        $f0, -0x9D5($t6)
    ctx->pc = 0x2dd270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 14), 4294964779), bits); }
    // 0x2dd274: 0xc0b73ea  jal         func_2DCFA8
    ctx->pc = 0x2DD274u;
    SET_GPR_U32(ctx, 31, 0x2DD27Cu);
    ctx->pc = 0x2DD278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD274u;
    // 0x2dd278: 0xc772b6aa  lwc1        $f18, -0x4956($k1) (Delay Slot)
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 27), 4294948522)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DCFA8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DCFA8u, 0x2DD274u, 0x2DD27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD27Cu;
label_2dd27c:
    // 0x2dd27c: 0xb522f829  sdr         $v0, -0x7D7($t1)
    ctx->pc = 0x2dd27cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 4294965289); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dd280: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2dd280u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2dd284: 0x245098b4  addiu       $s0, $v0, -0x674C
    ctx->pc = 0x2dd284u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 2), 4294940852));
    // 0x2dd288: 0x853a5c28  lh          $k0, 0x5C28($t1)
    ctx->pc = 0x2dd288u;
    SET_GPR_S32(ctx, 26, (int16_t)READ16(ADD32(GPR_U32(ctx, 9), 23592)));
    // 0x2dd28c: 0xb587fa28  sdr         $a3, -0x5D8($t4)
    ctx->pc = 0x2dd28cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 12), 4294965800); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 7); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dd290: 0x9520fc28  lhu         $zero, -0x3D8($t1)
    ctx->pc = 0x2dd290u;
    SET_GPR_U32(ctx, 0, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4294966312)));
    // 0x2dd294: 0x3c0401c9  lui         $a0, 0x1C9
    ctx->pc = 0x2dd294u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)457 << 16));
    // 0x2dd298: 0xed317c28  .word       0xED317C28                   # INVALID     $t1, $s1, 0x7C28 # 00000000 <InstrIdType: CPU_NORMAL>
    ctx->pc = 0x2dd298u;
    throw std::runtime_error("Unhandled opcode: 0x3B at 0x2DD298 raw=0xED317C28");
    // 0x2dd29c: 0x24844d80  addiu       $a0, $a0, 0x4D80
    ctx->pc = 0x2dd29cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 19840));
    // 0x2dd2a0: 0xe501f6d8  swc1        $f1, -0x928($t0)
    ctx->pc = 0x2dd2a0u;
    { float f = ctx->f[1]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294964952), bits); }
    // 0x2dd2a4: 0xc0b937a  jal         func_2E4DE8
    ctx->pc = 0x2DD2A4u;
    SET_GPR_U32(ctx, 31, 0x2DD2ACu);
    ctx->pc = 0x2DD2A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD2A4u;
    // 0x2dd2a8: 0xb6e2bc2a  sdr         $v0, -0x43D6($s7) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 4294949930); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2E4DE8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2E4DE8u, 0x2DD2A4u, 0x2DD2ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD2ACu;
label_2dd2ac:
    // 0x2dd2ac: 0xb562f828  sdr         $v0, -0x7D8($t3)
    ctx->pc = 0x2dd2acu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 4294965288); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dd2b0: 0x9520fc28  lhu         $zero, -0x3D8($t1)
    ctx->pc = 0x2dd2b0u;
    SET_GPR_U32(ctx, 0, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4294966312)));
    // 0x2dd2b4: 0x95385c28  lhu         $t8, 0x5C28($t1)
    ctx->pc = 0x2dd2b4u;
    SET_GPR_U32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 23592)));
    // 0x2dd2b8: 0x9520fc28  lhu         $zero, -0x3D8($t1)
    ctx->pc = 0x2dd2b8u;
    SET_GPR_U32(ctx, 0, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4294966312)));
    // 0x2dd2bc: 0xbce2bcaa  cache       0x02, -0x4356($a3)
    ctx->pc = 0x2dd2bcu;
    // CACHE instruction (ignored)
    // 0x2dd2c0: 0xae4298b0  sw          $v0, -0x6750($s2)
    ctx->pc = 0x2dd2c0u;
    WRITE32(ADD32(GPR_U32(ctx, 18), 4294940848), GPR_U32(ctx, 2));
    // 0x2dd2c4: 0xb5239e2a  sdr         $v1, -0x61D6($t1)
    ctx->pc = 0x2dd2c4u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 4294942250); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 3); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dd2c8: 0xb532bc28  sdr         $s2, -0x43D8($t1)
    ctx->pc = 0x2dd2c8u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 4294949928); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dd2cc: 0xa1c17cc7  sb          $at, 0x7CC7($t6)
    ctx->pc = 0x2dd2ccu;
    WRITE8(ADD32(GPR_U32(ctx, 14), 31943), (uint8_t)GPR_U32(ctx, 1));
    // 0x2dd2d0: 0xaac1fed7  swl         $at, -0x129($s6)
    ctx->pc = 0x2dd2d0u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 22), 4294966999); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = (3u - offset) << 3; uint32_t mask = 0xFFFFFFFFu >> shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 1); uint32_t new_data = (old_data & ~mask) | ((val >> shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dd2d4: 0xae36f428  sw          $s6, -0xBD8($s1)
    ctx->pc = 0x2dd2d4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 4294964264), GPR_U32(ctx, 22));
    // 0x2dd2d8: 0xbde2bc2a  cache       0x02, -0x43D6($t7)
    ctx->pc = 0x2dd2d8u;
    // CACHE instruction (ignored)
    // 0x2dd2dc: 0xa1317c10  sb          $s1, 0x7C10($t1)
    ctx->pc = 0x2dd2dcu;
    WRITE8(ADD32(GPR_U32(ctx, 9), 31760), (uint8_t)GPR_U32(ctx, 17));
    // 0x2dd2e0: 0xaf36f4a8  sw          $s6, -0xB58($t9)
    ctx->pc = 0x2dd2e0u;
    WRITE32(ADD32(GPR_U32(ctx, 25), 4294964392), GPR_U32(ctx, 22));
    // 0x2dd2e4: 0x9d317d28  lwu         $s1, 0x7D28($t1)
    ctx->pc = 0x2dd2e4u;
    SET_GPR_U32(ctx, 17, READ32(ADD32(GPR_U32(ctx, 9), 32040)));
    // 0x2dd2e8: 0xa1317cd8  sb          $s1, 0x7CD8($t1)
    ctx->pc = 0x2dd2e8u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 31960), (uint8_t)GPR_U32(ctx, 17));
    // 0x2dd2ec: 0xaf36f428  sw          $s6, -0xBD8($t9)
    ctx->pc = 0x2dd2ecu;
    WRITE32(ADD32(GPR_U32(ctx, 25), 4294964264), GPR_U32(ctx, 22));
    // 0x2dd2f0: 0xc0b7c76  jal         func_2DF1D8
    ctx->pc = 0x2DD2F0u;
    SET_GPR_U32(ctx, 31, 0x2DD2F8u);
    ctx->pc = 0x2DD2F4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD2F0u;
    // 0x2dd2f4: 0xb532bc28  sdr         $s2, -0x43D8($t1) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 4294949928); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DF1D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DF1D8u, 0x2DD2F0u, 0x2DD2F8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD2F8u;
label_2dd2f8:
    // 0x2dd2f8: 0x9536f428  lhu         $s6, -0xBD8($t1)
    ctx->pc = 0x2dd2f8u;
    SET_GPR_U32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4294964264)));
    // 0x2dd2fc: 0xb536d42a  sdr         $s6, -0x2BD6($t1)
    ctx->pc = 0x2dd2fcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 4294956074); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 22); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dd300: 0xb7229f2a  sdr         $v0, -0x60D6($t9)
    ctx->pc = 0x2dd300u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 25), 4294942506); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dd304: 0xb520dd28  sdr         $zero, -0x22D8($t1)
    ctx->pc = 0x2dd304u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 4294958376); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 0); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dd308: 0xb532bc28  sdr         $s2, -0x43D8($t1)
    ctx->pc = 0x2dd308u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 4294949928); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dd30c: 0xb532bc28  sdr         $s2, -0x43D8($t1)
    ctx->pc = 0x2dd30cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 9), 4294949928); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 18); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dd310: 0xd506dd28  ldc1        $f6, -0x22D8($t0)
    ctx->pc = 0x2dd310u;
    throw std::runtime_error("Unhandled opcode: 0x35 at 0x2DD310 raw=0xD506DD28");
    // 0x2dd314: 0xe516dd28  swc1        $f22, -0x22D8($t0)
    ctx->pc = 0x2dd314u;
    { float f = ctx->f[22]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 8), 4294958376), bits); }
    // 0x2dd318: 0xbf56dc2b  cache       0x16, -0x23D5($k0)
    ctx->pc = 0x2dd318u;
    // CACHE instruction (ignored)
    // 0x2dd31c: 0xb576dc2e  sdr         $s6, -0x23D2($t3)
    ctx->pc = 0x2dd31cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 4294958126); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 22); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dd320: 0x9536fca8  lhu         $s6, -0x358($t1)
    ctx->pc = 0x2dd320u;
    SET_GPR_U32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4294966440)));
    // 0x2dd324: 0xb566ec28  sdr         $a2, -0x13D8($t3)
    ctx->pc = 0x2dd324u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 4294962216); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 6); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dd328: 0x81305c59  lb          $s0, 0x5C59($t1)
    ctx->pc = 0x2dd328u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 23641)));
    // 0x2dd32c: 0xf526dd28  sdc1        $f6, -0x22D8($t1)
    ctx->pc = 0x2dd32cu;
    throw std::runtime_error("Unhandled opcode: 0x3D at 0x2DD32C raw=0xF526DD28");
    // 0x2dd330: 0xb576dc2e  sdr         $s6, -0x23D2($t3)
    ctx->pc = 0x2dd330u;
    { uint32_t addr = ADD32(GPR_U32(ctx, 11), 4294958126); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 22); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    // 0x2dd334: 0x9536fca8  lhu         $s6, -0x358($t1)
    ctx->pc = 0x2dd334u;
    SET_GPR_U32(ctx, 22, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4294966440)));
    // 0x2dd338: 0x9462b92a  lhu         $v0, -0x46D6($v1)
    ctx->pc = 0x2dd338u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294949162)));
    // 0x2dd33c: 0xbaf3fad6  swr         $s3, -0x52A($s7)
    ctx->pc = 0x2dd33cu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 23), 4294965974); uint32_t aligned_addr = addr & ~3u; uint32_t offset = addr & 3u; uint32_t shift = offset << 3; uint32_t mask = 0xFFFFFFFFu << shift; uint32_t old_data = READ32(aligned_addr); uint32_t val = GPR_U32(ctx, 19); uint32_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE32(aligned_addr, new_data); }
    // 0x2dd340: 0x9538b428  lhu         $t8, -0x4BD8($t1)
    ctx->pc = 0x2dd340u;
    SET_GPR_U32(ctx, 24, (uint16_t)READ16(ADD32(GPR_U32(ctx, 9), 4294947880)));
    // 0x2dd344: 0xc09edd6  jal         func_27B758
    ctx->pc = 0x2DD344u;
    SET_GPR_U32(ctx, 31, 0x2DD34Cu);
    ctx->pc = 0x2DD348u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD344u;
    // 0x2dd348: 0xb7e29e2a  sdr         $v0, -0x61D6($ra) (Delay Slot)
    { uint32_t addr = ADD32(GPR_U32(ctx, 31), 4294942250); uint32_t aligned_addr = addr & ~7u; uint32_t offset = addr & 7u; uint32_t shift = offset << 3; uint64_t mask = 0xFFFFFFFFFFFFFFFFull << shift; uint64_t old_data = READ64(aligned_addr); uint64_t val = GPR_U64(ctx, 2); uint64_t new_data = (old_data & ~mask) | ((val << shift) & mask); WRITE64(aligned_addr, new_data); }
    ctx->in_delay_slot = false;
    ctx->pc = 0x27B758u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27B758u, 0x2DD344u, 0x2DD34Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD34Cu;
label_2dd34c:
    // 0x2dd34c: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DD34Cu;
    {
        const bool branch_taken_0x2dd34c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dd34c) {
            ctx->pc = 0x2DD37Cu;
            goto label_2dd37c;
        }
    }
    ctx->pc = 0x2DD354u;
    // 0x2dd354: 0xddcb875f  ld          $t3, -0x78A1($t6)
    ctx->pc = 0x2dd354u;
    SET_GPR_U64(ctx, 11, READ64(ADD32(GPR_U32(ctx, 14), 4294936415)));
    // 0x2dd358: 0x27932c00  addiu       $s3, $gp, 0x2C00
    ctx->pc = 0x2dd358u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 28), 11264));
    // 0x2dd35c: 0x637820  add         $t7, $v1, $v1
    ctx->pc = 0x2dd35cu;
    {     int32_t rs_val = GPR_S32(ctx, 3);     int32_t rt_val = GPR_S32(ctx, 3);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 15, (int32_t)result);     } }
    // 0x2dd360: 0x8f844ff5  lw          $a0, 0x4FF5($gp)
    ctx->pc = 0x2dd360u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 28), 20469)));
    // 0x2dd364: 0xdf627ff7  ld          $v0, 0x7FF7($k1)
    ctx->pc = 0x2dd364u;
    SET_GPR_U64(ctx, 2, READ64(ADD32(GPR_U32(ctx, 27), 32759)));
    // 0x2dd368: 0x25584a18  addiu       $t8, $t2, 0x4A18
    ctx->pc = 0x2dd368u;
    SET_GPR_S32(ctx, 24, (int32_t)ADD32(GPR_U32(ctx, 10), 18968));
    // 0x2dd36c: 0xf8edaaab  sqc2        $vf13, -0x5555($a3)
    ctx->pc = 0x2dd36cu;
    WRITE128(ADD32(GPR_U32(ctx, 7), 4294945451), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x2dd370: 0xc7130243  lwc1        $f19, 0x243($t8)
    ctx->pc = 0x2dd370u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 579)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[19] = f; }
    // 0x2dd374: 0xf8edabdb  sqc2        $vf13, -0x5425($a3)
    ctx->pc = 0x2dd374u;
    WRITE128(ADD32(GPR_U32(ctx, 7), 4294945755), _mm_castps_si128(ctx->vu0_vf[13]));
    // 0x2dd378: 0x0  nop
    ctx->pc = 0x2dd378u;
    // NOP
label_2dd37c:
    // 0x2dd37c: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2dd37cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2dd380: 0x2442d36c  addiu       $v0, $v0, -0x2C94
    ctx->pc = 0x2dd380u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294955884));
    // 0x2dd384: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2dd384u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2dd388: 0x2484d34c  addiu       $a0, $a0, -0x2CB4
    ctx->pc = 0x2dd388u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294955852));
    // 0x2dd38c: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2dd38cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2dd390: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2dd390u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2dd394: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DD394u;
    SET_GPR_U32(ctx, 31, 0x2DD39Cu);
    ctx->pc = 0x2DD398u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DD394u;
    // 0x2dd398: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2DD394u, 0x2DD39Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DD39Cu;
label_2dd39c:
    // 0x2dd39c: 0x260102d  daddu       $v0, $s3, $zero
    ctx->pc = 0x2dd39cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dd3a0: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x2dd3a0u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x2dd3a4: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x2dd3a4u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
label_2dd3a8:
    // 0x2dd3a8: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x2dd3a8u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dd3ac: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x2dd3acu;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2dd3b0: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2dd3b0u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dd3b4: 0xc7b60038  lwc1        $f22, 0x38($sp)
    ctx->pc = 0x2dd3b4u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 56)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[22] = f; }
    // 0x2dd3b8: 0xc7b50030  lwc1        $f21, 0x30($sp)
    ctx->pc = 0x2dd3b8u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 48)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[21] = f; }
label_2dd3bc:
    // 0x2dd3bc: 0xc7b40028  lwc1        $f20, 0x28($sp)
    ctx->pc = 0x2dd3bcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 29), 40)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[20] = f; }
    // 0x2dd3c0: 0x3e00008  jr          $ra
    ctx->pc = 0x2DD3C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DD3C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DD3C0u;
        // 0x2dd3c4: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DD3C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DD3C8u;
}
