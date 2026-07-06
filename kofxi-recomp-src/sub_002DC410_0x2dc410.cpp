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

// Function: sub_002DC410
// Address: 0x2dc410 - 0x2dc568
void sub_002DC410_0x2dc410(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_002DC410_0x2dc410");
#endif

    switch (ctx->pc) {
        case 0x2dc41cu: goto label_2dc41c;
        case 0x2dc450u: goto label_2dc450;
        case 0x2dc470u: goto label_2dc470;
        case 0x2dc4a4u: goto label_2dc4a4;
        case 0x2dc4d0u: goto label_2dc4d0;
        case 0x2dc510u: goto label_2dc510;
        case 0x2dc524u: goto label_2dc524;
        case 0x2dc54cu: goto label_2dc54c;
        default: break;
    }

    ctx->pc = 0x2dc410u;

    // 0x2dc410: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x2dc410u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x2dc414: 0xffb00010  sd          $s0, 0x10($sp)
    ctx->pc = 0x2dc414u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 16));
    // 0x2dc418: 0x80802d  daddu       $s0, $a0, $zero
    ctx->pc = 0x2dc418u;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
label_2dc41c:
    // 0x2dc41c: 0xffb10018  sd          $s1, 0x18($sp)
    ctx->pc = 0x2dc41cu;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 17));
    // 0x2dc420: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x2dc420u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x2dc424: 0x3c03002e  lui         $v1, 0x2E
    ctx->pc = 0x2dc424u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)46 << 16));
    // 0x2dc428: 0x2463c470  addiu       $v1, $v1, -0x3B90
    ctx->pc = 0x2dc428u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294952048));
    // 0x2dc42c: 0x8c620000  lw          $v0, 0x0($v1)
    ctx->pc = 0x2dc42cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 0)));
    // 0x2dc430: 0x14400007  bnez        $v0, . + 4 + (0x7 << 2)
    ctx->pc = 0x2DC430u;
    {
        const bool branch_taken_0x2dc430 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x2dc430) {
            ctx->pc = 0x2DC450u;
            goto label_2dc450;
        }
    }
    ctx->pc = 0x2DC438u;
    // 0x2dc438: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2dc438u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2dc43c: 0x2484c484  addiu       $a0, $a0, -0x3B7C
    ctx->pc = 0x2dc43cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952068));
    // 0x2dc440: 0x8c670008  lw          $a3, 0x8($v1)
    ctx->pc = 0x2dc440u;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 8)));
    // 0x2dc444: 0x8c65000c  lw          $a1, 0xC($v1)
    ctx->pc = 0x2dc444u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 12)));
    // 0x2dc448: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DC448u;
    SET_GPR_U32(ctx, 31, 0x2DC450u);
    ctx->pc = 0x2DC44Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC448u;
    // 0x2dc44c: 0x8c660004  lw          $a2, 0x4($v1) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2DC448u, 0x2DC450u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC450u;
label_2dc450:
    // 0x2dc450: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x2DC450u;
    {
        const bool branch_taken_0x2dc450 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc450) {
            ctx->pc = 0x2DC484u;
            goto label_2dc484;
        }
    }
    ctx->pc = 0x2DC458u;
    // 0x2dc458: 0x24893b50  addiu       $t1, $a0, 0x3B50
    ctx->pc = 0x2dc458u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 4), 15184));
    // 0x2dc45c: 0xcdb020  add         $s6, $a2, $t5
    ctx->pc = 0x2dc45cu;
    {     int32_t rs_val = GPR_S32(ctx, 6);     int32_t rt_val = GPR_S32(ctx, 13);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 22, (int32_t)result);     } }
    // 0x2dc460: 0x8d1db2e5  lw          $sp, -0x4D1B($t0)
    ctx->pc = 0x2dc460u;
    SET_GPR_S32(ctx, 29, (int32_t)READ32(ADD32(GPR_U32(ctx, 8), 4294947557)));
    // 0x2dc464: 0x25fb820  add         $s7, $s2, $ra
    ctx->pc = 0x2dc464u;
    {     int32_t rs_val = GPR_S32(ctx, 18);     int32_t rt_val = GPR_S32(ctx, 31);     int64_t result = (int64_t)rs_val + (int64_t)rt_val;     if (result > INT32_MAX || result < INT32_MIN) {         runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW);     } else {         SET_GPR_S32(ctx, 23, (int32_t)result);     } }
    // 0x2dc468: 0xcf020ec  jal         func_3C083B0
    ctx->pc = 0x2DC468u;
    SET_GPR_U32(ctx, 31, 0x2DC470u);
    ctx->pc = 0x2DC46Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC468u;
    // 0x2dc46c: 0x8eccd3fd  lw          $t4, -0x2C03($s6) (Delay Slot)
    SET_GPR_S32(ctx, 12, (int32_t)READ32(ADD32(GPR_U32(ctx, 22), 4294956029)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x3C083B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x3C083B0u, 0x2DC468u, 0x2DC470u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC470u;
label_2dc470:
    // 0x2dc470: 0x0  nop
    ctx->pc = 0x2dc470u;
    // NOP
    // 0x2dc474: 0xadab9ef0  sw          $t3, -0x6110($t5)
    ctx->pc = 0x2dc474u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4294942448), GPR_U32(ctx, 11));
    // 0x2dc478: 0xc712f6b2  lwc1        $f18, -0x94E($t8)
    ctx->pc = 0x2dc478u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294964914)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
    // 0x2dc47c: 0xadab9e88  sw          $t3, -0x6178($t5)
    ctx->pc = 0x2dc47cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4294942344), GPR_U32(ctx, 11));
    // 0x2dc480: 0x0  nop
    ctx->pc = 0x2dc480u;
    // NOP
