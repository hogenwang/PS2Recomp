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

// Function: sub_00151110
// Address: 0x151110 - 0x151820
void sub_00151110_0x151110(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00151110_0x151110");
#endif

    switch (ctx->pc) {
        case 0x151134u: goto label_151134;
        case 0x151144u: goto label_151144;
        case 0x15114cu: goto label_15114c;
        case 0x151188u: goto label_151188;
        case 0x1511b0u: goto label_1511b0;
        case 0x1511fcu: goto label_1511fc;
        case 0x151220u: goto label_151220;
        case 0x151368u: goto label_151368;
        case 0x1513acu: goto label_1513ac;
        case 0x1513f0u: goto label_1513f0;
        case 0x15140cu: goto label_15140c;
        case 0x1514f0u: goto label_1514f0;
        case 0x15150cu: goto label_15150c;
        case 0x151524u: goto label_151524;
        case 0x151530u: goto label_151530;
        case 0x151674u: goto label_151674;
        case 0x151694u: goto label_151694;
        case 0x151814u: goto label_151814;
        default: break;
    }

    ctx->pc = 0x151110u;

    // 0x151110: 0x27bdff20  addiu       $sp, $sp, -0xE0
    ctx->pc = 0x151110u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967072));
    // 0x151114: 0xffbf0050  sd          $ra, 0x50($sp)
    ctx->pc = 0x151114u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 80), GPR_U64(ctx, 31));
    // 0x151118: 0x7fb40040  sq          $s4, 0x40($sp)
    ctx->pc = 0x151118u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 64), GPR_VEC(ctx, 20));
    // 0x15111c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x15111cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x151120: 0x80a02d  daddu       $s4, $a0, $zero
    ctx->pc = 0x151120u;
    SET_GPR_U64(ctx, 20, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151124: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x151124u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x151128: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x151128u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x15112c: 0xc054bc0  jal         func_152F00
    ctx->pc = 0x15112Cu;
    SET_GPR_U32(ctx, 31, 0x151134u);
    ctx->pc = 0x151130u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15112Cu;
    // 0x151130: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152F00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152F00u, 0x15112Cu, 0x151134u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151134u;
label_151134:
    // 0x151134: 0x305200ff  andi        $s2, $v0, 0xFF
    ctx->pc = 0x151134u;
    SET_GPR_U64(ctx, 18, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x151138: 0x1a40015b  blez        $s2, . + 4 + (0x15B << 2)
    ctx->pc = 0x151138u;
    {
        const bool branch_taken_0x151138 = (GPR_S32(ctx, 18) <= 0);
        ctx->pc = 0x15113Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151138u;
        // 0x15113c: 0x982d  daddu       $s3, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151138) {
            ctx->pc = 0x1516A8u;
            goto label_1516a8;
        }
    }
    ctx->pc = 0x151140u;
    // 0x151140: 0x27a400a0  addiu       $a0, $sp, 0xA0
    ctx->pc = 0x151140u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
label_151144:
    // 0x151144: 0xc054bc8  jal         func_152F20
    ctx->pc = 0x151144u;
    SET_GPR_U32(ctx, 31, 0x15114Cu);
    ctx->pc = 0x151148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151144u;
    // 0x151148: 0x260282d  daddu       $a1, $s3, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 19) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152F20u, 0x151144u, 0x15114Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15114Cu;
label_15114c:
    // 0x15114c: 0x93a400af  lbu         $a0, 0xAF($sp)
    ctx->pc = 0x15114cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 175)));
    // 0x151150: 0x30830020  andi        $v1, $a0, 0x20
    ctx->pc = 0x151150u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)32);
    // 0x151154: 0x14600150  bnez        $v1, . + 4 + (0x150 << 2)
    ctx->pc = 0x151154u;
    {
        const bool branch_taken_0x151154 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x151154) {
            ctx->pc = 0x151698u;
            goto label_151698;
        }
    }
    ctx->pc = 0x15115Cu;
    // 0x15115c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x15115cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x151160: 0x1040000b  beqz        $v0, . + 4 + (0xB << 2)
    ctx->pc = 0x151160u;
    {
        const bool branch_taken_0x151160 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x151160) {
            ctx->pc = 0x151190u;
            goto label_151190;
        }
    }
    ctx->pc = 0x151168u;
    // 0x151168: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x151168u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x15116c: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x15116cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x151170: 0x248416d0  addiu       $a0, $a0, 0x16D0
    ctx->pc = 0x151170u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5840));
    // 0x151174: 0x24a5d0d8  addiu       $a1, $a1, -0x2F28
    ctx->pc = 0x151174u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955224));
    // 0x151178: 0x24060027  addiu       $a2, $zero, 0x27
    ctx->pc = 0x151178u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x15117c: 0x240700f0  addiu       $a3, $zero, 0xF0
    ctx->pc = 0x15117cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x151180: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x151180u;
    SET_GPR_U32(ctx, 31, 0x151188u);
    ctx->pc = 0x151184u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151180u;
    // 0x151184: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x151180u, 0x151188u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151188u;
label_151188:
    // 0x151188: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x151188u;
    {
        const bool branch_taken_0x151188 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x151188) {
            ctx->pc = 0x1511B0u;
            goto label_1511b0;
        }
    }
    ctx->pc = 0x151190u;
label_151190:
    // 0x151190: 0x3c040015  lui         $a0, 0x15
    ctx->pc = 0x151190u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)21 << 16));
    // 0x151194: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x151194u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x151198: 0x248416d0  addiu       $a0, $a0, 0x16D0
    ctx->pc = 0x151198u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 5840));
    // 0x15119c: 0x24a5d0e8  addiu       $a1, $a1, -0x2F18
    ctx->pc = 0x15119cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294955240));
    // 0x1511a0: 0x24060027  addiu       $a2, $zero, 0x27
    ctx->pc = 0x1511a0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 39));
    // 0x1511a4: 0x240700f0  addiu       $a3, $zero, 0xF0
    ctx->pc = 0x1511a4u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 0), 240));
    // 0x1511a8: 0xc0556d4  jal         func_155B50
    ctx->pc = 0x1511A8u;
    SET_GPR_U32(ctx, 31, 0x1511B0u);
    ctx->pc = 0x1511ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1511A8u;
    // 0x1511ac: 0x280402d  daddu       $t0, $s4, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 20) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x155B50u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x155B50u, 0x1511A8u, 0x1511B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1511B0u;
label_1511b0:
    // 0x1511b0: 0x10400139  beqz        $v0, . + 4 + (0x139 << 2)
    ctx->pc = 0x1511B0u;
    {
        const bool branch_taken_0x1511b0 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1511b0) {
            ctx->pc = 0x151698u;
            goto label_151698;
        }
    }
    ctx->pc = 0x1511B8u;
    // 0x1511b8: 0x8c510010  lw          $s1, 0x10($v0)
    ctx->pc = 0x1511b8u;
    SET_GPR_S32(ctx, 17, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16)));
    // 0x1511bc: 0x97a300a0  lhu         $v1, 0xA0($sp)
    ctx->pc = 0x1511bcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 160)));
    // 0x1511c0: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x1511c0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x1511c4: 0xa2230003  sb          $v1, 0x3($s1)
    ctx->pc = 0x1511c4u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 3), (uint8_t)GPR_U32(ctx, 3));
    // 0x1511c8: 0x2442f130  addiu       $v0, $v0, -0xED0
    ctx->pc = 0x1511c8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294963504));
    // 0x1511cc: 0x97a300a6  lhu         $v1, 0xA6($sp)
    ctx->pc = 0x1511ccu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 166)));
    // 0x1511d0: 0xa6230000  sh          $v1, 0x0($s1)
    ctx->pc = 0x1511d0u;
    WRITE16(ADD32(GPR_U32(ctx, 17), 0), (uint16_t)GPR_U32(ctx, 3));
    // 0x1511d4: 0x92240003  lbu         $a0, 0x3($s1)
    ctx->pc = 0x1511d4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x1511d8: 0x41840  sll         $v1, $a0, 1
    ctx->pc = 0x1511d8u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 4), 1));
    // 0x1511dc: 0x641821  addu        $v1, $v1, $a0
    ctx->pc = 0x1511dcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1511e0: 0x318c0  sll         $v1, $v1, 3
    ctx->pc = 0x1511e0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 3));
    // 0x1511e4: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x1511e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x1511e8: 0x90420016  lbu         $v0, 0x16($v0)
    ctx->pc = 0x1511e8u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 22)));
    // 0x1511ec: 0x1040000a  beqz        $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x1511ECu;
    {
        const bool branch_taken_0x1511ec = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1511ec) {
            ctx->pc = 0x151218u;
            goto label_151218;
        }
    }
    ctx->pc = 0x1511F4u;
    // 0x1511f4: 0xc0542e8  jal         func_150BA0
    ctx->pc = 0x1511F4u;
    SET_GPR_U32(ctx, 31, 0x1511FCu);
    ctx->pc = 0x1511F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1511F4u;
    // 0x1511f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150BA0u, 0x1511F4u, 0x1511FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1511FCu;
