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

// Function: sub_00150940
// Address: 0x150940 - 0x150ba0
void sub_00150940_0x150940(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_00150940_0x150940");
#endif

    switch (ctx->pc) {
        case 0x15096cu: goto label_15096c;
        case 0x1509c4u: goto label_1509c4;
        case 0x1509ccu: goto label_1509cc;
        case 0x1509dcu: goto label_1509dc;
        case 0x1509ecu: goto label_1509ec;
        case 0x1509f4u: goto label_1509f4;
        case 0x150a20u: goto label_150a20;
        case 0x150a68u: goto label_150a68;
        case 0x150a88u: goto label_150a88;
        case 0x150af4u: goto label_150af4;
        case 0x150b14u: goto label_150b14;
        case 0x150b1cu: goto label_150b1c;
        case 0x150b2cu: goto label_150b2c;
        case 0x150b3cu: goto label_150b3c;
        case 0x150b44u: goto label_150b44;
        default: break;
    }

    ctx->pc = 0x150940u;

    // 0x150940: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x150940u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x150944: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x150944u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x150948: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x150948u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x15094c: 0xa460efd0  sh          $zero, -0x1030($v1)
    ctx->pc = 0x15094cu;
    WRITE16(ADD32(GPR_U32(ctx, 3), 4294963152), (uint16_t)GPR_U32(ctx, 0));
    // 0x150950: 0x3c03009f  lui         $v1, 0x9F
    ctx->pc = 0x150950u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)159 << 16));
    // 0x150954: 0x90659780  lbu         $a1, -0x6880($v1)
    ctx->pc = 0x150954u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294940544)));
    // 0x150958: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x150958u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
    // 0x15095c: 0x14a30005  bne         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x15095Cu;
    {
        const bool branch_taken_0x15095c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x15095c) {
            ctx->pc = 0x150974u;
            goto label_150974;
        }
    }
    ctx->pc = 0x150964u;
    // 0x150964: 0xc0d4344  jal         func_350D10
    ctx->pc = 0x150964u;
    SET_GPR_U32(ctx, 31, 0x15096Cu);
    ctx->pc = 0x350D10u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x350D10u, 0x150964u, 0x15096Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x15096Cu;
label_15096c:
    // 0x15096c: 0x1000008a  b           . + 4 + (0x8A << 2)
    ctx->pc = 0x15096Cu;
    {
        const bool branch_taken_0x15096c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150970u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x15096Cu;
        // 0x150970: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
        SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x15096c) {
            ctx->pc = 0x150B98u;
            goto label_150b98;
        }
    }
    ctx->pc = 0x150974u;
label_150974:
    // 0x150974: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x150974u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x150978: 0x3c040010  lui         $a0, 0x10
    ctx->pc = 0x150978u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)16 << 16));
    // 0x15097c: 0x8c63a208  lw          $v1, -0x5DF8($v1)
    ctx->pc = 0x15097cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 4294943240)));
    // 0x150980: 0x641824  and         $v1, $v1, $a0
    ctx->pc = 0x150980u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & GPR_U64(ctx, 4));
    // 0x150984: 0x50600006  beql        $v1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x150984u;
    {
        const bool branch_taken_0x150984 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x150984) {
            ctx->pc = 0x150988u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x150984u;
            // 0x150988: 0x24030008  addiu       $v1, $zero, 0x8 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1509A0u;
            goto label_1509a0;
        }
    }
    ctx->pc = 0x15098Cu;
    // 0x15098c: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x15098cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x150990: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x150990u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x150994: 0x8084f338  lb          $a0, -0xCC8($a0)
    ctx->pc = 0x150994u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294964024)));
    // 0x150998: 0x1000007e  b           . + 4 + (0x7E << 2)
    ctx->pc = 0x150998u;
    {
        const bool branch_taken_0x150998 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x15099Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150998u;
        // 0x15099c: 0xa064f340  sb          $a0, -0xCC0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294964032), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150998) {
            ctx->pc = 0x150B94u;
            goto label_150b94;
        }
    }
    ctx->pc = 0x1509A0u;