label_2dc484:
    // 0x2dc484: 0x3c02003c  lui         $v0, 0x3C
    ctx->pc = 0x2dc484u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)60 << 16));
    // 0x2dc488: 0x8c4498b0  lw          $a0, -0x6750($v0)
    ctx->pc = 0x2dc488u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294940848)));
    // 0x2dc48c: 0x80006024  lb          $zero, 0x6024($zero)
    ctx->pc = 0x2dc48cu;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 24612)));
    // 0x2dc490: 0x80106222  lb          $s0, 0x6222($zero)
    ctx->pc = 0x2dc490u;
    SET_GPR_S32(ctx, 16, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 25122)));
    // 0x2dc494: 0x9fe23f04  lwu         $v0, 0x3F04($ra)
    ctx->pc = 0x2dc494u;
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 31), 16132)));
    // 0x2dc498: 0x641405a0  daddiu      $s4, $zero, 0x5A0
    ctx->pc = 0x2dc498u;
    SET_GPR_S64(ctx, 20, (int64_t)GPR_S64(ctx, 0) + (int64_t)(int32_t)1440);
    // 0x2dc49c: 0xc0b7090  jal         func_2DC240
    ctx->pc = 0x2DC49Cu;
    SET_GPR_U32(ctx, 31, 0x2DC4A4u);
    ctx->pc = 0x2DC4A0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC49Cu;
    // 0x2dc4a0: 0x9fc22dc4  lwu         $v0, 0x2DC4($fp) (Delay Slot)
    SET_GPR_U32(ctx, 2, READ32(ADD32(GPR_U32(ctx, 30), 11716)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2DC240u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2DC240u, 0x2DC49Cu, 0x2DC4A4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC4A4u;
label_2dc4a4:
    // 0x2dc4a4: 0x80182  srl         $zero, $t0, 6
    ctx->pc = 0x2dc4a4u;
    SET_GPR_S32(ctx, 0, (int32_t)SRL32(GPR_U32(ctx, 8), 6));
    // 0x2dc4a8: 0x6014a052  daddi       $s4, $zero, -0x5FAE
    ctx->pc = 0x2dc4a8u;
    { int64_t src = (int64_t)GPR_S64(ctx, 0); int64_t imm = (int64_t)(int32_t)4294942802; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x2dc4ac: 0x60144072  daddi       $s4, $zero, 0x4072
    ctx->pc = 0x2dc4acu;
    { int64_t src = (int64_t)GPR_S64(ctx, 0); int64_t imm = (int64_t)(int32_t)16498; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x2dc4b0: 0x800220a4  lb          $v0, 0x20A4($zero)
    ctx->pc = 0x2dc4b0u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 8356)));
    // 0x2dc4b4: 0x6014c032  daddi       $s4, $zero, -0x3FCE
    ctx->pc = 0x2dc4b4u;
    { int64_t src = (int64_t)GPR_S64(ctx, 0); int64_t imm = (int64_t)(int32_t)4294950962; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x2dc4b8: 0x881e6  .word       0x000881E6                   # xor         $s0, $zero, $t0 # 000001C0 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dc4b8u;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 0) ^ GPR_U64(ctx, 8));
    // 0x2dc4bc: 0x60146012  daddi       $s4, $zero, 0x6012
    ctx->pc = 0x2dc4bcu;
    { int64_t src = (int64_t)GPR_S64(ctx, 0); int64_t imm = (int64_t)(int32_t)24594; int64_t res = src + imm; if (((src ^ imm) >= 0) && ((src ^ res) < 0))     runtime->SignalException(ctx, EXCEPTION_INTEGER_OVERFLOW); else SET_GPR_S64(ctx, 20, res); }
    // 0x2dc4c0: 0x2204040  .word       0x02204040                   # sll         $t0, $zero, 1 # 02200000 <InstrIdType: CPU_SPECIAL>
    ctx->pc = 0x2dc4c0u;
    SET_GPR_S32(ctx, 8, (int32_t)SLL32(GPR_U32(ctx, 0), 1));
    // 0x2dc4c4: 0x40004014  .word       0x40004014                   # mfc0        $zero, BadVaddr # 00000014 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2dc4c4u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_badvaddr);
    // 0x2dc4c8: 0x40006094  .word       0x40006094                   # mfc0        $zero, Status # 00000094 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2dc4c8u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_status);
    // 0x2dc4cc: 0x40008034  .word       0x40008034                   # mfc0        $zero, Config # 00000034 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2dc4ccu;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_config);
label_2dc4d0:
    // 0x2dc4d0: 0x4000a054  .word       0x4000A054                   # mfc0        $zero, XContext # 00000054 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2dc4d0u;
    SET_GPR_S32(ctx, 0, 0);  // Unimplemented COP0 register 20
    // 0x2dc4d4: 0x4000c074  .word       0x4000C074                   # mfc0        $zero, Reserved24 # 00000074 <InstrIdType: R5900_COP0>
    ctx->pc = 0x2dc4d4u;
    SET_GPR_S32(ctx, 0, (int32_t)ctx->cop0_debug);
    // 0x2dc4d8: 0x80006084  lb          $zero, 0x6084($zero)
    ctx->pc = 0x2dc4d8u;
    SET_GPR_S32(ctx, 0, (int8_t)READ8(ADD32(GPR_U32(ctx, 0), 24708)));
    // 0x2dc4dc: 0xe0144084  sc          $s4, 0x4084($zero)
    ctx->pc = 0x2dc4dcu;
    { uint32_t addr = ADD32(GPR_U32(ctx, 0), 16516); if (ctx->llbit && ctx->lladdr == addr) { WRITE32(addr, GPR_U32(ctx, 20)); SET_GPR_S32(ctx, 20, 1); } else { SET_GPR_S32(ctx, 20, 0); } ctx->llbit = 0; ctx->lladdr = 0; }
    // 0x2dc4e0: 0x9fec7fe4  lwu         $t4, 0x7FE4($ra)
    ctx->pc = 0x2dc4e0u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 31), 32740)));
    // 0x2dc4e4: 0x80014  dsllv       $zero, $t0, $zero
    ctx->pc = 0x2dc4e4u;
    SET_GPR_U64(ctx, 0, GPR_U64(ctx, 8) << (GPR_U32(ctx, 0) & 0x3F));
    // 0x2dc4e8: 0x0  nop
    ctx->pc = 0x2dc4e8u;
    // NOP
    // 0x2dc4ec: 0x0  nop
    ctx->pc = 0x2dc4ecu;
    // NOP
    // 0x2dc4f0: 0x0  nop
    ctx->pc = 0x2dc4f0u;
    // NOP
    // 0x2dc4f4: 0x9fec3f40  lwu         $t4, 0x3F40($ra)
    ctx->pc = 0x2dc4f4u;
    SET_GPR_U32(ctx, 12, READ32(ADD32(GPR_U32(ctx, 31), 16192)));
    // 0x2dc4f8: 0x9fe85fe4  lwu         $t0, 0x5FE4($ra)
    ctx->pc = 0x2dc4f8u;
    SET_GPR_U32(ctx, 8, READ32(ADD32(GPR_U32(ctx, 31), 24548)));
    // 0x2dc4fc: 0x1000000b  b           . + 4 + (0xB << 2)
    ctx->pc = 0x2DC4FCu;
    {
        const bool branch_taken_0x2dc4fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x2dc4fc) {
            ctx->pc = 0x2DC52Cu;
            goto label_2dc52c;
        }
    }
    ctx->pc = 0x2DC504u;
    // 0x2dc504: 0x26096db0  addiu       $t1, $s0, 0x6DB0
    ctx->pc = 0x2dc504u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 16), 28080));
    // 0x2dc508: 0xc9fae6c  jal         func_27EB9B0
    ctx->pc = 0x2DC508u;
    SET_GPR_U32(ctx, 31, 0x2DC510u);
    ctx->pc = 0x2DC50Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC508u;
    // 0x2dc50c: 0xdf050577  ld          $a1, 0x577($t8) (Delay Slot)
    SET_GPR_U64(ctx, 5, READ64(ADD32(GPR_U32(ctx, 24), 1399)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x27EB9B0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x27EB9B0u, 0x2DC508u, 0x2DC510u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC510u;
label_2dc510:
    // 0x2dc510: 0x26696d20  addiu       $t1, $s3, 0x6D20
    ctx->pc = 0x2dc510u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 19), 27936));
    // 0x2dc514: 0x8c46067d  lw          $a2, 0x67D($v0)
    ctx->pc = 0x2dc514u;
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 1661)));
    // 0x2dc518: 0xdcd05b1f  ld          $s0, 0x5B1F($a2)
    ctx->pc = 0x2dc518u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 6), 23327)));
    // 0x2dc51c: 0xadab9e0f  sw          $t3, -0x61F1($t5)
    ctx->pc = 0x2dc51cu;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4294942223), GPR_U32(ctx, 11));
    // 0x2dc520: 0xc712f6b3  lwc1        $f18, -0x94D($t8)
    ctx->pc = 0x2dc520u;
    { uint32_t bits = READ32(ADD32(GPR_U32(ctx, 24), 4294964915)); float f; std::memcpy(&f, &bits, sizeof(f)); ctx->f[18] = f; }