label_1511fc:
    // 0x1511fc: 0x3c02413c  lui         $v0, 0x413C
    ctx->pc = 0x1511fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16700 << 16));
    // 0x151200: 0x3442cccd  ori         $v0, $v0, 0xCCCD
    ctx->pc = 0x151200u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)52429);
    // 0x151204: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x151204u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x151208: 0x0  nop
    ctx->pc = 0x151208u;
    // NOP
    // 0x15120c: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x15120cu;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x151210: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x151210u;
    {
        const bool branch_taken_0x151210 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151214u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151210u;
        // 0x151214: 0xe62000a8  swc1        $f0, 0xA8($s1) (Delay Slot)
        { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 168), bits); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151210) {
            ctx->pc = 0x151238u;
            goto label_151238;
        }
    }
    ctx->pc = 0x151218u;
label_151218:
    // 0x151218: 0xc0542e8  jal         func_150BA0
    ctx->pc = 0x151218u;
    SET_GPR_U32(ctx, 31, 0x151220u);
    ctx->pc = 0x15121Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151218u;
    // 0x15121c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150BA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150BA0u, 0x151218u, 0x151220u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151220u;
label_151220:
    // 0x151220: 0x3c024026  lui         $v0, 0x4026
    ctx->pc = 0x151220u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)16422 << 16));
    // 0x151224: 0x34426666  ori         $v0, $v0, 0x6666
    ctx->pc = 0x151224u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)26214);
    // 0x151228: 0x44820800  mtc1        $v0, $f1
    ctx->pc = 0x151228u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[1], &bits, sizeof(bits)); }
    // 0x15122c: 0x0  nop
    ctx->pc = 0x15122cu;
    // NOP
    // 0x151230: 0x46000801  sub.s       $f0, $f1, $f0
    ctx->pc = 0x151230u;
    ctx->f[0] = FPU_SUB_S(ctx->f[1], ctx->f[0]);
    // 0x151234: 0xe62000a8  swc1        $f0, 0xA8($s1)
    ctx->pc = 0x151234u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 168), bits); }
label_151238:
    // 0x151238: 0x97a400a8  lhu         $a0, 0xA8($sp)
    ctx->pc = 0x151238u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 168)));
    // 0x15123c: 0x3c0251eb  lui         $v0, 0x51EB
    ctx->pc = 0x15123cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)20971 << 16));
    // 0x151240: 0x3c030036  lui         $v1, 0x36
    ctx->pc = 0x151240u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)54 << 16));
    // 0x151244: 0x3446851f  ori         $a2, $v0, 0x851F
    ctx->pc = 0x151244u;
    SET_GPR_U64(ctx, 6, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)34079);
    // 0x151248: 0x2463e7b8  addiu       $v1, $v1, -0x1848
    ctx->pc = 0x151248u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294961080));
    // 0x15124c: 0xc40018  mult        $zero, $a2, $a0
    ctx->pc = 0x15124cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x151250: 0x42fc2  srl         $a1, $a0, 31
    ctx->pc = 0x151250u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x151254: 0x24020003  addiu       $v0, $zero, 0x3
    ctx->pc = 0x151254u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x151258: 0x2010  mfhi        $a0
    ctx->pc = 0x151258u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x15125c: 0x42143  sra         $a0, $a0, 5
    ctx->pc = 0x15125cu;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
    // 0x151260: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x151260u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x151264: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x151264u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151268: 0x0  nop
    ctx->pc = 0x151268u;
    // NOP
    // 0x15126c: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x15126cu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x151270: 0xe6200004  swc1        $f0, 0x4($s1)
    ctx->pc = 0x151270u;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 4), bits); }
    // 0x151274: 0x97a400aa  lhu         $a0, 0xAA($sp)
    ctx->pc = 0x151274u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 170)));
    // 0x151278: 0xc40018  mult        $zero, $a2, $a0
    ctx->pc = 0x151278u;
    { int64_t result = (int64_t)GPR_S32(ctx, 6) * (int64_t)GPR_S32(ctx, 4); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x15127c: 0x42fc2  srl         $a1, $a0, 31
    ctx->pc = 0x15127cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 4), 31));
    // 0x151280: 0x0  nop
    ctx->pc = 0x151280u;
    // NOP
    // 0x151284: 0x2010  mfhi        $a0
    ctx->pc = 0x151284u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x151288: 0x42143  sra         $a0, $a0, 5
    ctx->pc = 0x151288u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 5));
    // 0x15128c: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x15128cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x151290: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x151290u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151294: 0x0  nop
    ctx->pc = 0x151294u;
    // NOP
    // 0x151298: 0x46800020  cvt.s.w     $f0, $f0
    ctx->pc = 0x151298u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[0] = FPU_CVT_S_W(tmp); }
    // 0x15129c: 0xe6200008  swc1        $f0, 0x8($s1)
    ctx->pc = 0x15129cu;
    { float f = ctx->f[0]; uint32_t bits; std::memcpy(&bits, &f, sizeof(bits)); WRITE32(ADD32(GPR_U32(ctx, 17), 8), bits); }
    // 0x1512a0: 0xa2200002  sb          $zero, 0x2($s1)
    ctx->pc = 0x1512a0u;
    WRITE8(ADD32(GPR_U32(ctx, 17), 2), (uint8_t)GPR_U32(ctx, 0));
    // 0x1512a4: 0xae230010  sw          $v1, 0x10($s1)
    ctx->pc = 0x1512a4u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 16), GPR_U32(ctx, 3));
    // 0x1512a8: 0xae200084  sw          $zero, 0x84($s1)
    ctx->pc = 0x1512a8u;
    WRITE32(ADD32(GPR_U32(ctx, 17), 132), GPR_U32(ctx, 0));
    // 0x1512ac: 0x93a300af  lbu         $v1, 0xAF($sp)
    ctx->pc = 0x1512acu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 175)));
    // 0x1512b0: 0x3063000c  andi        $v1, $v1, 0xC
    ctx->pc = 0x1512b0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)12);
    // 0x1512b4: 0x31883  sra         $v1, $v1, 2
    ctx->pc = 0x1512b4u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 3), 2));
    // 0x1512b8: 0x10620013  beq         $v1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1512B8u;
    {
        const bool branch_taken_0x1512b8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        ctx->pc = 0x1512BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1512B8u;
        // 0x1512bc: 0x2630000c  addiu       $s0, $s1, 0xC (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 17), 12));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1512b8) {
            ctx->pc = 0x151308u;
            goto label_151308;
        }
    }
    ctx->pc = 0x1512C0u;
    // 0x1512c0: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x1512c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x1512c4: 0x1062000c  beq         $v1, $v0, . + 4 + (0xC << 2)
    ctx->pc = 0x1512C4u;
    {
        const bool branch_taken_0x1512c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1512c4) {
            ctx->pc = 0x1512F8u;
            goto label_1512f8;
        }
    }
    ctx->pc = 0x1512CCu;
    // 0x1512cc: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1512ccu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x1512d0: 0x10620007  beq         $v1, $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x1512D0u;
    {
        const bool branch_taken_0x1512d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 2));
        if (branch_taken_0x1512d0) {
            ctx->pc = 0x1512F0u;
            goto label_1512f0;
        }
    }
    ctx->pc = 0x1512D8u;
    // 0x1512d8: 0x10600003  beqz        $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1512D8u;
    {
        const bool branch_taken_0x1512d8 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1512d8) {
            ctx->pc = 0x1512E8u;
            goto label_1512e8;
        }
    }
    ctx->pc = 0x1512E0u;
    // 0x1512e0: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x1512E0u;
    {
        const bool branch_taken_0x1512e0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1512e0) {
            ctx->pc = 0x151310u;
            goto label_151310;
        }
    }
    ctx->pc = 0x1512E8u;