label_1509a0:
    // 0x1509a0: 0x54a3001b  bnel        $a1, $v1, . + 4 + (0x1B << 2)
    ctx->pc = 0x1509A0u;
    {
        const bool branch_taken_0x1509a0 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x1509a0) {
            ctx->pc = 0x1509A4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1509A0u;
            // 0x1509a4: 0x24030007  addiu       $v1, $zero, 0x7 (Delay Slot)
            SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
            ctx->in_delay_slot = false;
            ctx->pc = 0x150A10u;
            goto label_150a10;
        }
    }
    ctx->pc = 0x1509A8u;
    // 0x1509a8: 0x3c03009d  lui         $v1, 0x9D
    ctx->pc = 0x1509a8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)157 << 16));
    // 0x1509ac: 0x24040011  addiu       $a0, $zero, 0x11
    ctx->pc = 0x1509acu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 17));
    // 0x1509b0: 0x9065b249  lbu         $a1, -0x4DB7($v1)
    ctx->pc = 0x1509b0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294947401)));
    // 0x1509b4: 0x14a40013  bne         $a1, $a0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1509B4u;
    {
        const bool branch_taken_0x1509b4 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        if (branch_taken_0x1509b4) {
            ctx->pc = 0x150A04u;
            goto label_150a04;
        }
    }
    ctx->pc = 0x1509BCu;
    // 0x1509bc: 0xc04a3be  jal         func_128EF8
    ctx->pc = 0x1509BCu;
    SET_GPR_U32(ctx, 31, 0x1509C4u);
    ctx->pc = 0x128EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128EF8u, 0x1509BCu, 0x1509C4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1509C4u;
label_1509c4:
    // 0x1509c4: 0xc048bb2  jal         func_122EC8
    ctx->pc = 0x1509C4u;
    SET_GPR_U32(ctx, 31, 0x1509CCu);
    ctx->pc = 0x1509C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1509C4u;
    // 0x1509c8: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122EC8u, 0x1509C4u, 0x1509CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1509CCu;
label_1509cc:
    // 0x1509cc: 0x3c034031  lui         $v1, 0x4031
    ctx->pc = 0x1509ccu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16433 << 16));
    // 0x1509d0: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x1509d0u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1509d4: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x1509D4u;
    SET_GPR_U32(ctx, 31, 0x1509DCu);
    ctx->pc = 0x1509D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1509D4u;
    // 0x1509d8: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1229D8u, 0x1509D4u, 0x1509DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1509DCu;
label_1509dc:
    // 0x1509dc: 0x3c0341e0  lui         $v1, 0x41E0
    ctx->pc = 0x1509dcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16864 << 16));
    // 0x1509e0: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1509e0u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1509e4: 0xc048b0a  jal         func_122C28
    ctx->pc = 0x1509E4u;
    SET_GPR_U32(ctx, 31, 0x1509ECu);
    ctx->pc = 0x1509E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1509E4u;
    // 0x1509e8: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122C28u, 0x1509E4u, 0x1509ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1509ECu;
label_1509ec:
    // 0x1509ec: 0xc048bde  jal         func_122F78
    ctx->pc = 0x1509ECu;
    SET_GPR_U32(ctx, 31, 0x1509F4u);
    ctx->pc = 0x1509F0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1509ECu;
    // 0x1509f0: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122F78u, 0x1509ECu, 0x1509F4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1509F4u;
label_1509f4:
    // 0x1509f4: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x1509f4u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1509f8: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x1509f8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x1509fc: 0x10000065  b           . + 4 + (0x65 << 2)
    ctx->pc = 0x1509FCu;
    {
        const bool branch_taken_0x1509fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150A00u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1509FCu;
        // 0x150a00: 0xa064f340  sb          $a0, -0xCC0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294964032), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1509fc) {
            ctx->pc = 0x150B94u;
            goto label_150b94;
        }
    }
    ctx->pc = 0x150A04u;
label_150a04:
    // 0x150a04: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x150a04u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x150a08: 0x10000062  b           . + 4 + (0x62 << 2)
    ctx->pc = 0x150A08u;
    {
        const bool branch_taken_0x150a08 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150A0Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150A08u;
        // 0x150a0c: 0xa065f340  sb          $a1, -0xCC0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294964032), (uint8_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150a08) {
            ctx->pc = 0x150B94u;
            goto label_150b94;
        }
    }
    ctx->pc = 0x150A10u;
label_150a10:
    // 0x150a10: 0x14a30009  bne         $a1, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x150A10u;
    {
        const bool branch_taken_0x150a10 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        if (branch_taken_0x150a10) {
            ctx->pc = 0x150A38u;
            goto label_150a38;
        }
    }
    ctx->pc = 0x150A18u;
    // 0x150a18: 0xc04a3be  jal         func_128EF8
    ctx->pc = 0x150A18u;
    SET_GPR_U32(ctx, 31, 0x150A20u);
    ctx->pc = 0x128EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128EF8u, 0x150A18u, 0x150A20u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150A20u;