label_2dc524:
    // 0x2dc524: 0xadab9e77  sw          $t3, -0x6189($t5)
    ctx->pc = 0x2dc524u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 4294942327), GPR_U32(ctx, 11));
    // 0x2dc528: 0x0  nop
    ctx->pc = 0x2dc528u;
    // NOP
label_2dc52c:
    // 0x2dc52c: 0x3c02002e  lui         $v0, 0x2E
    ctx->pc = 0x2dc52cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)46 << 16));
    // 0x2dc530: 0x2442c51c  addiu       $v0, $v0, -0x3AE4
    ctx->pc = 0x2dc530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294952220));
    // 0x2dc534: 0x3c04002e  lui         $a0, 0x2E
    ctx->pc = 0x2dc534u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)46 << 16));
    // 0x2dc538: 0x2484c4fc  addiu       $a0, $a0, -0x3B04
    ctx->pc = 0x2dc538u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294952188));
    // 0x2dc53c: 0x8c470004  lw          $a3, 0x4($v0)
    ctx->pc = 0x2dc53cu;
    SET_GPR_S32(ctx, 7, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4)));
    // 0x2dc540: 0x8c450008  lw          $a1, 0x8($v0)
    ctx->pc = 0x2dc540u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 8)));
    // 0x2dc544: 0xc0b63f0  jal         func_2D8FC0
    ctx->pc = 0x2DC544u;
    SET_GPR_U32(ctx, 31, 0x2DC54Cu);
    ctx->pc = 0x2DC548u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x2DC544u;
    // 0x2dc548: 0x8c460000  lw          $a2, 0x0($v0) (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2D8FC0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2D8FC0u, 0x2DC544u, 0x2DC54Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x2DC54Cu;
label_2dc54c:
    // 0x2dc54c: 0x220102d  daddu       $v0, $s1, $zero
    ctx->pc = 0x2dc54cu;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x2dc550: 0xdfb00010  ld          $s0, 0x10($sp)
    ctx->pc = 0x2dc550u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x2dc554: 0xdfb10018  ld          $s1, 0x18($sp)
    ctx->pc = 0x2dc554u;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x2dc558: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x2dc558u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x2dc55c: 0x3e00008  jr          $ra
    ctx->pc = 0x2DC55Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x2DC560u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x2DC55Cu;
        // 0x2dc560: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x2DC55Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x2DC564u;
    // 0x2dc564: 0x0  nop
    ctx->pc = 0x2dc564u;
    // NOP
}