label_1512e8:
    // 0x1512e8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x1512E8u;
    {
        const bool branch_taken_0x1512e8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1512ECu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1512E8u;
        // 0x1512ec: 0xae000078  sw          $zero, 0x78($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1512e8) {
            ctx->pc = 0x151310u;
            goto label_151310;
        }
    }
    ctx->pc = 0x1512F0u;
label_1512f0:
    // 0x1512f0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1512F0u;
    {
        const bool branch_taken_0x1512f0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1512F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1512F0u;
        // 0x1512f4: 0xae000078  sw          $zero, 0x78($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1512f0) {
            ctx->pc = 0x151310u;
            goto label_151310;
        }
    }
    ctx->pc = 0x1512F8u;
label_1512f8:
    // 0x1512f8: 0x24022000  addiu       $v0, $zero, 0x2000
    ctx->pc = 0x1512f8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    // 0x1512fc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1512FCu;
    {
        const bool branch_taken_0x1512fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151300u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1512FCu;
        // 0x151300: 0xae020078  sw          $v0, 0x78($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1512fc) {
            ctx->pc = 0x151310u;
            goto label_151310;
        }
    }
    ctx->pc = 0x151304u;
    // 0x151304: 0x0  nop
    ctx->pc = 0x151304u;
    // NOP
label_151308:
    // 0x151308: 0xae000078  sw          $zero, 0x78($s0)
    ctx->pc = 0x151308u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 120), GPR_U32(ctx, 0));
    // 0x15130c: 0x0  nop
    ctx->pc = 0x15130cu;
    // NOP
label_151310:
    // 0x151310: 0xa6000086  sh          $zero, 0x86($s0)
    ctx->pc = 0x151310u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 134), (uint16_t)GPR_U32(ctx, 0));
    // 0x151314: 0xa6000086  sh          $zero, 0x86($s0)
    ctx->pc = 0x151314u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 134), (uint16_t)GPR_U32(ctx, 0));
    // 0x151318: 0x93a200ae  lbu         $v0, 0xAE($sp)
    ctx->pc = 0x151318u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 174)));
    // 0x15131c: 0x30420080  andi        $v0, $v0, 0x80
    ctx->pc = 0x15131cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)128);
    // 0x151320: 0x10400005  beqz        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x151320u;
    {
        const bool branch_taken_0x151320 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x151320) {
            ctx->pc = 0x151338u;
            goto label_151338;
        }
    }
    ctx->pc = 0x151328u;
    // 0x151328: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x151328u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x15132c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x15132Cu;
    {
        const bool branch_taken_0x15132c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151330u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15132Cu;
        // 0x151330: 0xae02007c  sw          $v0, 0x7C($s0) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15132c) {
            ctx->pc = 0x151340u;
            goto label_151340;
        }
    }
    ctx->pc = 0x151334u;
    // 0x151334: 0x0  nop
    ctx->pc = 0x151334u;
    // NOP
label_151338:
    // 0x151338: 0xae00007c  sw          $zero, 0x7C($s0)
    ctx->pc = 0x151338u;
    WRITE32(ADD32(GPR_U32(ctx, 16), 124), GPR_U32(ctx, 0));
    // 0x15133c: 0x0  nop
    ctx->pc = 0x15133cu;
    // NOP
label_151340:
    // 0x151340: 0x93a200b0  lbu         $v0, 0xB0($sp)
    ctx->pc = 0x151340u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 176)));
    // 0x151344: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x151344u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x151348: 0xa202008a  sb          $v0, 0x8A($s0)
    ctx->pc = 0x151348u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 138), (uint8_t)GPR_U32(ctx, 2));
    // 0x15134c: 0x93a200af  lbu         $v0, 0xAF($sp)
    ctx->pc = 0x15134cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 175)));
    // 0x151350: 0x30420002  andi        $v0, $v0, 0x2
    ctx->pc = 0x151350u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)2);
    // 0x151354: 0x10400018  beqz        $v0, . + 4 + (0x18 << 2)
    ctx->pc = 0x151354u;
    {
        const bool branch_taken_0x151354 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x151354) {
            ctx->pc = 0x1513B8u;
            goto label_1513b8;
        }
    }
    ctx->pc = 0x15135Cu;
    // 0x15135c: 0x93a500b1  lbu         $a1, 0xB1($sp)
    ctx->pc = 0x15135cu;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 177)));
    // 0x151360: 0xc054bc8  jal         func_152F20
    ctx->pc = 0x151360u;
    SET_GPR_U32(ctx, 31, 0x151368u);
    ctx->pc = 0x151364u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151360u;
    // 0x151364: 0x27a40080  addiu       $a0, $sp, 0x80 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
    ctx->in_delay_slot = false;
    ctx->pc = 0x152F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x152F20u, 0x151360u, 0x151368u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151368u;