label_150a20:
    // 0x150a20: 0x24040009  addiu       $a0, $zero, 0x9
    ctx->pc = 0x150a20u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
    // 0x150a24: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x150a24u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x150a28: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x150a28u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x150a2c: 0x2010  mfhi        $a0
    ctx->pc = 0x150a2cu;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x150a30: 0x10000058  b           . + 4 + (0x58 << 2)
    ctx->pc = 0x150A30u;
    {
        const bool branch_taken_0x150a30 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150A34u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150A30u;
        // 0x150a34: 0xa064f340  sb          $a0, -0xCC0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294964032), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150a30) {
            ctx->pc = 0x150B94u;
            goto label_150b94;
        }
    }
    ctx->pc = 0x150A38u;
label_150a38:
    // 0x150a38: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x150a38u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x150a3c: 0x24040102  addiu       $a0, $zero, 0x102
    ctx->pc = 0x150a3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 258));
    // 0x150a40: 0x9463dab0  lhu         $v1, -0x2550($v1)
    ctx->pc = 0x150a40u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 3), 4294957744)));
    // 0x150a44: 0x1464001e  bne         $v1, $a0, . + 4 + (0x1E << 2)
    ctx->pc = 0x150A44u;
    {
        const bool branch_taken_0x150a44 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x150a44) {
            ctx->pc = 0x150AC0u;
            goto label_150ac0;
        }
    }
    ctx->pc = 0x150A4Cu;
    // 0x150a4c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x150a4cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x150a50: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x150a50u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150a54: 0x9042f35b  lbu         $v0, -0xCA5($v0)
    ctx->pc = 0x150a54u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964059)));
    // 0x150a58: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x150A58u;
    {
        const bool branch_taken_0x150a58 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x150a58) {
            ctx->pc = 0x150A80u;
            goto label_150a80;
        }
    }
    ctx->pc = 0x150A60u;
    // 0x150a60: 0xc04a3be  jal         func_128EF8
    ctx->pc = 0x150A60u;
    SET_GPR_U32(ctx, 31, 0x150A68u);
    ctx->pc = 0x128EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128EF8u, 0x150A60u, 0x150A68u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150A68u;
label_150a68:
    // 0x150a68: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x150a68u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x150a6c: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x150a6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x150a70: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x150a70u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x150a74: 0x2010  mfhi        $a0
    ctx->pc = 0x150a74u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x150a78: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x150A78u;
    {
        const bool branch_taken_0x150a78 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150A7Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150A78u;
        // 0x150a7c: 0xa064f340  sb          $a0, -0xCC0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294964032), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150a78) {
            ctx->pc = 0x150A9Cu;
            goto label_150a9c;
        }
    }
    ctx->pc = 0x150A80u;
label_150a80:
    // 0x150a80: 0xc04a3be  jal         func_128EF8
    ctx->pc = 0x150A80u;
    SET_GPR_U32(ctx, 31, 0x150A88u);
    ctx->pc = 0x128EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128EF8u, 0x150A80u, 0x150A88u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150A88u;
label_150a88:
    // 0x150a88: 0x2404000f  addiu       $a0, $zero, 0xF
    ctx->pc = 0x150a88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 15));
    // 0x150a8c: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x150a8cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x150a90: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x150a90u;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x150a94: 0x2010  mfhi        $a0
    ctx->pc = 0x150a94u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x150a98: 0xa064f340  sb          $a0, -0xCC0($v1)
    ctx->pc = 0x150a98u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294964032), (uint8_t)GPR_U32(ctx, 4));
label_150a9c:
    // 0x150a9c: 0x4263c  dsll32      $a0, $a0, 24
    ctx->pc = 0x150a9cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) << (32 + 24));
    // 0x150aa0: 0x4263f  dsra32      $a0, $a0, 24
    ctx->pc = 0x150aa0u;
    SET_GPR_S64(ctx, 4, GPR_S64(ctx, 4) >> (32 + 24));
    // 0x150aa4: 0x28830007  slti        $v1, $a0, 0x7
    ctx->pc = 0x150aa4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 4) < (int64_t)(int32_t)7) ? 1 : 0);
    // 0x150aa8: 0x1460003a  bnez        $v1, . + 4 + (0x3A << 2)
    ctx->pc = 0x150AA8u;
    {
        const bool branch_taken_0x150aa8 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x150aa8) {
            ctx->pc = 0x150B94u;
            goto label_150b94;
        }
    }
    ctx->pc = 0x150AB0u;
    // 0x150ab0: 0x24840002  addiu       $a0, $a0, 0x2
    ctx->pc = 0x150ab0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 2));
    // 0x150ab4: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x150ab4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x150ab8: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x150AB8u;
    {
        const bool branch_taken_0x150ab8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150ABCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150AB8u;
        // 0x150abc: 0xa064f340  sb          $a0, -0xCC0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294964032), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150ab8) {
            ctx->pc = 0x150B94u;
            goto label_150b94;
        }
    }
    ctx->pc = 0x150AC0u;