label_151368:
    // 0x151368: 0x93a4008c  lbu         $a0, 0x8C($sp)
    ctx->pc = 0x151368u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 140)));
    // 0x15136c: 0x262700a4  addiu       $a3, $s1, 0xA4
    ctx->pc = 0x15136cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 164));
    // 0x151370: 0x87a30082  lh          $v1, 0x82($sp)
    ctx->pc = 0x151370u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 130)));
    // 0x151374: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x151374u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x151378: 0x87a20084  lh          $v0, 0x84($sp)
    ctx->pc = 0x151378u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 132)));
    // 0x15137c: 0x27a600c8  addiu       $a2, $sp, 0xC8
    ctx->pc = 0x15137cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x151380: 0xa3a400d0  sb          $a0, 0xD0($sp)
    ctx->pc = 0x151380u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 208), (uint8_t)GPR_U32(ctx, 4));
    // 0x151384: 0x93a400ac  lbu         $a0, 0xAC($sp)
    ctx->pc = 0x151384u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x151388: 0xa7a300d2  sh          $v1, 0xD2($sp)
    ctx->pc = 0x151388u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 210), (uint16_t)GPR_U32(ctx, 3));
    // 0x15138c: 0xa7a200d4  sh          $v0, 0xD4($sp)
    ctx->pc = 0x15138cu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 212), (uint16_t)GPR_U32(ctx, 2));
    // 0x151390: 0x87a300a2  lh          $v1, 0xA2($sp)
    ctx->pc = 0x151390u;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 162)));
    // 0x151394: 0x87a200a4  lh          $v0, 0xA4($sp)
    ctx->pc = 0x151394u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x151398: 0xa3a400c8  sb          $a0, 0xC8($sp)
    ctx->pc = 0x151398u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 200), (uint8_t)GPR_U32(ctx, 4));
    // 0x15139c: 0x97a40080  lhu         $a0, 0x80($sp)
    ctx->pc = 0x15139cu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 128)));
    // 0x1513a0: 0xa7a300ca  sh          $v1, 0xCA($sp)
    ctx->pc = 0x1513a0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 202), (uint16_t)GPR_U32(ctx, 3));
    // 0x1513a4: 0xc0543c8  jal         func_150F20
    ctx->pc = 0x1513A4u;
    SET_GPR_U32(ctx, 31, 0x1513ACu);
    ctx->pc = 0x1513A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1513A4u;
    // 0x1513a8: 0xa7a200cc  sh          $v0, 0xCC($sp) (Delay Slot)
    WRITE16(ADD32(GPR_U32(ctx, 29), 204), (uint16_t)GPR_U32(ctx, 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150F20u, 0x1513A4u, 0x1513ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1513ACu;
label_1513ac:
    // 0x1513ac: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x1513ACu;
    {
        const bool branch_taken_0x1513ac = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x1513ac) {
            ctx->pc = 0x1513F0u;
            goto label_1513f0;
        }
    }
    ctx->pc = 0x1513B4u;
    // 0x1513b4: 0x0  nop
    ctx->pc = 0x1513b4u;
    // NOP
label_1513b8:
    // 0x1513b8: 0x93a400ac  lbu         $a0, 0xAC($sp)
    ctx->pc = 0x1513b8u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 172)));
    // 0x1513bc: 0x87a300a2  lh          $v1, 0xA2($sp)
    ctx->pc = 0x1513bcu;
    SET_GPR_S32(ctx, 3, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 162)));
    // 0x1513c0: 0x27a500d0  addiu       $a1, $sp, 0xD0
    ctx->pc = 0x1513c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 208));
    // 0x1513c4: 0x87a200a4  lh          $v0, 0xA4($sp)
    ctx->pc = 0x1513c4u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 164)));
    // 0x1513c8: 0x27a600c8  addiu       $a2, $sp, 0xC8
    ctx->pc = 0x1513c8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 200));
    // 0x1513cc: 0xa3a000c8  sb          $zero, 0xC8($sp)
    ctx->pc = 0x1513ccu;
    WRITE8(ADD32(GPR_U32(ctx, 29), 200), (uint8_t)GPR_U32(ctx, 0));
    // 0x1513d0: 0xa7a000ca  sh          $zero, 0xCA($sp)
    ctx->pc = 0x1513d0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 202), (uint16_t)GPR_U32(ctx, 0));
    // 0x1513d4: 0xa7a000cc  sh          $zero, 0xCC($sp)
    ctx->pc = 0x1513d4u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 204), (uint16_t)GPR_U32(ctx, 0));
    // 0x1513d8: 0xa3a400d0  sb          $a0, 0xD0($sp)
    ctx->pc = 0x1513d8u;
    WRITE8(ADD32(GPR_U32(ctx, 29), 208), (uint8_t)GPR_U32(ctx, 4));
    // 0x1513dc: 0xa7a300d2  sh          $v1, 0xD2($sp)
    ctx->pc = 0x1513dcu;
    WRITE16(ADD32(GPR_U32(ctx, 29), 210), (uint16_t)GPR_U32(ctx, 3));
    // 0x1513e0: 0xa7a200d4  sh          $v0, 0xD4($sp)
    ctx->pc = 0x1513e0u;
    WRITE16(ADD32(GPR_U32(ctx, 29), 212), (uint16_t)GPR_U32(ctx, 2));
    // 0x1513e4: 0x92240003  lbu         $a0, 0x3($s1)
    ctx->pc = 0x1513e4u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 17), 3)));
    // 0x1513e8: 0xc0543c8  jal         func_150F20
    ctx->pc = 0x1513E8u;
    SET_GPR_U32(ctx, 31, 0x1513F0u);
    ctx->pc = 0x1513ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1513E8u;
    // 0x1513ec: 0x262700a4  addiu       $a3, $s1, 0xA4 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 17), 164));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150F20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150F20u, 0x1513E8u, 0x1513F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1513F0u;
label_1513f0:
    // 0x1513f0: 0x93a200af  lbu         $v0, 0xAF($sp)
    ctx->pc = 0x1513f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 175)));
    // 0x1513f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1513f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1513f8: 0x10400047  beqz        $v0, . + 4 + (0x47 << 2)
    ctx->pc = 0x1513F8u;
    {
        const bool branch_taken_0x1513f8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x1513f8) {
            ctx->pc = 0x151518u;
            goto label_151518;
        }
    }
    ctx->pc = 0x151400u;
    // 0x151400: 0x97a500a6  lhu         $a1, 0xA6($sp)
    ctx->pc = 0x151400u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 166)));
    // 0x151404: 0xc054c30  jal         func_1530C0
    ctx->pc = 0x151404u;
    SET_GPR_U32(ctx, 31, 0x15140Cu);
    ctx->pc = 0x151408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151404u;
    // 0x151408: 0x27a40060  addiu       $a0, $sp, 0x60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1530C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1530C0u, 0x151404u, 0x15140Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15140Cu;
label_15140c:
    // 0x15140c: 0x97a30060  lhu         $v1, 0x60($sp)
    ctx->pc = 0x15140cu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x151410: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x151410u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x151414: 0xa6030082  sh          $v1, 0x82($s0)
    ctx->pc = 0x151414u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 130), (uint16_t)GPR_U32(ctx, 3));
    // 0x151418: 0x97a30062  lhu         $v1, 0x62($sp)
    ctx->pc = 0x151418u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 98)));
    // 0x15141c: 0xa6030084  sh          $v1, 0x84($s0)
    ctx->pc = 0x15141cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 132), (uint16_t)GPR_U32(ctx, 3));
    // 0x151420: 0xa202008b  sb          $v0, 0x8B($s0)
    ctx->pc = 0x151420u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 139), (uint8_t)GPR_U32(ctx, 2));
    // 0x151424: 0xa6000080  sh          $zero, 0x80($s0)
    ctx->pc = 0x151424u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 128), (uint16_t)GPR_U32(ctx, 0));
    // 0x151428: 0x97a40060  lhu         $a0, 0x60($sp)
    ctx->pc = 0x151428u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 96)));
    // 0x15142c: 0x4800004  bltz        $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x15142Cu;
    {
        const bool branch_taken_0x15142c = (GPR_S32(ctx, 4) < 0);
        ctx->pc = 0x151430u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15142Cu;
        // 0x151430: 0x97a50062  lhu         $a1, 0x62($sp) (Delay Slot)
        SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 98)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15142c) {
            ctx->pc = 0x151440u;
            goto label_151440;
        }
    }
    ctx->pc = 0x151434u;
    // 0x151434: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x151434u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151438: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x151438u;
    {
        const bool branch_taken_0x151438 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15143Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151438u;
        // 0x15143c: 0x468003a0  cvt.s.w     $f14, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151438) {
            ctx->pc = 0x15145Cu;
            goto label_15145c;
        }
    }
    ctx->pc = 0x151440u;
label_151440:
    // 0x151440: 0x41842  srl         $v1, $a0, 1
    ctx->pc = 0x151440u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
    // 0x151444: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x151444u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x151448: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x151448u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15144c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15144cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151450: 0x0  nop
    ctx->pc = 0x151450u;
    // NOP
    // 0x151454: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x151454u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x151458: 0x460e7380  add.s       $f14, $f14, $f14
    ctx->pc = 0x151458u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[14]);
label_15145c:
    // 0x15145c: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x15145Cu;
    {
        const bool branch_taken_0x15145c = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x15145c) {
            ctx->pc = 0x151460u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15145Cu;
            // 0x151460: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151470u;
            goto label_151470;
        }
    }
    ctx->pc = 0x151464u;
    // 0x151464: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x151464u;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151468: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x151468u;
    {
        const bool branch_taken_0x151468 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15146Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151468u;
        // 0x15146c: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151468) {
            ctx->pc = 0x151488u;
            goto label_151488;
        }
    }
    ctx->pc = 0x151470u;
label_151470:
    // 0x151470: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x151470u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x151474: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x151474u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x151478: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x151478u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15147c: 0x0  nop
    ctx->pc = 0x15147cu;
    // NOP
    // 0x151480: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x151480u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x151484: 0x460f7bc0  add.s       $f15, $f15, $f15
    ctx->pc = 0x151484u;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[15]);