label_150ac0:
    // 0x150ac0: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x150ac0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x150ac4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x150ac4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x150ac8: 0x9063db10  lbu         $v1, -0x24F0($v1)
    ctx->pc = 0x150ac8u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957840)));
    // 0x150acc: 0x30630003  andi        $v1, $v1, 0x3
    ctx->pc = 0x150accu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)3);
    // 0x150ad0: 0x14640020  bne         $v1, $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x150AD0u;
    {
        const bool branch_taken_0x150ad0 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 4));
        if (branch_taken_0x150ad0) {
            ctx->pc = 0x150B54u;
            goto label_150b54;
        }
    }
    ctx->pc = 0x150AD8u;
    // 0x150ad8: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x150ad8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x150adc: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x150adcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x150ae0: 0x9042f35b  lbu         $v0, -0xCA5($v0)
    ctx->pc = 0x150ae0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964059)));
    // 0x150ae4: 0x14430009  bne         $v0, $v1, . + 4 + (0x9 << 2)
    ctx->pc = 0x150AE4u;
    {
        const bool branch_taken_0x150ae4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 3));
        if (branch_taken_0x150ae4) {
            ctx->pc = 0x150B0Cu;
            goto label_150b0c;
        }
    }
    ctx->pc = 0x150AECu;
    // 0x150aec: 0xc04a3be  jal         func_128EF8
    ctx->pc = 0x150AECu;
    SET_GPR_U32(ctx, 31, 0x150AF4u);
    ctx->pc = 0x128EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128EF8u, 0x150AECu, 0x150AF4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150AF4u;
label_150af4:
    // 0x150af4: 0x24040007  addiu       $a0, $zero, 0x7
    ctx->pc = 0x150af4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x150af8: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x150af8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x150afc: 0x44001a  div         $zero, $v0, $a0
    ctx->pc = 0x150afcu;
    { int32_t divisor = GPR_S32(ctx, 4);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x150b00: 0x2010  mfhi        $a0
    ctx->pc = 0x150b00u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x150b04: 0x10000023  b           . + 4 + (0x23 << 2)
    ctx->pc = 0x150B04u;
    {
        const bool branch_taken_0x150b04 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150B08u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150B04u;
        // 0x150b08: 0xa064f340  sb          $a0, -0xCC0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294964032), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150b04) {
            ctx->pc = 0x150B94u;
            goto label_150b94;
        }
    }
    ctx->pc = 0x150B0Cu;
label_150b0c:
    // 0x150b0c: 0xc04a3be  jal         func_128EF8
    ctx->pc = 0x150B0Cu;
    SET_GPR_U32(ctx, 31, 0x150B14u);
    ctx->pc = 0x128EF8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x128EF8u, 0x150B0Cu, 0x150B14u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150B14u;
label_150b14:
    // 0x150b14: 0xc048bb2  jal         func_122EC8
    ctx->pc = 0x150B14u;
    SET_GPR_U32(ctx, 31, 0x150B1Cu);
    ctx->pc = 0x150B18u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150B14u;
    // 0x150b18: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122EC8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122EC8u, 0x150B14u, 0x150B1Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150B1Cu;
label_150b1c:
    // 0x150b1c: 0x3c034031  lui         $v1, 0x4031
    ctx->pc = 0x150b1cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16433 << 16));
    // 0x150b20: 0x40282d  daddu       $a1, $v0, $zero
    ctx->pc = 0x150b20u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150b24: 0xc048a76  jal         func_1229D8
    ctx->pc = 0x150B24u;
    SET_GPR_U32(ctx, 31, 0x150B2Cu);
    ctx->pc = 0x150B28u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150B24u;
    // 0x150b28: 0x3203c  dsll32      $a0, $v1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1229D8u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1229D8u, 0x150B24u, 0x150B2Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150B2Cu;
label_150b2c:
    // 0x150b2c: 0x3c0341e0  lui         $v1, 0x41E0
    ctx->pc = 0x150b2cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)16864 << 16));
    // 0x150b30: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x150b30u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150b34: 0xc048b0a  jal         func_122C28
    ctx->pc = 0x150B34u;
    SET_GPR_U32(ctx, 31, 0x150B3Cu);
    ctx->pc = 0x150B38u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150B34u;
    // 0x150b38: 0x3283c  dsll32      $a1, $v1, 0 (Delay Slot)
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 3) << (32 + 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122C28u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122C28u, 0x150B34u, 0x150B3Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150B3Cu;
label_150b3c:
    // 0x150b3c: 0xc048bde  jal         func_122F78
    ctx->pc = 0x150B3Cu;
    SET_GPR_U32(ctx, 31, 0x150B44u);
    ctx->pc = 0x150B40u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x150B3Cu;
    // 0x150b40: 0x40202d  daddu       $a0, $v0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x122F78u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x122F78u, 0x150B3Cu, 0x150B44u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x150B44u;
label_150b44:
    // 0x150b44: 0x40202d  daddu       $a0, $v0, $zero
    ctx->pc = 0x150b44u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x150b48: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x150b48u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x150b4c: 0x10000011  b           . + 4 + (0x11 << 2)
    ctx->pc = 0x150B4Cu;
    {
        const bool branch_taken_0x150b4c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150B50u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150B4Cu;
        // 0x150b50: 0xa064f340  sb          $a0, -0xCC0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294964032), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150b4c) {
            ctx->pc = 0x150B94u;
            goto label_150b94;
        }
    }
    ctx->pc = 0x150B54u;
label_150b54:
    // 0x150b54: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x150b54u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x150b58: 0x8065d9f8  lb          $a1, -0x2608($v1)
    ctx->pc = 0x150b58u;
    SET_GPR_S32(ctx, 5, (int8_t)READ8(ADD32(GPR_U32(ctx, 3), 4294957560)));
    // 0x150b5c: 0x28a30008  slti        $v1, $a1, 0x8
    ctx->pc = 0x150b5cu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)8) ? 1 : 0);
    // 0x150b60: 0x14600006  bnez        $v1, . + 4 + (0x6 << 2)
    ctx->pc = 0x150B60u;
    {
        const bool branch_taken_0x150b60 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        if (branch_taken_0x150b60) {
            ctx->pc = 0x150B7Cu;
            goto label_150b7c;
        }
    }
    ctx->pc = 0x150B68u;
    // 0x150b68: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x150b68u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x150b6c: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x150b6cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x150b70: 0x8084f310  lb          $a0, -0xCF0($a0)
    ctx->pc = 0x150b70u;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 4294963984)));
    // 0x150b74: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x150B74u;
    {
        const bool branch_taken_0x150b74 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x150B78u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150B74u;
        // 0x150b78: 0xa064f340  sb          $a0, -0xCC0($v1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 3), 4294964032), (uint8_t)GPR_U32(ctx, 4));
        ctx->in_delay_slot = false;
        if (branch_taken_0x150b74) {
            ctx->pc = 0x150B94u;
            goto label_150b94;
        }
    }
    ctx->pc = 0x150B7Cu;
label_150b7c:
    // 0x150b7c: 0x3c040093  lui         $a0, 0x93
    ctx->pc = 0x150b7cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)147 << 16));
    // 0x150b80: 0x3c030093  lui         $v1, 0x93
    ctx->pc = 0x150b80u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)147 << 16));
    // 0x150b84: 0x2484f310  addiu       $a0, $a0, -0xCF0
    ctx->pc = 0x150b84u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294963984));
    // 0x150b88: 0x852021  addu        $a0, $a0, $a1
    ctx->pc = 0x150b88u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x150b8c: 0x80840000  lb          $a0, 0x0($a0)
    ctx->pc = 0x150b8cu;
    SET_GPR_S32(ctx, 4, (int8_t)READ8(ADD32(GPR_U32(ctx, 4), 0)));
    // 0x150b90: 0xa064f340  sb          $a0, -0xCC0($v1)
    ctx->pc = 0x150b90u;
    WRITE8(ADD32(GPR_U32(ctx, 3), 4294964032), (uint8_t)GPR_U32(ctx, 4));
label_150b94:
    // 0x150b94: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x150b94u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_150b98:
    // 0x150b98: 0x3e00008  jr          $ra
    ctx->pc = 0x150B98u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x150B9Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x150B98u;
        // 0x150b9c: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x150B98u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x150BA0u;
}