label_151488:
    // 0x151488: 0x4820004  bltzl       $a0, . + 4 + (0x4 << 2)
    ctx->pc = 0x151488u;
    {
        const bool branch_taken_0x151488 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x151488) {
            ctx->pc = 0x15148Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151488u;
            // 0x15148c: 0x41842  srl         $v1, $a0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 4), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x15149Cu;
            goto label_15149c;
        }
    }
    ctx->pc = 0x151490u;
    // 0x151490: 0x44840000  mtc1        $a0, $f0
    ctx->pc = 0x151490u;
    { uint32_t bits = GPR_U32(ctx, 4); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151494: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x151494u;
    {
        const bool branch_taken_0x151494 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151498u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151494u;
        // 0x151498: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x151494) {
            ctx->pc = 0x1514B4u;
            goto label_1514b4;
        }
    }
    ctx->pc = 0x15149Cu;
label_15149c:
    // 0x15149c: 0x30820001  andi        $v0, $a0, 0x1
    ctx->pc = 0x15149cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)1);
    // 0x1514a0: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1514a0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1514a4: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1514a4u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1514a8: 0x0  nop
    ctx->pc = 0x1514a8u;
    // NOP
    // 0x1514ac: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x1514acu;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x1514b0: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x1514b0u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_1514b4:
    // 0x1514b4: 0x4a20004  bltzl       $a1, . + 4 + (0x4 << 2)
    ctx->pc = 0x1514B4u;
    {
        const bool branch_taken_0x1514b4 = (GPR_S32(ctx, 5) < 0);
        if (branch_taken_0x1514b4) {
            ctx->pc = 0x1514B8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1514B4u;
            // 0x1514b8: 0x51842  srl         $v1, $a1, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 5), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1514C8u;
            goto label_1514c8;
        }
    }
    ctx->pc = 0x1514BCu;
    // 0x1514bc: 0x44850000  mtc1        $a1, $f0
    ctx->pc = 0x1514bcu;
    { uint32_t bits = GPR_U32(ctx, 5); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1514c0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1514C0u;
    {
        const bool branch_taken_0x1514c0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1514C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1514C0u;
        // 0x1514c4: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1514c0) {
            ctx->pc = 0x1514E0u;
            goto label_1514e0;
        }
    }
    ctx->pc = 0x1514C8u;
label_1514c8:
    // 0x1514c8: 0x30a20001  andi        $v0, $a1, 0x1
    ctx->pc = 0x1514c8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 5) & (uint64_t)(uint16_t)1);
    // 0x1514cc: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1514ccu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1514d0: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1514d0u;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1514d4: 0x0  nop
    ctx->pc = 0x1514d4u;
    // NOP
    // 0x1514d8: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x1514d8u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x1514dc: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x1514dcu;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_1514e0:
    // 0x1514e0: 0x44806000  mtc1        $zero, $f12
    ctx->pc = 0x1514e0u;
    { uint32_t bits = GPR_U32(ctx, 0); std::memcpy(&ctx->f[12], &bits, sizeof(bits)); }
    // 0x1514e4: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x1514e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x1514e8: 0xc05439c  jal         func_150E70
    ctx->pc = 0x1514E8u;
    SET_GPR_U32(ctx, 31, 0x1514F0u);
    ctx->pc = 0x1514ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1514E8u;
    // 0x1514ec: 0x46006346  mov.s       $f13, $f12 (Delay Slot)
    ctx->f[13] = FPU_MOV_S(ctx->f[12]);
    ctx->in_delay_slot = false;
    ctx->pc = 0x150E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150E70u, 0x1514E8u, 0x1514F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1514F0u;
label_1514f0:
    // 0x1514f0: 0x93a900ad  lbu         $t1, 0xAD($sp)
    ctx->pc = 0x1514f0u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 173)));
    // 0x1514f4: 0x8fa50064  lw          $a1, 0x64($sp)
    ctx->pc = 0x1514f4u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 100)));
    // 0x1514f8: 0x8fa60068  lw          $a2, 0x68($sp)
    ctx->pc = 0x1514f8u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 104)));
    // 0x1514fc: 0x8fa7006c  lw          $a3, 0x6C($sp)
    ctx->pc = 0x1514fcu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 108)));
    // 0x151500: 0x8fa80070  lw          $t0, 0x70($sp)
    ctx->pc = 0x151500u;
    SET_GPR_S32(ctx, 8, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 112)));
    // 0x151504: 0xc0543b8  jal         func_150EE0
    ctx->pc = 0x151504u;
    SET_GPR_U32(ctx, 31, 0x15150Cu);
    ctx->pc = 0x151508u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151504u;
    // 0x151508: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150EE0u, 0x151504u, 0x15150Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15150Cu;
label_15150c:
    // 0x15150c: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x15150Cu;
    {
        const bool branch_taken_0x15150c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x15150c) {
            ctx->pc = 0x151698u;
            goto label_151698;
        }
    }
    ctx->pc = 0x151514u;
    // 0x151514: 0x0  nop
    ctx->pc = 0x151514u;
    // NOP
label_151518:
    // 0x151518: 0x97a500a6  lhu         $a1, 0xA6($sp)
    ctx->pc = 0x151518u;
    SET_GPR_U32(ctx, 5, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 166)));
    // 0x15151c: 0xc054c54  jal         func_153150
    ctx->pc = 0x15151Cu;
    SET_GPR_U32(ctx, 31, 0x151524u);
    ctx->pc = 0x151520u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15151Cu;
    // 0x151520: 0x27a400b8  addiu       $a0, $sp, 0xB8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x153150u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x153150u, 0x15151Cu, 0x151524u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151524u;
label_151524:
    // 0x151524: 0x87a500b8  lh          $a1, 0xB8($sp)
    ctx->pc = 0x151524u;
    SET_GPR_S32(ctx, 5, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x151528: 0xc054c7c  jal         func_1531F0
    ctx->pc = 0x151528u;
    SET_GPR_U32(ctx, 31, 0x151530u);
    ctx->pc = 0x15152Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x151528u;
    // 0x15152c: 0x27a400dc  addiu       $a0, $sp, 0xDC (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 220));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1531F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1531F0u, 0x151528u, 0x151530u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151530u;
label_151530:
    // 0x151530: 0x97a200be  lhu         $v0, 0xBE($sp)
    ctx->pc = 0x151530u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 190)));
    // 0x151534: 0xa6020082  sh          $v0, 0x82($s0)
    ctx->pc = 0x151534u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 130), (uint16_t)GPR_U32(ctx, 2));
    // 0x151538: 0x97a200c0  lhu         $v0, 0xC0($sp)
    ctx->pc = 0x151538u;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x15153c: 0xa6020084  sh          $v0, 0x84($s0)
    ctx->pc = 0x15153cu;
    WRITE16(ADD32(GPR_U32(ctx, 16), 132), (uint16_t)GPR_U32(ctx, 2));
    // 0x151540: 0xa200008b  sb          $zero, 0x8B($s0)
    ctx->pc = 0x151540u;
    WRITE8(ADD32(GPR_U32(ctx, 16), 139), (uint8_t)GPR_U32(ctx, 0));
    // 0x151544: 0x87a200b8  lh          $v0, 0xB8($sp)
    ctx->pc = 0x151544u;
    SET_GPR_S32(ctx, 2, (int16_t)READ16(ADD32(GPR_U32(ctx, 29), 184)));
    // 0x151548: 0xa6020080  sh          $v0, 0x80($s0)
    ctx->pc = 0x151548u;
    WRITE16(ADD32(GPR_U32(ctx, 16), 128), (uint16_t)GPR_U32(ctx, 2));
    // 0x15154c: 0x97a200ba  lhu         $v0, 0xBA($sp)
    ctx->pc = 0x15154cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 186)));
    // 0x151550: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x151550u;
    {
        const bool branch_taken_0x151550 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x151550) {
            ctx->pc = 0x151554u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151550u;
            // 0x151554: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151564u;
            goto label_151564;
        }
    }
    ctx->pc = 0x151558u;
    // 0x151558: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151558u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15155c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15155Cu;
    {
        const bool branch_taken_0x15155c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15155Cu;
        // 0x151560: 0x46800320  cvt.s.w     $f12, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15155c) {
            ctx->pc = 0x15157Cu;
            goto label_15157c;
        }
    }
    ctx->pc = 0x151564u;
label_151564:
    // 0x151564: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x151564u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x151568: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x151568u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15156c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15156cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151570: 0x0  nop
    ctx->pc = 0x151570u;
    // NOP
    // 0x151574: 0x46800320  cvt.s.w     $f12, $f0
    ctx->pc = 0x151574u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[12] = FPU_CVT_S_W(tmp); }
    // 0x151578: 0x460c6300  add.s       $f12, $f12, $f12
    ctx->pc = 0x151578u;
    ctx->f[12] = FPU_ADD_S(ctx->f[12], ctx->f[12]);
label_15157c:
    // 0x15157c: 0x97a200bc  lhu         $v0, 0xBC($sp)
    ctx->pc = 0x15157cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 188)));
    // 0x151580: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x151580u;
    {
        const bool branch_taken_0x151580 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x151580) {
            ctx->pc = 0x151584u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151580u;
            // 0x151584: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151594u;
            goto label_151594;
        }
    }
    ctx->pc = 0x151588u;
    // 0x151588: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151588u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15158c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15158Cu;
    {
        const bool branch_taken_0x15158c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15158Cu;
        // 0x151590: 0x46800360  cvt.s.w     $f13, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15158c) {
            ctx->pc = 0x1515ACu;
            goto label_1515ac;
        }
    }
    ctx->pc = 0x151594u;
label_151594:
    // 0x151594: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x151594u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x151598: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x151598u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15159c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15159cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1515a0: 0x0  nop
    ctx->pc = 0x1515a0u;
    // NOP
    // 0x1515a4: 0x46800360  cvt.s.w     $f13, $f0
    ctx->pc = 0x1515a4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[13] = FPU_CVT_S_W(tmp); }
    // 0x1515a8: 0x460d6b40  add.s       $f13, $f13, $f13
    ctx->pc = 0x1515a8u;
    ctx->f[13] = FPU_ADD_S(ctx->f[13], ctx->f[13]);
label_1515ac:
    // 0x1515ac: 0x97a200be  lhu         $v0, 0xBE($sp)
    ctx->pc = 0x1515acu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 190)));
    // 0x1515b0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1515B0u;
    {
        const bool branch_taken_0x1515b0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1515b0) {
            ctx->pc = 0x1515B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1515B0u;
            // 0x1515b4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1515C4u;
            goto label_1515c4;
        }
    }
    ctx->pc = 0x1515B8u;
    // 0x1515b8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1515b8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1515bc: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1515BCu;
    {
        const bool branch_taken_0x1515bc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1515C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1515BCu;
        // 0x1515c0: 0x468003a0  cvt.s.w     $f14, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1515bc) {
            ctx->pc = 0x1515DCu;
            goto label_1515dc;
        }
    }
    ctx->pc = 0x1515C4u;
label_1515c4:
    // 0x1515c4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1515c4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1515c8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1515c8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1515cc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1515ccu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1515d0: 0x0  nop
    ctx->pc = 0x1515d0u;
    // NOP
    // 0x1515d4: 0x468003a0  cvt.s.w     $f14, $f0
    ctx->pc = 0x1515d4u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[14] = FPU_CVT_S_W(tmp); }
    // 0x1515d8: 0x460e7380  add.s       $f14, $f14, $f14
    ctx->pc = 0x1515d8u;
    ctx->f[14] = FPU_ADD_S(ctx->f[14], ctx->f[14]);
label_1515dc:
    // 0x1515dc: 0x97a200c0  lhu         $v0, 0xC0($sp)
    ctx->pc = 0x1515dcu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 192)));
    // 0x1515e0: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1515E0u;
    {
        const bool branch_taken_0x1515e0 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x1515e0) {
            ctx->pc = 0x1515E4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1515E0u;
            // 0x1515e4: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1515F4u;
            goto label_1515f4;
        }
    }
    ctx->pc = 0x1515E8u;
    // 0x1515e8: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x1515e8u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x1515ec: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x1515ECu;
    {
        const bool branch_taken_0x1515ec = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1515F0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1515ECu;
        // 0x1515f0: 0x468003e0  cvt.s.w     $f15, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x1515ec) {
            ctx->pc = 0x15160Cu;
            goto label_15160c;
        }
    }
    ctx->pc = 0x1515F4u;
label_1515f4:
    // 0x1515f4: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x1515f4u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x1515f8: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x1515f8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x1515fc: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x1515fcu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151600: 0x0  nop
    ctx->pc = 0x151600u;
    // NOP
    // 0x151604: 0x468003e0  cvt.s.w     $f15, $f0
    ctx->pc = 0x151604u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[15] = FPU_CVT_S_W(tmp); }
    // 0x151608: 0x460f7bc0  add.s       $f15, $f15, $f15
    ctx->pc = 0x151608u;
    ctx->f[15] = FPU_ADD_S(ctx->f[15], ctx->f[15]);
label_15160c:
    // 0x15160c: 0x97a200dc  lhu         $v0, 0xDC($sp)
    ctx->pc = 0x15160cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 220)));
    // 0x151610: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x151610u;
    {
        const bool branch_taken_0x151610 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x151610) {
            ctx->pc = 0x151614u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151610u;
            // 0x151614: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151624u;
            goto label_151624;
        }
    }
    ctx->pc = 0x151618u;
    // 0x151618: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151618u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15161c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15161Cu;
    {
        const bool branch_taken_0x15161c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151620u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15161Cu;
        // 0x151620: 0x46800420  cvt.s.w     $f16, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15161c) {
            ctx->pc = 0x15163Cu;
            goto label_15163c;
        }
    }
    ctx->pc = 0x151624u;
label_151624:
    // 0x151624: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x151624u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x151628: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x151628u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15162c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15162cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151630: 0x0  nop
    ctx->pc = 0x151630u;
    // NOP
    // 0x151634: 0x46800420  cvt.s.w     $f16, $f0
    ctx->pc = 0x151634u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[16] = FPU_CVT_S_W(tmp); }
    // 0x151638: 0x46108400  add.s       $f16, $f16, $f16
    ctx->pc = 0x151638u;
    ctx->f[16] = FPU_ADD_S(ctx->f[16], ctx->f[16]);
label_15163c:
    // 0x15163c: 0x97a200de  lhu         $v0, 0xDE($sp)
    ctx->pc = 0x15163cu;
    SET_GPR_U32(ctx, 2, (uint16_t)READ16(ADD32(GPR_U32(ctx, 29), 222)));
    // 0x151640: 0x4420004  bltzl       $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x151640u;
    {
        const bool branch_taken_0x151640 = (GPR_S32(ctx, 2) < 0);
        if (branch_taken_0x151640) {
            ctx->pc = 0x151644u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151640u;
            // 0x151644: 0x21842  srl         $v1, $v0, 1 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 2), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151654u;
            goto label_151654;
        }
    }
    ctx->pc = 0x151648u;
    // 0x151648: 0x44820000  mtc1        $v0, $f0
    ctx->pc = 0x151648u;
    { uint32_t bits = GPR_U32(ctx, 2); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x15164c: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x15164Cu;
    {
        const bool branch_taken_0x15164c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151650u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15164Cu;
        // 0x151650: 0x46800460  cvt.s.w     $f17, $f0 (Delay Slot)
        { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
        ctx->in_delay_slot = false;
        if (branch_taken_0x15164c) {
            ctx->pc = 0x15166Cu;
            goto label_15166c;
        }
    }
    ctx->pc = 0x151654u;
label_151654:
    // 0x151654: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x151654u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x151658: 0x621825  or          $v1, $v1, $v0
    ctx->pc = 0x151658u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 2));
    // 0x15165c: 0x44830000  mtc1        $v1, $f0
    ctx->pc = 0x15165cu;
    { uint32_t bits = GPR_U32(ctx, 3); std::memcpy(&ctx->f[0], &bits, sizeof(bits)); }
    // 0x151660: 0x0  nop
    ctx->pc = 0x151660u;
    // NOP
    // 0x151664: 0x46800460  cvt.s.w     $f17, $f0
    ctx->pc = 0x151664u;
    { int32_t tmp; std::memcpy(&tmp, &ctx->f[0], sizeof(tmp)); ctx->f[17] = FPU_CVT_S_W(tmp); }
    // 0x151668: 0x46118c40  add.s       $f17, $f17, $f17
    ctx->pc = 0x151668u;
    ctx->f[17] = FPU_ADD_S(ctx->f[17], ctx->f[17]);
label_15166c:
    // 0x15166c: 0xc05439c  jal         func_150E70
    ctx->pc = 0x15166Cu;
    SET_GPR_U32(ctx, 31, 0x151674u);
    ctx->pc = 0x151670u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15166Cu;
    // 0x151670: 0x26040008  addiu       $a0, $s0, 0x8 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150E70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150E70u, 0x15166Cu, 0x151674u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151674u;
label_151674:
    // 0x151674: 0x3c0200ff  lui         $v0, 0xFF
    ctx->pc = 0x151674u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)255 << 16));
    // 0x151678: 0x93a900ad  lbu         $t1, 0xAD($sp)
    ctx->pc = 0x151678u;
    SET_GPR_U32(ctx, 9, (uint8_t)READ8(ADD32(GPR_U32(ctx, 29), 173)));
    // 0x15167c: 0x3445ffff  ori         $a1, $v0, 0xFFFF
    ctx->pc = 0x15167cu;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) | (uint64_t)(uint16_t)65535);
    // 0x151680: 0x26040008  addiu       $a0, $s0, 0x8
    ctx->pc = 0x151680u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 8));
    // 0x151684: 0xa0302d  daddu       $a2, $a1, $zero
    ctx->pc = 0x151684u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x151688: 0xa0382d  daddu       $a3, $a1, $zero
    ctx->pc = 0x151688u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x15168c: 0xc0543b8  jal         func_150EE0
    ctx->pc = 0x15168Cu;
    SET_GPR_U32(ctx, 31, 0x151694u);
    ctx->pc = 0x151690u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15168Cu;
    // 0x151690: 0xa0402d  daddu       $t0, $a1, $zero (Delay Slot)
    SET_GPR_U64(ctx, 8, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x150EE0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x150EE0u, 0x15168Cu, 0x151694u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151694u;
label_151694:
    // 0x151694: 0x0  nop
    ctx->pc = 0x151694u;
    // NOP
label_151698:
    // 0x151698: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x151698u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x15169c: 0x272182a  slt         $v1, $s3, $s2
    ctx->pc = 0x15169cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)GPR_S64(ctx, 18)) ? 1 : 0);
    // 0x1516a0: 0x5460fea8  bnel        $v1, $zero, . + 4 + (-0x158 << 2)
    ctx->pc = 0x1516A0u;
    {
        const bool branch_taken_0x1516a0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1516a0) {
            ctx->pc = 0x1516A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1516A0u;
            // 0x1516a4: 0x27a400a0  addiu       $a0, $sp, 0xA0 (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 29), 160));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151144u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_151144;
        }
    }
    ctx->pc = 0x1516A8u;
label_1516a8:
    // 0x1516a8: 0xdfbf0050  ld          $ra, 0x50($sp)
    ctx->pc = 0x1516a8u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 80)));
    // 0x1516ac: 0x7bb40040  lq          $s4, 0x40($sp)
    ctx->pc = 0x1516acu;
    SET_GPR_VEC(ctx, 20, READ128(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x1516b0: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x1516b0u;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x1516b4: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x1516b4u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1516b8: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x1516b8u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1516bc: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x1516bcu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1516c0: 0x3e00008  jr          $ra
    ctx->pc = 0x1516C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1516C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1516C0u;
        // 0x1516c4: 0x27bd00e0  addiu       $sp, $sp, 0xE0 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 224));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1516C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1516C8u;
    // 0x1516c8: 0x0  nop
    ctx->pc = 0x1516c8u;
    // NOP
    // 0x1516cc: 0x0  nop
    ctx->pc = 0x1516ccu;
    // NOP
    // 0x1516d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x1516d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x1516d4: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x1516d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x1516d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x1516d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x1516dc: 0x9463f348  lhu         $v1, -0xCB8($v1)
    ctx->pc = 0x1516dcu;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294964040)));
    // 0x1516e0: 0x30630002  andi        $v1, $v1, 0x2
    ctx->pc = 0x1516e0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)2);
    // 0x1516e4: 0x5460004c  bnel        $v1, $zero, . + 4 + (0x4C << 2)
    ctx->pc = 0x1516E4u;
    {
        const bool branch_taken_0x1516e4 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x1516e4) {
            ctx->pc = 0x1516E8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1516E4u;
            // 0x1516e8: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151818u;
            goto label_151818;
        }
    }
    ctx->pc = 0x1516ECu;
    // 0x1516ec: 0x8c820010  lw          $v0, 0x10($a0)
    ctx->pc = 0x1516ecu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 16)));
    // 0x1516f0: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x1516f0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x1516f4: 0x8064f340  lb          $a0, -0xCC0($v1)
    ctx->pc = 0x1516f4u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294964032)));
    // 0x1516f8: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1516f8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1516fc: 0x5483001e  bnel        $a0, $v1, . + 4 + (0x1E << 2)
    ctx->pc = 0x1516FCu;
    {
        const bool branch_taken_0x1516fc = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1516fc) {
            ctx->pc = 0x151700u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1516FCu;
            // 0x151700: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151778u;
            goto label_151778;
        }
    }
    ctx->pc = 0x151704u;
    // 0x151704: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x151704u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151708: 0x24030035  addiu       $v1, $zero, 0x35
    ctx->pc = 0x151708u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x15170c: 0x54830006  bnel        $a0, $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x15170Cu;
    {
        const bool branch_taken_0x15170c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x15170c) {
            ctx->pc = 0x151710u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15170Cu;
            // 0x151710: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151728u;
            goto label_151728;
        }
    }
    ctx->pc = 0x151714u;
    // 0x151714: 0x24040041  addiu       $a0, $zero, 0x41
    ctx->pc = 0x151714u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x151718: 0x240301b1  addiu       $v1, $zero, 0x1B1
    ctx->pc = 0x151718u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 433));
    // 0x15171c: 0xa44400a4  sh          $a0, 0xA4($v0)
    ctx->pc = 0x15171cu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 164), (uint16_t)GPR_U32(ctx, 4));
    // 0x151720: 0xa44300a6  sh          $v1, 0xA6($v0)
    ctx->pc = 0x151720u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 166), (uint16_t)GPR_U32(ctx, 3));
    // 0x151724: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x151724u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_151728:
    // 0x151728: 0x24030041  addiu       $v1, $zero, 0x41
    ctx->pc = 0x151728u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 65));
    // 0x15172c: 0x54830008  bnel        $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x15172Cu;
    {
        const bool branch_taken_0x15172c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x15172c) {
            ctx->pc = 0x151730u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x15172Cu;
            // 0x151730: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x151750u;
            goto label_151750;
        }
    }
    ctx->pc = 0x151734u;
    // 0x151734: 0x844400a4  lh          $a0, 0xA4($v0)
    ctx->pc = 0x151734u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x151738: 0x24030600  addiu       $v1, $zero, 0x600
    ctx->pc = 0x151738u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1536));
    // 0x15173c: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x15173Cu;
    {
        const bool branch_taken_0x15173c = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x15173c) {
            ctx->pc = 0x15174Cu;
            goto label_15174c;
        }
    }
    ctx->pc = 0x151744u;
    // 0x151744: 0x240305ff  addiu       $v1, $zero, 0x5FF
    ctx->pc = 0x151744u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1535));
    // 0x151748: 0xa44300a4  sh          $v1, 0xA4($v0)
    ctx->pc = 0x151748u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 164), (uint16_t)GPR_U32(ctx, 3));
label_15174c:
    // 0x15174c: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x15174cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_151750:
    // 0x151750: 0x24030042  addiu       $v1, $zero, 0x42
    ctx->pc = 0x151750u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 66));
    // 0x151754: 0x54830029  bnel        $a0, $v1, . + 4 + (0x29 << 2)
    ctx->pc = 0x151754u;
    {
        const bool branch_taken_0x151754 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x151754) {
            ctx->pc = 0x151758u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151754u;
            // 0x151758: 0x90460003  lbu         $a2, 0x3($v0) (Delay Slot)
            SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1517FCu;
            goto label_1517fc;
        }
    }
    ctx->pc = 0x15175Cu;
    // 0x15175c: 0x844400a4  lh          $a0, 0xA4($v0)
    ctx->pc = 0x15175cu;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x151760: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x151760u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x151764: 0x14830024  bne         $a0, $v1, . + 4 + (0x24 << 2)
    ctx->pc = 0x151764u;
    {
        const bool branch_taken_0x151764 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x151764) {
            ctx->pc = 0x1517F8u;
            goto label_1517f8;
        }
    }
    ctx->pc = 0x15176Cu;
    // 0x15176c: 0x240303ff  addiu       $v1, $zero, 0x3FF
    ctx->pc = 0x15176cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x151770: 0x10000021  b           . + 4 + (0x21 << 2)
    ctx->pc = 0x151770u;
    {
        const bool branch_taken_0x151770 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x151774u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151770u;
        // 0x151774: 0xa44300a4  sh          $v1, 0xA4($v0) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 2), 164), (uint16_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x151770) {
            ctx->pc = 0x1517F8u;
            goto label_1517f8;
        }
    }
    ctx->pc = 0x151778u;
label_151778:
    // 0x151778: 0x1483001f  bne         $a0, $v1, . + 4 + (0x1F << 2)
    ctx->pc = 0x151778u;
    {
        const bool branch_taken_0x151778 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x151778) {
            ctx->pc = 0x1517F8u;
            goto label_1517f8;
        }
    }
    ctx->pc = 0x151780u;
    // 0x151780: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x151780u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x151784: 0x24030003  addiu       $v1, $zero, 0x3
    ctx->pc = 0x151784u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x151788: 0x54830008  bnel        $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x151788u;
    {
        const bool branch_taken_0x151788 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x151788) {
            ctx->pc = 0x15178Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x151788u;
            // 0x15178c: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1517ACu;
            goto label_1517ac;
        }
    }
    ctx->pc = 0x151790u;
    // 0x151790: 0x844400a4  lh          $a0, 0xA4($v0)
    ctx->pc = 0x151790u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x151794: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x151794u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x151798: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x151798u;
    {
        const bool branch_taken_0x151798 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x151798) {
            ctx->pc = 0x1517A8u;
            goto label_1517a8;
        }
    }
    ctx->pc = 0x1517A0u;
    // 0x1517a0: 0x240303ff  addiu       $v1, $zero, 0x3FF
    ctx->pc = 0x1517a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1517a4: 0xa44300a4  sh          $v1, 0xA4($v0)
    ctx->pc = 0x1517a4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 164), (uint16_t)GPR_U32(ctx, 3));
label_1517a8:
    // 0x1517a8: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1517a8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1517ac:
    // 0x1517ac: 0x24030004  addiu       $v1, $zero, 0x4
    ctx->pc = 0x1517acu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x1517b0: 0x54830008  bnel        $a0, $v1, . + 4 + (0x8 << 2)
    ctx->pc = 0x1517B0u;
    {
        const bool branch_taken_0x1517b0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1517b0) {
            ctx->pc = 0x1517B4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1517B0u;
            // 0x1517b4: 0x84440000  lh          $a0, 0x0($v0) (Delay Slot)
            SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1517D4u;
            goto label_1517d4;
        }
    }
    ctx->pc = 0x1517B8u;
    // 0x1517b8: 0x844400a4  lh          $a0, 0xA4($v0)
    ctx->pc = 0x1517b8u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1517bc: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x1517bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1517c0: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1517C0u;
    {
        const bool branch_taken_0x1517c0 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1517c0) {
            ctx->pc = 0x1517D0u;
            goto label_1517d0;
        }
    }
    ctx->pc = 0x1517C8u;
    // 0x1517c8: 0x240303ff  addiu       $v1, $zero, 0x3FF
    ctx->pc = 0x1517c8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1517cc: 0xa44300a4  sh          $v1, 0xA4($v0)
    ctx->pc = 0x1517ccu;
    WRITE16(ADD32(GPR_U32(ctx, 2), 164), (uint16_t)GPR_U32(ctx, 3));
label_1517d0:
    // 0x1517d0: 0x84440000  lh          $a0, 0x0($v0)
    ctx->pc = 0x1517d0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 0)));
label_1517d4:
    // 0x1517d4: 0x24030006  addiu       $v1, $zero, 0x6
    ctx->pc = 0x1517d4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x1517d8: 0x14830007  bne         $a0, $v1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1517D8u;
    {
        const bool branch_taken_0x1517d8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1517d8) {
            ctx->pc = 0x1517F8u;
            goto label_1517f8;
        }
    }
    ctx->pc = 0x1517E0u;
    // 0x1517e0: 0x844400a4  lh          $a0, 0xA4($v0)
    ctx->pc = 0x1517e0u;
    SET_GPR_S32(ctx, 4, (int16_t)READ16(ADD32(GPR_U32(ctx, 2), 164)));
    // 0x1517e4: 0x24030400  addiu       $v1, $zero, 0x400
    ctx->pc = 0x1517e4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1024));
    // 0x1517e8: 0x14830003  bne         $a0, $v1, . + 4 + (0x3 << 2)
    ctx->pc = 0x1517E8u;
    {
        const bool branch_taken_0x1517e8 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 3));
        if (branch_taken_0x1517e8) {
            ctx->pc = 0x1517F8u;
            goto label_1517f8;
        }
    }
    ctx->pc = 0x1517F0u;
    // 0x1517f0: 0x240303ff  addiu       $v1, $zero, 0x3FF
    ctx->pc = 0x1517f0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1023));
    // 0x1517f4: 0xa44300a4  sh          $v1, 0xA4($v0)
    ctx->pc = 0x1517f4u;
    WRITE16(ADD32(GPR_U32(ctx, 2), 164), (uint16_t)GPR_U32(ctx, 3));
label_1517f8:
    // 0x1517f8: 0x90460003  lbu         $a2, 0x3($v0)
    ctx->pc = 0x1517f8u;
    SET_GPR_U32(ctx, 6, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 3)));
label_1517fc:
    // 0x1517fc: 0xc44c0004  lwc1        $f12, 0x4($v0)
    ctx->pc = 0x1517fcu;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 4)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[12] = f; }
    // 0x151800: 0xc44d0008  lwc1        $f13, 0x8($v0)
    ctx->pc = 0x151800u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 2), 8)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[13] = f; }
    // 0x151804: 0x244400a4  addiu       $a0, $v0, 0xA4
    ctx->pc = 0x151804u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 164));
    // 0x151808: 0x2445000c  addiu       $a1, $v0, 0xC
    ctx->pc = 0x151808u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 12));
    // 0x15180c: 0xc05472c  jal         func_151CB0
    ctx->pc = 0x15180Cu;
    SET_GPR_U32(ctx, 31, 0x151814u);
    ctx->pc = 0x151810u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x15180Cu;
    // 0x151810: 0x382d  daddu       $a3, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x151CB0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x151CB0u, 0x15180Cu, 0x151814u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x151814u;
label_151814:
    // 0x151814: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x151814u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_151818:
    // 0x151818: 0x3e00008  jr          $ra
    ctx->pc = 0x151818u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x15181Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x151818u;
        // 0x15181c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x151818u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x151820u;
}
