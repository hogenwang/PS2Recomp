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

// Function: sub_0034AF70
// Address: 0x34af70 - 0x34baa0
void sub_0034AF70_0x34af70(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0034AF70_0x34af70");
#endif

    switch (ctx->pc) {
        case 0x34b048u: goto label_34b048;
        case 0x34b064u: goto label_34b064;
        case 0x34b074u: goto label_34b074;
        case 0x34b080u: goto label_34b080;
        case 0x34b0a0u: goto label_34b0a0;
        case 0x34b0b0u: goto label_34b0b0;
        case 0x34b0bcu: goto label_34b0bc;
        case 0x34b0e8u: goto label_34b0e8;
        case 0x34b0fcu: goto label_34b0fc;
        case 0x34b108u: goto label_34b108;
        case 0x34b13cu: goto label_34b13c;
        case 0x34b14cu: goto label_34b14c;
        case 0x34b158u: goto label_34b158;
        case 0x34b18cu: goto label_34b18c;
        case 0x34b1a8u: goto label_34b1a8;
        case 0x34b1e8u: goto label_34b1e8;
        case 0x34b1fcu: goto label_34b1fc;
        case 0x34b20cu: goto label_34b20c;
        case 0x34b218u: goto label_34b218;
        case 0x34b248u: goto label_34b248;
        case 0x34b268u: goto label_34b268;
        case 0x34b27cu: goto label_34b27c;
        case 0x34b290u: goto label_34b290;
        case 0x34b2b0u: goto label_34b2b0;
        case 0x34b2d0u: goto label_34b2d0;
        case 0x34b324u: goto label_34b324;
        case 0x34b33cu: goto label_34b33c;
        case 0x34b360u: goto label_34b360;
        case 0x34b37cu: goto label_34b37c;
        case 0x34b390u: goto label_34b390;
        case 0x34b3c8u: goto label_34b3c8;
        case 0x34b3d4u: goto label_34b3d4;
        case 0x34b400u: goto label_34b400;
        case 0x34b40cu: goto label_34b40c;
        case 0x34b43cu: goto label_34b43c;
        case 0x34b454u: goto label_34b454;
        case 0x34b480u: goto label_34b480;
        case 0x34b4c8u: goto label_34b4c8;
        case 0x34b4dcu: goto label_34b4dc;
        case 0x34b4f0u: goto label_34b4f0;
        case 0x34b508u: goto label_34b508;
        case 0x34b514u: goto label_34b514;
        case 0x34b554u: goto label_34b554;
        case 0x34b560u: goto label_34b560;
        case 0x34b574u: goto label_34b574;
        case 0x34b58cu: goto label_34b58c;
        case 0x34b5acu: goto label_34b5ac;
        case 0x34b5bcu: goto label_34b5bc;
        case 0x34b5fcu: goto label_34b5fc;
        case 0x34b620u: goto label_34b620;
        case 0x34b63cu: goto label_34b63c;
        case 0x34b65cu: goto label_34b65c;
        case 0x34b67cu: goto label_34b67c;
        case 0x34b6e4u: goto label_34b6e4;
        case 0x34b6f0u: goto label_34b6f0;
        case 0x34b704u: goto label_34b704;
        case 0x34b71cu: goto label_34b71c;
        case 0x34b73cu: goto label_34b73c;
        case 0x34b74cu: goto label_34b74c;
        case 0x34b78cu: goto label_34b78c;
        case 0x34b7b0u: goto label_34b7b0;
        case 0x34b7ccu: goto label_34b7cc;
        case 0x34b7ecu: goto label_34b7ec;
        case 0x34b80cu: goto label_34b80c;
        case 0x34b82cu: goto label_34b82c;
        case 0x34b880u: goto label_34b880;
        case 0x34b894u: goto label_34b894;
        case 0x34b8b4u: goto label_34b8b4;
        case 0x34b8ccu: goto label_34b8cc;
        case 0x34b8d8u: goto label_34b8d8;
        case 0x34b8f0u: goto label_34b8f0;
        case 0x34b8fcu: goto label_34b8fc;
        case 0x34b914u: goto label_34b914;
        case 0x34b920u: goto label_34b920;
        case 0x34b938u: goto label_34b938;
        case 0x34b944u: goto label_34b944;
        case 0x34b95cu: goto label_34b95c;
        case 0x34b968u: goto label_34b968;
        case 0x34b980u: goto label_34b980;
        case 0x34b98cu: goto label_34b98c;
        case 0x34b9a8u: goto label_34b9a8;
        case 0x34b9bcu: goto label_34b9bc;
        case 0x34b9d4u: goto label_34b9d4;
        case 0x34b9fcu: goto label_34b9fc;
        case 0x34ba10u: goto label_34ba10;
        case 0x34ba28u: goto label_34ba28;
        case 0x34ba48u: goto label_34ba48;
        case 0x34ba64u: goto label_34ba64;
        case 0x34ba78u: goto label_34ba78;
        case 0x34ba90u: goto label_34ba90;
        default: break;
    }

    ctx->pc = 0x34af70u;

    // 0x34af70: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34af70u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34af74: 0x3c036666  lui         $v1, 0x6666
    ctx->pc = 0x34af74u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)26214 << 16));
    // 0x34af78: 0x9447be96  lhu         $a3, -0x416A($v0)
    ctx->pc = 0x34af78u;
    SET_GPR_U32(ctx, 7, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950550)));
    // 0x34af7c: 0x34646667  ori         $a0, $v1, 0x6667
    ctx->pc = 0x34af7cu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 3) | (uint64_t)(uint16_t)26215);
    // 0x34af80: 0x24060014  addiu       $a2, $zero, 0x14
    ctx->pc = 0x34af80u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x34af84: 0x24e50014  addiu       $a1, $a3, 0x14
    ctx->pc = 0x34af84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 20));
    // 0x34af88: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34af88u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34af8c: 0x850018  mult        $zero, $a0, $a1
    ctx->pc = 0x34af8cu;
    { int64_t result = (int64_t)GPR_S32(ctx, 4) * (int64_t)GPR_S32(ctx, 5); ctx->lo = (uint64_t)(int64_t)(int32_t)result; ctx->hi = (uint64_t)(int64_t)(int32_t)(result >> 32); }
    // 0x34af90: 0x8c434098  lw          $v1, 0x4098($v0)
    ctx->pc = 0x34af90u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16536)));
    // 0x34af94: 0x24020002  addiu       $v0, $zero, 0x2
    ctx->pc = 0x34af94u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34af98: 0x2010  mfhi        $a0
    ctx->pc = 0x34af98u;
    SET_GPR_U64(ctx, 4, ctx->hi);
    // 0x34af9c: 0x52fc2  srl         $a1, $a1, 31
    ctx->pc = 0x34af9cu;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 5), 31));
    // 0x34afa0: 0xe6001a  div         $zero, $a3, $a2
    ctx->pc = 0x34afa0u;
    { int32_t divisor = GPR_S32(ctx, 6);    int32_t dividend = GPR_S32(ctx, 7);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x34afa4: 0x420c3  sra         $a0, $a0, 3
    ctx->pc = 0x34afa4u;
    SET_GPR_S32(ctx, 4, SRA32(GPR_S32(ctx, 4), 3));
    // 0x34afa8: 0x854021  addu        $t0, $a0, $a1
    ctx->pc = 0x34afa8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 4), GPR_U32(ctx, 5)));
    // 0x34afac: 0x310400ff  andi        $a0, $t0, 0xFF
    ctx->pc = 0x34afacu;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 8) & (uint64_t)(uint16_t)255);
    // 0x34afb0: 0x3010  mfhi        $a2
    ctx->pc = 0x34afb0u;
    SET_GPR_U64(ctx, 6, ctx->hi);
    // 0x34afb4: 0x62900  sll         $a1, $a2, 4
    ctx->pc = 0x34afb4u;
    SET_GPR_S32(ctx, 5, (int32_t)SLL32(GPR_U32(ctx, 6), 4));
    // 0x34afb8: 0xa62821  addu        $a1, $a1, $a2
    ctx->pc = 0x34afb8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), GPR_U32(ctx, 6)));
    // 0x34afbc: 0x53840  sll         $a3, $a1, 1
    ctx->pc = 0x34afbcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 5), 1));
    // 0x34afc0: 0xe32821  addu        $a1, $a3, $v1
    ctx->pc = 0x34afc0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), GPR_U32(ctx, 3)));
    // 0x34afc4: 0x90a30001  lbu         $v1, 0x1($a1)
    ctx->pc = 0x34afc4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 5), 1)));
    // 0x34afc8: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x34afc8u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x34afcc: 0x1502000a  bne         $t0, $v0, . + 4 + (0xA << 2)
    ctx->pc = 0x34AFCCu;
    {
        const bool branch_taken_0x34afcc = (GPR_U64(ctx, 8) != GPR_U64(ctx, 2));
        ctx->pc = 0x34AFD0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AFCCu;
        // 0x34afd0: 0xa0a30001  sb          $v1, 0x1($a1) (Delay Slot)
        WRITE8(ADD32(GPR_U32(ctx, 5), 1), (uint8_t)GPR_U32(ctx, 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34afcc) {
            ctx->pc = 0x34AFF8u;
            goto label_34aff8;
        }
    }
    ctx->pc = 0x34AFD4u;
    // 0x34afd4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34afd4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34afd8: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x34afd8u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x34afdc: 0x9444be94  lhu         $a0, -0x416C($v0)
    ctx->pc = 0x34afdcu;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950548)));
    // 0x34afe0: 0x2463ece0  addiu       $v1, $v1, -0x1320
    ctx->pc = 0x34afe0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294962400));
    // 0x34afe4: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x34afe4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x34afe8: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x34afe8u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x34afec: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x34afecu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x34aff0: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x34AFF0u;
    {
        const bool branch_taken_0x34aff0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34AFF4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34AFF0u;
        // 0x34aff4: 0x622021  addu        $a0, $v1, $v0 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34aff0) {
            ctx->pc = 0x34B018u;
            goto label_34b018;
        }
    }
    ctx->pc = 0x34AFF8u;
label_34aff8:
    // 0x34aff8: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34aff8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34affc: 0x3c03009c  lui         $v1, 0x9C
    ctx->pc = 0x34affcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)156 << 16));
    // 0x34b000: 0x9444be94  lhu         $a0, -0x416C($v0)
    ctx->pc = 0x34b000u;
    SET_GPR_U32(ctx, 4, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950548)));
    // 0x34b004: 0x2463ef90  addiu       $v1, $v1, -0x1070
    ctx->pc = 0x34b004u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294963088));
    // 0x34b008: 0x41100  sll         $v0, $a0, 4
    ctx->pc = 0x34b008u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 4), 4));
    // 0x34b00c: 0x441021  addu        $v0, $v0, $a0
    ctx->pc = 0x34b00cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 4)));
    // 0x34b010: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x34b010u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x34b014: 0x622021  addu        $a0, $v1, $v0
    ctx->pc = 0x34b014u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 2)));
label_34b018:
    // 0x34b018: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34b018u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34b01c: 0x24060020  addiu       $a2, $zero, 0x20
    ctx->pc = 0x34b01cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x34b020: 0x8c424098  lw          $v0, 0x4098($v0)
    ctx->pc = 0x34b020u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16536)));
    // 0x34b024: 0x471021  addu        $v0, $v0, $a3
    ctx->pc = 0x34b024u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 7)));
    // 0x34b028: 0x8049c48  j           func_127120
    ctx->pc = 0x34B028u;
    ctx->pc = 0x34B02Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B028u;
    // 0x34b02c: 0x24450002  addiu       $a1, $v0, 0x2 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 2));
    ctx->in_delay_slot = false;
    ctx->pc = 0x127120u;
    sub_00127120_0x127120(rdram, ctx, runtime); return;
    ctx->pc = 0x34B030u;
    // 0x34b030: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34b030u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34b034: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x34b034u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34b038: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34b038u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34b03c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34b03cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b040: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x34B040u;
    SET_GPR_U32(ctx, 31, 0x34B048u);
    ctx->pc = 0x34B044u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B040u;
    // 0x34b044: 0x302d  daddu       $a2, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x34B040u, 0x34B048u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B048u;
label_34b048:
    // 0x34b048: 0x3043ffff  andi        $v1, $v0, 0xFFFF
    ctx->pc = 0x34b048u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x34b04c: 0x30632000  andi        $v1, $v1, 0x2000
    ctx->pc = 0x34b04cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) & (uint64_t)(uint16_t)8192);
    // 0x34b050: 0x5060000c  beql        $v1, $zero, . + 4 + (0xC << 2)
    ctx->pc = 0x34B050u;
    {
        const bool branch_taken_0x34b050 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b050) {
            ctx->pc = 0x34B054u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34B050u;
            // 0x34b054: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34B084u;
            goto label_34b084;
        }
    }
    ctx->pc = 0x34B058u;
    // 0x34b058: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x34b058u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x34b05c: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x34B05Cu;
    SET_GPR_U32(ctx, 31, 0x34B064u);
    ctx->pc = 0x34B060u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B05Cu;
    // 0x34b060: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x34B05Cu, 0x34B064u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B064u;
label_34b064:
    // 0x34b064: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34b064u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34b068: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34b068u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b06c: 0xc082678  jal         func_2099E0
    ctx->pc = 0x34B06Cu;
    SET_GPR_U32(ctx, 31, 0x34B074u);
    ctx->pc = 0x34B070u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B06Cu;
    // 0x34b070: 0x2484a2a0  addiu       $a0, $a0, -0x5D60 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294943392));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x34B06Cu, 0x34B074u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B074u;
label_34b074:
    // 0x34b074: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34b074u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34b078: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34B078u;
    SET_GPR_U32(ctx, 31, 0x34B080u);
    ctx->pc = 0x34B07Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B078u;
    // 0x34b07c: 0x2484abe0  addiu       $a0, $a0, -0x5420 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294945760));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x34B078u, 0x34B080u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B080u;
label_34b080:
    // 0x34b080: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34b080u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34b084:
    // 0x34b084: 0x3e00008  jr          $ra
    ctx->pc = 0x34B084u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B088u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B084u;
        // 0x34b088: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B084u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B08Cu;
    // 0x34b08c: 0x0  nop
    ctx->pc = 0x34b08cu;
    // NOP
    // 0x34b090: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34b090u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34b094: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34b094u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34b098: 0xc069230  jal         func_1A48C0
    ctx->pc = 0x34B098u;
    SET_GPR_U32(ctx, 31, 0x34B0A0u);
    ctx->pc = 0x34B09Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B098u;
    // 0x34b09c: 0x2404002d  addiu       $a0, $zero, 0x2D (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 45));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A48C0u, 0x34B098u, 0x34B0A0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B0A0u;
label_34b0a0:
    // 0x34b0a0: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x34b0a0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x34b0a4: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34b0a4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b0a8: 0xc082678  jal         func_2099E0
    ctx->pc = 0x34B0A8u;
    SET_GPR_U32(ctx, 31, 0x34B0B0u);
    ctx->pc = 0x34B0ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B0A8u;
    // 0x34b0ac: 0x24843ff0  addiu       $a0, $a0, 0x3FF0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x34B0A8u, 0x34B0B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B0B0u;
label_34b0b0:
    // 0x34b0b0: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34b0b0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34b0b4: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34B0B4u;
    SET_GPR_U32(ctx, 31, 0x34B0BCu);
    ctx->pc = 0x34B0B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B0B4u;
    // 0x34b0b8: 0x2484b0d0  addiu       $a0, $a0, -0x4F30 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947024));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x34B0B4u, 0x34B0BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B0BCu;
label_34b0bc:
    // 0x34b0bc: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34b0bcu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b0c0: 0x3e00008  jr          $ra
    ctx->pc = 0x34B0C0u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B0C4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B0C0u;
        // 0x34b0c4: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B0C0u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B0C8u;
    // 0x34b0c8: 0x0  nop
    ctx->pc = 0x34b0c8u;
    // NOP
    // 0x34b0cc: 0x0  nop
    ctx->pc = 0x34b0ccu;
    // NOP
    // 0x34b0d0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34b0d0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34b0d4: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x34b0d4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34b0d8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34b0d8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34b0dc: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34b0dcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b0e0: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x34B0E0u;
    SET_GPR_U32(ctx, 31, 0x34B0E8u);
    ctx->pc = 0x34B0E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B0E0u;
    // 0x34b0e4: 0x24062000  addiu       $a2, $zero, 0x2000 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 8192));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x34B0E0u, 0x34B0E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B0E8u;
label_34b0e8:
    // 0x34b0e8: 0x50400008  beql        $v0, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x34B0E8u;
    {
        const bool branch_taken_0x34b0e8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b0e8) {
            ctx->pc = 0x34B0ECu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34B0E8u;
            // 0x34b0ec: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34B10Cu;
            goto label_34b10c;
        }
    }
    ctx->pc = 0x34B0F0u;
    // 0x34b0f0: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x34b0f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x34b0f4: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x34B0F4u;
    SET_GPR_U32(ctx, 31, 0x34B0FCu);
    ctx->pc = 0x34B0F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B0F4u;
    // 0x34b0f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x34B0F4u, 0x34B0FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B0FCu;
label_34b0fc:
    // 0x34b0fc: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34b0fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34b100: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34B100u;
    SET_GPR_U32(ctx, 31, 0x34B108u);
    ctx->pc = 0x34B104u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B100u;
    // 0x34b104: 0x24848740  addiu       $a0, $a0, -0x78C0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x34B100u, 0x34B108u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B108u;
label_34b108:
    // 0x34b108: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34b108u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34b10c:
    // 0x34b10c: 0x3e00008  jr          $ra
    ctx->pc = 0x34B10Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B110u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B10Cu;
        // 0x34b110: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B10Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B114u;
    // 0x34b114: 0x0  nop
    ctx->pc = 0x34b114u;
    // NOP
    // 0x34b118: 0x0  nop
    ctx->pc = 0x34b118u;
    // NOP
    // 0x34b11c: 0x0  nop
    ctx->pc = 0x34b11cu;
    // NOP
    // 0x34b120: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34b120u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34b124: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34b124u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b128: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34b128u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34b12c: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34b12cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34b130: 0x24040046  addiu       $a0, $zero, 0x46
    ctx->pc = 0x34b130u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 70));
    // 0x34b134: 0xc069230  jal         func_1A48C0
    ctx->pc = 0x34B134u;
    SET_GPR_U32(ctx, 31, 0x34B13Cu);
    ctx->pc = 0x34B138u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B134u;
    // 0x34b138: 0xac434378  sw          $v1, 0x4378($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 17272), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A48C0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A48C0u, 0x34B134u, 0x34B13Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B13Cu;
label_34b13c:
    // 0x34b13c: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x34b13cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x34b140: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34b140u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b144: 0xc082678  jal         func_2099E0
    ctx->pc = 0x34B144u;
    SET_GPR_U32(ctx, 31, 0x34B14Cu);
    ctx->pc = 0x34B148u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B144u;
    // 0x34b148: 0x24844000  addiu       $a0, $a0, 0x4000 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 16384));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x34B144u, 0x34B14Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B14Cu;
label_34b14c:
    // 0x34b14c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34b14cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34b150: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34B150u;
    SET_GPR_U32(ctx, 31, 0x34B158u);
    ctx->pc = 0x34B154u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B150u;
    // 0x34b154: 0x2484b170  addiu       $a0, $a0, -0x4E90 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x34B150u, 0x34B158u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B158u;
label_34b158:
    // 0x34b158: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34b158u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b15c: 0x3e00008  jr          $ra
    ctx->pc = 0x34B15Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B160u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B15Cu;
        // 0x34b160: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B15Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B164u;
    // 0x34b164: 0x0  nop
    ctx->pc = 0x34b164u;
    // NOP
    // 0x34b168: 0x0  nop
    ctx->pc = 0x34b168u;
    // NOP
    // 0x34b16c: 0x0  nop
    ctx->pc = 0x34b16cu;
    // NOP
    // 0x34b170: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34b170u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34b174: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x34b174u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34b178: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34b178u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34b17c: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34b17cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b180: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34b180u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b184: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x34B184u;
    SET_GPR_U32(ctx, 31, 0x34B18Cu);
    ctx->pc = 0x34B188u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B184u;
    // 0x34b188: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x34B184u, 0x34B18Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B18Cu;
label_34b18c:
    // 0x34b18c: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x34b18cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x34b190: 0x320300a0  andi        $v1, $s0, 0xA0
    ctx->pc = 0x34b190u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)160);
    // 0x34b194: 0x5060000b  beql        $v1, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x34B194u;
    {
        const bool branch_taken_0x34b194 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b194) {
            ctx->pc = 0x34B198u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34B194u;
            // 0x34b198: 0x32032000  andi        $v1, $s0, 0x2000 (Delay Slot)
            SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
            ctx->in_delay_slot = false;
            ctx->pc = 0x34B1C4u;
            goto label_34b1c4;
        }
    }
    ctx->pc = 0x34B19Cu;
    // 0x34b19c: 0x24040125  addiu       $a0, $zero, 0x125
    ctx->pc = 0x34b19cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 293));
    // 0x34b1a0: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x34B1A0u;
    SET_GPR_U32(ctx, 31, 0x34B1A8u);
    ctx->pc = 0x34B1A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B1A0u;
    // 0x34b1a4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x34B1A0u, 0x34B1A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B1A8u;
label_34b1a8:
    // 0x34b1a8: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x34b1a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x34b1ac: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34b1acu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x34b1b0: 0x8c844378  lw          $a0, 0x4378($a0)
    ctx->pc = 0x34b1b0u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 17272)));
    // 0x34b1b4: 0x4202b  sltu        $a0, $zero, $a0
    ctx->pc = 0x34b1b4u;
    SET_GPR_U64(ctx, 4, ((uint64_t)GPR_U64(ctx, 0) < (uint64_t)GPR_U64(ctx, 4)) ? 1 : 0);
    // 0x34b1b8: 0x38840001  xori        $a0, $a0, 0x1
    ctx->pc = 0x34b1b8u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) ^ (uint64_t)(uint16_t)1);
    // 0x34b1bc: 0xac644378  sw          $a0, 0x4378($v1)
    ctx->pc = 0x34b1bcu;
    WRITE32(ADD32(GPR_U32(ctx, 3), 17272), GPR_U32(ctx, 4));
    // 0x34b1c0: 0x32032000  andi        $v1, $s0, 0x2000
    ctx->pc = 0x34b1c0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
label_34b1c4:
    // 0x34b1c4: 0x50600015  beql        $v1, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x34B1C4u;
    {
        const bool branch_taken_0x34b1c4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b1c4) {
            ctx->pc = 0x34B1C8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34B1C4u;
            // 0x34b1c8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34B21Cu;
            goto label_34b21c;
        }
    }
    ctx->pc = 0x34B1CCu;
    // 0x34b1cc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34b1ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34b1d0: 0x8c424378  lw          $v0, 0x4378($v0)
    ctx->pc = 0x34b1d0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x34b1d4: 0x5440000b  bnel        $v0, $zero, . + 4 + (0xB << 2)
    ctx->pc = 0x34B1D4u;
    {
        const bool branch_taken_0x34b1d4 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x34b1d4) {
            ctx->pc = 0x34B1D8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34B1D4u;
            // 0x34b1d8: 0x2404013e  addiu       $a0, $zero, 0x13E (Delay Slot)
            SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34B204u;
            goto label_34b204;
        }
    }
    ctx->pc = 0x34B1DCu;
    // 0x34b1dc: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x34b1dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x34b1e0: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x34B1E0u;
    SET_GPR_U32(ctx, 31, 0x34B1E8u);
    ctx->pc = 0x34B1E4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B1E0u;
    // 0x34b1e4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x34B1E0u, 0x34B1E8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B1E8u;
label_34b1e8:
    // 0x34b1e8: 0x3c040034  lui         $a0, 0x34
    ctx->pc = 0x34b1e8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)52 << 16));
    // 0x34b1ec: 0x3c050034  lui         $a1, 0x34
    ctx->pc = 0x34b1ecu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)52 << 16));
    // 0x34b1f0: 0x24847010  addiu       $a0, $a0, 0x7010
    ctx->pc = 0x34b1f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 28688));
    // 0x34b1f4: 0xc0558d4  jal         func_156350
    ctx->pc = 0x34B1F4u;
    SET_GPR_U32(ctx, 31, 0x34B1FCu);
    ctx->pc = 0x34B1F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B1F4u;
    // 0x34b1f8: 0x24a565e0  addiu       $a1, $a1, 0x65E0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 26080));
    ctx->in_delay_slot = false;
    ctx->pc = 0x156350u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x156350u, 0x34B1F4u, 0x34B1FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B1FCu;
label_34b1fc:
    // 0x34b1fc: 0x10000006  b           . + 4 + (0x6 << 2)
    ctx->pc = 0x34B1FCu;
    {
        const bool branch_taken_0x34b1fc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b1fc) {
            ctx->pc = 0x34B218u;
            goto label_34b218;
        }
    }
    ctx->pc = 0x34B204u;
label_34b204:
    // 0x34b204: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x34B204u;
    SET_GPR_U32(ctx, 31, 0x34B20Cu);
    ctx->pc = 0x34B208u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B204u;
    // 0x34b208: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x34B204u, 0x34B20Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B20Cu;
label_34b20c:
    // 0x34b20c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34b20cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34b210: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34B210u;
    SET_GPR_U32(ctx, 31, 0x34B218u);
    ctx->pc = 0x34B214u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B210u;
    // 0x34b214: 0x24848830  addiu       $a0, $a0, -0x77D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936624));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x34B210u, 0x34B218u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B218u;
label_34b218:
    // 0x34b218: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34b218u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34b21c:
    // 0x34b21c: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34b21cu;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b220: 0x3e00008  jr          $ra
    ctx->pc = 0x34B220u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B224u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B220u;
        // 0x34b224: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B220u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B228u;
    // 0x34b228: 0x0  nop
    ctx->pc = 0x34b228u;
    // NOP
    // 0x34b22c: 0x0  nop
    ctx->pc = 0x34b22cu;
    // NOP
    // 0x34b230: 0x27bdffc0  addiu       $sp, $sp, -0x40
    ctx->pc = 0x34b230u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967232));
    // 0x34b234: 0xffbf0030  sd          $ra, 0x30($sp)
    ctx->pc = 0x34b234u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 48), GPR_U64(ctx, 31));
    // 0x34b238: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34b238u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34b23c: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34b23cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34b240: 0xc082918  jal         func_20A460
    ctx->pc = 0x34B240u;
    SET_GPR_U32(ctx, 31, 0x34B248u);
    ctx->pc = 0x34B244u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B240u;
    // 0x34b244: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A460u, 0x34B240u, 0x34B248u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B248u;
label_34b248:
    // 0x34b248: 0x3c0201df  lui         $v0, 0x1DF
    ctx->pc = 0x34b248u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)479 << 16));
    // 0x34b24c: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x34b24cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x34b250: 0x8c42dd90  lw          $v0, -0x2270($v0)
    ctx->pc = 0x34b250u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 4294958480)));
    // 0x34b254: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x34b254u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x34b258: 0x24a57720  addiu       $a1, $a1, 0x7720
    ctx->pc = 0x34b258u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 30496));
    // 0x34b25c: 0x24c67b50  addiu       $a2, $a2, 0x7B50
    ctx->pc = 0x34b25cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 31568));
    // 0x34b260: 0xc083a44  jal         func_20E910
    ctx->pc = 0x34B260u;
    SET_GPR_U32(ctx, 31, 0x34B268u);
    ctx->pc = 0x34B264u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B260u;
    // 0x34b264: 0x24440004  addiu       $a0, $v0, 0x4 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E910u, 0x34B260u, 0x34B268u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B268u;
label_34b268:
    // 0x34b268: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x34b268u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x34b26c: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x34b26cu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x34b270: 0x24847720  addiu       $a0, $a0, 0x7720
    ctx->pc = 0x34b270u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 30496));
    // 0x34b274: 0xc0838c4  jal         func_20E310
    ctx->pc = 0x34B274u;
    SET_GPR_U32(ctx, 31, 0x34B27Cu);
    ctx->pc = 0x34B278u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B274u;
    // 0x34b278: 0x24a57950  addiu       $a1, $a1, 0x7950 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31056));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E310u, 0x34B274u, 0x34B27Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B27Cu;
label_34b27c:
    // 0x34b27c: 0x3c1101de  lui         $s1, 0x1DE
    ctx->pc = 0x34b27cu;
    SET_GPR_S32(ctx, 17, (int32_t)((uint32_t)478 << 16));
    // 0x34b280: 0x3c10003d  lui         $s0, 0x3D
    ctx->pc = 0x34b280u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)61 << 16));
    // 0x34b284: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x34b284u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b288: 0x263142c0  addiu       $s1, $s1, 0x42C0
    ctx->pc = 0x34b288u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 17088));
    // 0x34b28c: 0x26107c30  addiu       $s0, $s0, 0x7C30
    ctx->pc = 0x34b28cu;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 31792));
label_34b290:
    // 0x34b290: 0x8e240000  lw          $a0, 0x0($s1)
    ctx->pc = 0x34b290u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 17), 0)));
    // 0x34b294: 0x4800008  bltz        $a0, . + 4 + (0x8 << 2)
    ctx->pc = 0x34B294u;
    {
        const bool branch_taken_0x34b294 = (GPR_S32(ctx, 4) < 0);
        if (branch_taken_0x34b294) {
            ctx->pc = 0x34B2B8u;
            goto label_34b2b8;
        }
    }
    ctx->pc = 0x34B29Cu;
    // 0x34b29c: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x34b29cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x34b2a0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x34b2a0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34b2a4: 0x24c67720  addiu       $a2, $a2, 0x7720
    ctx->pc = 0x34b2a4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30496));
    // 0x34b2a8: 0xc083940  jal         func_20E500
    ctx->pc = 0x34B2A8u;
    SET_GPR_U32(ctx, 31, 0x34B2B0u);
    ctx->pc = 0x34B2ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B2A8u;
    // 0x34b2ac: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E500u, 0x34B2A8u, 0x34B2B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B2B0u;
label_34b2b0:
    // 0x34b2b0: 0x10000007  b           . + 4 + (0x7 << 2)
    ctx->pc = 0x34B2B0u;
    {
        const bool branch_taken_0x34b2b0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b2b0) {
            ctx->pc = 0x34B2D0u;
            goto label_34b2d0;
        }
    }
    ctx->pc = 0x34B2B8u;
label_34b2b8:
    // 0x34b2b8: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x34b2b8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x34b2bc: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x34b2bcu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b2c0: 0x24050004  addiu       $a1, $zero, 0x4
    ctx->pc = 0x34b2c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34b2c4: 0x24c67720  addiu       $a2, $a2, 0x7720
    ctx->pc = 0x34b2c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 30496));
    // 0x34b2c8: 0xc083940  jal         func_20E500
    ctx->pc = 0x34B2C8u;
    SET_GPR_U32(ctx, 31, 0x34B2D0u);
    ctx->pc = 0x34B2CCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B2C8u;
    // 0x34b2cc: 0x200382d  daddu       $a3, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E500u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E500u, 0x34B2C8u, 0x34B2D0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B2D0u;
label_34b2d0:
    // 0x34b2d0: 0x26520001  addiu       $s2, $s2, 0x1
    ctx->pc = 0x34b2d0u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 1));
    // 0x34b2d4: 0x2a430006  slti        $v1, $s2, 0x6
    ctx->pc = 0x34b2d4u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)(int32_t)6) ? 1 : 0);
    // 0x34b2d8: 0x26310004  addiu       $s1, $s1, 0x4
    ctx->pc = 0x34b2d8u;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 4));
    // 0x34b2dc: 0x1460ffec  bnez        $v1, . + 4 + (-0x14 << 2)
    ctx->pc = 0x34B2DCu;
    {
        const bool branch_taken_0x34b2dc = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34B2E0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B2DCu;
        // 0x34b2e0: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b2dc) {
            ctx->pc = 0x34B290u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34b290;
        }
    }
    ctx->pc = 0x34B2E4u;
    // 0x34b2e4: 0xdfbf0030  ld          $ra, 0x30($sp)
    ctx->pc = 0x34b2e4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34b2e8: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34b2e8u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34b2ec: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34b2ecu;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34b2f0: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34b2f0u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b2f4: 0x3e00008  jr          $ra
    ctx->pc = 0x34B2F4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B2F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B2F4u;
        // 0x34b2f8: 0x27bd0040  addiu       $sp, $sp, 0x40 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B2F4u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B2FCu;
    // 0x34b2fc: 0x0  nop
    ctx->pc = 0x34b2fcu;
    // NOP
    // 0x34b300: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34b300u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34b304: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x34b304u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x34b308: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34b308u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34b30c: 0x24844420  addiu       $a0, $a0, 0x4420
    ctx->pc = 0x34b30cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 17440));
    // 0x34b310: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34b310u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34b314: 0x3c1001df  lui         $s0, 0x1DF
    ctx->pc = 0x34b314u;
    SET_GPR_S32(ctx, 16, (int32_t)((uint32_t)479 << 16));
    // 0x34b318: 0x2610ddc0  addiu       $s0, $s0, -0x2240
    ctx->pc = 0x34b318u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 4294958528));
    // 0x34b31c: 0xc04a7dc  jal         func_129F70
    ctx->pc = 0x34B31Cu;
    SET_GPR_U32(ctx, 31, 0x34B324u);
    ctx->pc = 0x34B320u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B31Cu;
    // 0x34b320: 0x2605000c  addiu       $a1, $s0, 0xC (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 16), 12));
    ctx->in_delay_slot = false;
    ctx->pc = 0x129F70u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x129F70u, 0x34B31Cu, 0x34B324u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B324u;
label_34b324:
    // 0x34b324: 0x8e03004c  lw          $v1, 0x4C($s0)
    ctx->pc = 0x34b324u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 16), 76)));
    // 0x34b328: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34b328u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34b32c: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34b32cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34b330: 0x2484e010  addiu       $a0, $a0, -0x1FF0
    ctx->pc = 0x34b330u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294959120));
    // 0x34b334: 0xc082674  jal         func_2099D0
    ctx->pc = 0x34B334u;
    SET_GPR_U32(ctx, 31, 0x34B33Cu);
    ctx->pc = 0x34B338u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B334u;
    // 0x34b338: 0xac434520  sw          $v1, 0x4520($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 17696), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099D0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099D0u, 0x34B334u, 0x34B33Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B33Cu;
label_34b33c:
    // 0x34b33c: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34b33cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34b340: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34b340u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b344: 0x3e00008  jr          $ra
    ctx->pc = 0x34B344u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B348u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B344u;
        // 0x34b348: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B344u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B34Cu;
    // 0x34b34c: 0x0  nop
    ctx->pc = 0x34b34cu;
    // NOP
    // 0x34b350: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34b350u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34b354: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34b354u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34b358: 0xc082918  jal         func_20A460
    ctx->pc = 0x34B358u;
    SET_GPR_U32(ctx, 31, 0x34B360u);
    ctx->pc = 0x20A460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A460u, 0x34B358u, 0x34B360u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B360u;
label_34b360:
    // 0x34b360: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34b360u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34b364: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x34b364u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x34b368: 0x8c444378  lw          $a0, 0x4378($v0)
    ctx->pc = 0x34b368u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x34b36c: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x34b36cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x34b370: 0x24a57c90  addiu       $a1, $a1, 0x7C90
    ctx->pc = 0x34b370u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 31888));
    // 0x34b374: 0xc083a44  jal         func_20E910
    ctx->pc = 0x34B374u;
    SET_GPR_U32(ctx, 31, 0x34B37Cu);
    ctx->pc = 0x34B378u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B374u;
    // 0x34b378: 0x24c67e50  addiu       $a2, $a2, 0x7E50 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E910u, 0x34B374u, 0x34B37Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B37Cu;
label_34b37c:
    // 0x34b37c: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x34b37cu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x34b380: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x34b380u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x34b384: 0x24847c90  addiu       $a0, $a0, 0x7C90
    ctx->pc = 0x34b384u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 31888));
    // 0x34b388: 0xc0838c4  jal         func_20E310
    ctx->pc = 0x34B388u;
    SET_GPR_U32(ctx, 31, 0x34B390u);
    ctx->pc = 0x34B38Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B388u;
    // 0x34b38c: 0x24a57d90  addiu       $a1, $a1, 0x7D90 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E310u, 0x34B388u, 0x34B390u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B390u;
label_34b390:
    // 0x34b390: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34b390u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b394: 0x3e00008  jr          $ra
    ctx->pc = 0x34B394u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B398u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B394u;
        // 0x34b398: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B394u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B39Cu;
    // 0x34b39c: 0x0  nop
    ctx->pc = 0x34b39cu;
    // NOP
    // 0x34b3a0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34b3a0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34b3a4: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34b3a4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34b3a8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34b3a8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34b3ac: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34b3acu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34b3b0: 0x9443be90  lhu         $v1, -0x4170($v0)
    ctx->pc = 0x34b3b0u;
    SET_GPR_U32(ctx, 3, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950544)));
    // 0x34b3b4: 0x2484b350  addiu       $a0, $a0, -0x4CB0
    ctx->pc = 0x34b3b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947664));
    // 0x34b3b8: 0x24050001  addiu       $a1, $zero, 0x1
    ctx->pc = 0x34b3b8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b3bc: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34b3bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34b3c0: 0xc082678  jal         func_2099E0
    ctx->pc = 0x34B3C0u;
    SET_GPR_U32(ctx, 31, 0x34B3C8u);
    ctx->pc = 0x34B3C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B3C0u;
    // 0x34b3c4: 0xac434378  sw          $v1, 0x4378($v0) (Delay Slot)
    WRITE32(ADD32(GPR_U32(ctx, 2), 17272), GPR_U32(ctx, 3));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x34B3C0u, 0x34B3C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B3C8u;
label_34b3c8:
    // 0x34b3c8: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34b3c8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34b3cc: 0xc0d0d18  jal         func_343460
    ctx->pc = 0x34B3CCu;
    SET_GPR_U32(ctx, 31, 0x34B3D4u);
    ctx->pc = 0x34B3D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B3CCu;
    // 0x34b3d0: 0x2484b420  addiu       $a0, $a0, -0x4BE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343460u, 0x34B3CCu, 0x34B3D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B3D4u;
label_34b3d4:
    // 0x34b3d4: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34b3d4u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b3d8: 0x3e00008  jr          $ra
    ctx->pc = 0x34B3D8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B3DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B3D8u;
        // 0x34b3dc: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B3D8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B3E0u;
    // 0x34b3e0: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34b3e0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34b3e4: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34b3e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34b3e8: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34b3e8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34b3ec: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34b3ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34b3f0: 0xac404378  sw          $zero, 0x4378($v0)
    ctx->pc = 0x34b3f0u;
    WRITE32(ADD32(GPR_U32(ctx, 2), 17272), GPR_U32(ctx, 0));
    // 0x34b3f4: 0x2484b350  addiu       $a0, $a0, -0x4CB0
    ctx->pc = 0x34b3f4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947664));
    // 0x34b3f8: 0xc082678  jal         func_2099E0
    ctx->pc = 0x34B3F8u;
    SET_GPR_U32(ctx, 31, 0x34B400u);
    ctx->pc = 0x34B3FCu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B3F8u;
    // 0x34b3fc: 0x24050001  addiu       $a1, $zero, 0x1 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    ctx->in_delay_slot = false;
    ctx->pc = 0x2099E0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x2099E0u, 0x34B3F8u, 0x34B400u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B400u;
label_34b400:
    // 0x34b400: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34b400u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34b404: 0xc0d0d18  jal         func_343460
    ctx->pc = 0x34B404u;
    SET_GPR_U32(ctx, 31, 0x34B40Cu);
    ctx->pc = 0x34B408u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B404u;
    // 0x34b408: 0x2484b420  addiu       $a0, $a0, -0x4BE0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294947872));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343460u, 0x34B404u, 0x34B40Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B40Cu;
label_34b40c:
    // 0x34b40c: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34b40cu;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b410: 0x3e00008  jr          $ra
    ctx->pc = 0x34B410u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B414u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B410u;
        // 0x34b414: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B410u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B418u;
    // 0x34b418: 0x0  nop
    ctx->pc = 0x34b418u;
    // NOP
    // 0x34b41c: 0x0  nop
    ctx->pc = 0x34b41cu;
    // NOP
    // 0x34b420: 0x27bdffe0  addiu       $sp, $sp, -0x20
    ctx->pc = 0x34b420u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967264));
    // 0x34b424: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x34b424u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34b428: 0xffbf0010  sd          $ra, 0x10($sp)
    ctx->pc = 0x34b428u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 31));
    // 0x34b42c: 0x24050002  addiu       $a1, $zero, 0x2
    ctx->pc = 0x34b42cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34b430: 0x302d  daddu       $a2, $zero, $zero
    ctx->pc = 0x34b430u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b434: 0xc068d08  jal         func_1A3420
    ctx->pc = 0x34B434u;
    SET_GPR_U32(ctx, 31, 0x34B43Cu);
    ctx->pc = 0x34B438u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B434u;
    // 0x34b438: 0x7fb00000  sq          $s0, 0x0($sp) (Delay Slot)
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1A3420u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1A3420u, 0x34B434u, 0x34B43Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B43Cu;
label_34b43c:
    // 0x34b43c: 0x3050ffff  andi        $s0, $v0, 0xFFFF
    ctx->pc = 0x34b43cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)65535);
    // 0x34b440: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x34b440u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34b444: 0x3c0201de  lui         $v0, 0x1DE
    ctx->pc = 0x34b444u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)478 << 16));
    // 0x34b448: 0x90454378  lbu         $a1, 0x4378($v0)
    ctx->pc = 0x34b448u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 17272)));
    // 0x34b44c: 0xc0d0abc  jal         func_342AF0
    ctx->pc = 0x34B44Cu;
    SET_GPR_U32(ctx, 31, 0x34B454u);
    ctx->pc = 0x34B450u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B44Cu;
    // 0x34b450: 0x200302d  daddu       $a2, $s0, $zero (Delay Slot)
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x342AF0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x342AF0u, 0x34B44Cu, 0x34B454u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B454u;
label_34b454:
    // 0x34b454: 0x304500ff  andi        $a1, $v0, 0xFF
    ctx->pc = 0x34b454u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x34b458: 0x3c0401de  lui         $a0, 0x1DE
    ctx->pc = 0x34b458u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)478 << 16));
    // 0x34b45c: 0x3210ffff  andi        $s0, $s0, 0xFFFF
    ctx->pc = 0x34b45cu;
    SET_GPR_U64(ctx, 16, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)65535);
    // 0x34b460: 0xac854378  sw          $a1, 0x4378($a0)
    ctx->pc = 0x34b460u;
    WRITE32(ADD32(GPR_U32(ctx, 4), 17272), GPR_U32(ctx, 5));
    // 0x34b464: 0x3c0301e0  lui         $v1, 0x1E0
    ctx->pc = 0x34b464u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)480 << 16));
    // 0x34b468: 0x32042000  andi        $a0, $s0, 0x2000
    ctx->pc = 0x34b468u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)8192);
    // 0x34b46c: 0x10800020  beqz        $a0, . + 4 + (0x20 << 2)
    ctx->pc = 0x34B46Cu;
    {
        const bool branch_taken_0x34b46c = (GPR_U64(ctx, 4) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B470u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B46Cu;
        // 0x34b470: 0xa465be90  sh          $a1, -0x4170($v1) (Delay Slot)
        WRITE16(ADD32(GPR_U32(ctx, 3), 4294950544), (uint16_t)GPR_U32(ctx, 5));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b46c) {
            ctx->pc = 0x34B4F0u;
            goto label_34b4f0;
        }
    }
    ctx->pc = 0x34B474u;
    // 0x34b474: 0x24040126  addiu       $a0, $zero, 0x126
    ctx->pc = 0x34b474u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 294));
    // 0x34b478: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x34B478u;
    SET_GPR_U32(ctx, 31, 0x34B480u);
    ctx->pc = 0x34B47Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B478u;
    // 0x34b47c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x34B478u, 0x34B480u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B480u;
label_34b480:
    // 0x34b480: 0x3c0301de  lui         $v1, 0x1DE
    ctx->pc = 0x34b480u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)478 << 16));
    // 0x34b484: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x34b484u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34b488: 0x8c654378  lw          $a1, 0x4378($v1)
    ctx->pc = 0x34b488u;
    SET_GPR_S32(ctx, 5, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 17272)));
    // 0x34b48c: 0x10a40015  beq         $a1, $a0, . + 4 + (0x15 << 2)
    ctx->pc = 0x34B48Cu;
    {
        const bool branch_taken_0x34b48c = (GPR_U64(ctx, 5) == GPR_U64(ctx, 4));
        if (branch_taken_0x34b48c) {
            ctx->pc = 0x34B4E4u;
            goto label_34b4e4;
        }
    }
    ctx->pc = 0x34B494u;
    // 0x34b494: 0x24030002  addiu       $v1, $zero, 0x2
    ctx->pc = 0x34b494u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 2));
    // 0x34b498: 0x10a3000d  beq         $a1, $v1, . + 4 + (0xD << 2)
    ctx->pc = 0x34B498u;
    {
        const bool branch_taken_0x34b498 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x34b498) {
            ctx->pc = 0x34B4D0u;
            goto label_34b4d0;
        }
    }
    ctx->pc = 0x34B4A0u;
    // 0x34b4a0: 0x24030001  addiu       $v1, $zero, 0x1
    ctx->pc = 0x34b4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
    // 0x34b4a4: 0x10a30005  beq         $a1, $v1, . + 4 + (0x5 << 2)
    ctx->pc = 0x34B4A4u;
    {
        const bool branch_taken_0x34b4a4 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 3));
        if (branch_taken_0x34b4a4) {
            ctx->pc = 0x34B4BCu;
            goto label_34b4bc;
        }
    }
    ctx->pc = 0x34B4ACu;
    // 0x34b4ac: 0x10a00003  beqz        $a1, . + 4 + (0x3 << 2)
    ctx->pc = 0x34B4ACu;
    {
        const bool branch_taken_0x34b4ac = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b4ac) {
            ctx->pc = 0x34B4BCu;
            goto label_34b4bc;
        }
    }
    ctx->pc = 0x34B4B4u;
    // 0x34b4b4: 0x1000000f  b           . + 4 + (0xF << 2)
    ctx->pc = 0x34B4B4u;
    {
        const bool branch_taken_0x34b4b4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x34B4B8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B4B4u;
        // 0x34b4b8: 0x32034000  andi        $v1, $s0, 0x4000 (Delay Slot)
        SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16384);
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b4b4) {
            ctx->pc = 0x34B4F4u;
            goto label_34b4f4;
        }
    }
    ctx->pc = 0x34B4BCu;
label_34b4bc:
    // 0x34b4bc: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34b4bcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34b4c0: 0xc0d0d60  jal         func_343580
    ctx->pc = 0x34B4C0u;
    SET_GPR_U32(ctx, 31, 0x34B4C8u);
    ctx->pc = 0x34B4C4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B4C0u;
    // 0x34b4c4: 0x2484c240  addiu       $a0, $a0, -0x3DC0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294951488));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343580u, 0x34B4C0u, 0x34B4C8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B4C8u;
label_34b4c8:
    // 0x34b4c8: 0x10000009  b           . + 4 + (0x9 << 2)
    ctx->pc = 0x34B4C8u;
    {
        const bool branch_taken_0x34b4c8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b4c8) {
            ctx->pc = 0x34B4F0u;
            goto label_34b4f0;
        }
    }
    ctx->pc = 0x34B4D0u;
label_34b4d0:
    // 0x34b4d0: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34b4d0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34b4d4: 0xc0d0d60  jal         func_343580
    ctx->pc = 0x34B4D4u;
    SET_GPR_U32(ctx, 31, 0x34B4DCu);
    ctx->pc = 0x34B4D8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B4D4u;
    // 0x34b4d8: 0x2484c870  addiu       $a0, $a0, -0x3790 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953072));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343580u, 0x34B4D4u, 0x34B4DCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B4DCu;
label_34b4dc:
    // 0x34b4dc: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x34B4DCu;
    {
        const bool branch_taken_0x34b4dc = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b4dc) {
            ctx->pc = 0x34B4F0u;
            goto label_34b4f0;
        }
    }
    ctx->pc = 0x34B4E4u;
label_34b4e4:
    // 0x34b4e4: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34b4e4u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34b4e8: 0xc0d0d60  jal         func_343580
    ctx->pc = 0x34B4E8u;
    SET_GPR_U32(ctx, 31, 0x34B4F0u);
    ctx->pc = 0x34B4ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B4E8u;
    // 0x34b4ec: 0x2484cb30  addiu       $a0, $a0, -0x34D0 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294953776));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343580u, 0x34B4E8u, 0x34B4F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B4F0u;
label_34b4f0:
    // 0x34b4f0: 0x32034000  andi        $v1, $s0, 0x4000
    ctx->pc = 0x34b4f0u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 16) & (uint64_t)(uint16_t)16384);
label_34b4f4:
    // 0x34b4f4: 0x50600008  beql        $v1, $zero, . + 4 + (0x8 << 2)
    ctx->pc = 0x34B4F4u;
    {
        const bool branch_taken_0x34b4f4 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b4f4) {
            ctx->pc = 0x34B4F8u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34B4F4u;
            // 0x34b4f8: 0xdfbf0010  ld          $ra, 0x10($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34B518u;
            goto label_34b518;
        }
    }
    ctx->pc = 0x34B4FCu;
    // 0x34b4fc: 0x2404013e  addiu       $a0, $zero, 0x13E
    ctx->pc = 0x34b4fcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 318));
    // 0x34b500: 0xc0538fc  jal         func_14E3F0
    ctx->pc = 0x34B500u;
    SET_GPR_U32(ctx, 31, 0x34B508u);
    ctx->pc = 0x34B504u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B500u;
    // 0x34b504: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x14E3F0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x14E3F0u, 0x34B500u, 0x34B508u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B508u;
label_34b508:
    // 0x34b508: 0x3c040035  lui         $a0, 0x35
    ctx->pc = 0x34b508u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)53 << 16));
    // 0x34b50c: 0xc0d0d60  jal         func_343580
    ctx->pc = 0x34B50Cu;
    SET_GPR_U32(ctx, 31, 0x34B514u);
    ctx->pc = 0x34B510u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B50Cu;
    // 0x34b510: 0x248487c0  addiu       $a0, $a0, -0x7840 (Delay Slot)
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294936512));
    ctx->in_delay_slot = false;
    ctx->pc = 0x343580u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x343580u, 0x34B50Cu, 0x34B514u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B514u;
label_34b514:
    // 0x34b514: 0xdfbf0010  ld          $ra, 0x10($sp)
    ctx->pc = 0x34b514u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 16)));
label_34b518:
    // 0x34b518: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34b518u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b51c: 0x3e00008  jr          $ra
    ctx->pc = 0x34B51Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B520u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B51Cu;
        // 0x34b520: 0x27bd0020  addiu       $sp, $sp, 0x20 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B51Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B524u;
    // 0x34b524: 0x0  nop
    ctx->pc = 0x34b524u;
    // NOP
    // 0x34b528: 0x0  nop
    ctx->pc = 0x34b528u;
    // NOP
    // 0x34b52c: 0x0  nop
    ctx->pc = 0x34b52cu;
    // NOP
    // 0x34b530: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34b530u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34b534: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34b534u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34b538: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x34b538u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x34b53c: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x34b53cu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x34b540: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34b540u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34b544: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34b544u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34b548: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34b548u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34b54c: 0xc082918  jal         func_20A460
    ctx->pc = 0x34B54Cu;
    SET_GPR_U32(ctx, 31, 0x34B554u);
    ctx->pc = 0x34B550u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B54Cu;
    // 0x34b550: 0x9450be92  lhu         $s0, -0x416E($v0) (Delay Slot)
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950546)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A460u, 0x34B54Cu, 0x34B554u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B554u;
label_34b554:
    // 0x34b554: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x34b554u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x34b558: 0xc082998  jal         func_20A660
    ctx->pc = 0x34B558u;
    SET_GPR_U32(ctx, 31, 0x34B560u);
    ctx->pc = 0x34B55Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B558u;
    // 0x34b55c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A660u, 0x34B558u, 0x34B560u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B560u;
label_34b560:
    // 0x34b560: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x34b560u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x34b564: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x34b564u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x34b568: 0x24847ec0  addiu       $a0, $a0, 0x7EC0
    ctx->pc = 0x34b568u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32448));
    // 0x34b56c: 0xc0838c4  jal         func_20E310
    ctx->pc = 0x34B56Cu;
    SET_GPR_U32(ctx, 31, 0x34B574u);
    ctx->pc = 0x34B570u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B56Cu;
    // 0x34b570: 0x24a580f0  addiu       $a1, $a1, -0x7F10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294934768));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E310u, 0x34B56Cu, 0x34B574u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B574u;
label_34b574:
    // 0x34b574: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x34b574u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x34b578: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x34b578u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x34b57c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34b57cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b580: 0x24a57ec0  addiu       $a1, $a1, 0x7EC0
    ctx->pc = 0x34b580u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32448));
    // 0x34b584: 0xc083a44  jal         func_20E910
    ctx->pc = 0x34B584u;
    SET_GPR_U32(ctx, 31, 0x34B58Cu);
    ctx->pc = 0x34B588u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B584u;
    // 0x34b588: 0x24c68180  addiu       $a2, $a2, -0x7E80 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294934912));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E910u, 0x34B584u, 0x34B58Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B58Cu;
label_34b58c:
    // 0x34b58c: 0x3c07003d  lui         $a3, 0x3D
    ctx->pc = 0x34b58cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)61 << 16));
    // 0x34b590: 0x3c08003e  lui         $t0, 0x3E
    ctx->pc = 0x34b590u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)62 << 16));
    // 0x34b594: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x34b594u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x34b598: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34b598u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b59c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x34b59cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34b5a0: 0x24e77ec0  addiu       $a3, $a3, 0x7EC0
    ctx->pc = 0x34b5a0u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32448));
    // 0x34b5a4: 0xc0838dc  jal         func_20E370
    ctx->pc = 0x34B5A4u;
    SET_GPR_U32(ctx, 31, 0x34B5ACu);
    ctx->pc = 0x34B5A8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B5A4u;
    // 0x34b5a8: 0x25088200  addiu       $t0, $t0, -0x7E00 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294935040));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E370u, 0x34B5A4u, 0x34B5ACu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B5ACu;
label_34b5ac:
    // 0x34b5ac: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x34b5acu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b5b0: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x34b5b0u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b5b4: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x34b5b4u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b5b8: 0x24100068  addiu       $s0, $zero, 0x68
    ctx->pc = 0x34b5b8u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_34b5bc:
    // 0x34b5bc: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34b5bcu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x34b5c0: 0x8c634070  lw          $v1, 0x4070($v1)
    ctx->pc = 0x34b5c0u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16496)));
    // 0x34b5c4: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x34b5c4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x34b5c8: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x34b5c8u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x34b5cc: 0x1060002c  beqz        $v1, . + 4 + (0x2C << 2)
    ctx->pc = 0x34B5CCu;
    {
        const bool branch_taken_0x34b5cc = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b5cc) {
            ctx->pc = 0x34B680u;
            goto label_34b680;
        }
    }
    ctx->pc = 0x34B5D4u;
    // 0x34b5d4: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x34b5d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x34b5d8: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x34B5D8u;
    {
        const bool branch_taken_0x34b5d8 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b5d8) {
            ctx->pc = 0x34B600u;
            goto label_34b600;
        }
    }
    ctx->pc = 0x34B5E0u;
    // 0x34b5e0: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x34b5e0u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x34b5e4: 0x3c07003e  lui         $a3, 0x3E
    ctx->pc = 0x34b5e4u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)62 << 16));
    // 0x34b5e8: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x34b5e8u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b5ec: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x34b5ecu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b5f0: 0x24c67ec0  addiu       $a2, $a2, 0x7EC0
    ctx->pc = 0x34b5f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32448));
    // 0x34b5f4: 0xc083910  jal         func_20E440
    ctx->pc = 0x34B5F4u;
    SET_GPR_U32(ctx, 31, 0x34B5FCu);
    ctx->pc = 0x34B5F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B5F4u;
    // 0x34b5f8: 0x24e78230  addiu       $a3, $a3, -0x7DD0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294935088));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E440u, 0x34B5F4u, 0x34B5FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B5FCu;
label_34b5fc:
    // 0x34b5fc: 0x0  nop
    ctx->pc = 0x34b5fcu;
    // NOP
label_34b600:
    // 0x34b600: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34b600u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34b604: 0x8c424070  lw          $v0, 0x4070($v0)
    ctx->pc = 0x34b604u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16496)));
    // 0x34b608: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x34b608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34b60c: 0x24050060  addiu       $a1, $zero, 0x60
    ctx->pc = 0x34b60cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 96));
    // 0x34b610: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x34b610u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b614: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x34b614u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x34b618: 0xc083788  jal         func_20DE20
    ctx->pc = 0x34B618u;
    SET_GPR_U32(ctx, 31, 0x34B620u);
    ctx->pc = 0x34B61Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B618u;
    // 0x34b61c: 0x24470078  addiu       $a3, $v0, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DE20u, 0x34B618u, 0x34B620u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B620u;
label_34b620:
    // 0x34b620: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34b620u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34b624: 0x240400b0  addiu       $a0, $zero, 0xB0
    ctx->pc = 0x34b624u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 176));
    // 0x34b628: 0x8c424070  lw          $v0, 0x4070($v0)
    ctx->pc = 0x34b628u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16496)));
    // 0x34b62c: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x34b62cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b630: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x34b630u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x34b634: 0xc083768  jal         func_20DDA0
    ctx->pc = 0x34B634u;
    SET_GPR_U32(ctx, 31, 0x34B63Cu);
    ctx->pc = 0x34B638u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B634u;
    // 0x34b638: 0x24460058  addiu       $a2, $v0, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DDA0u, 0x34B634u, 0x34B63Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B63Cu;
label_34b63c:
    // 0x34b63c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34b63cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34b640: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x34b640u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34b644: 0x8c424070  lw          $v0, 0x4070($v0)
    ctx->pc = 0x34b644u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16496)));
    // 0x34b648: 0x24050150  addiu       $a1, $zero, 0x150
    ctx->pc = 0x34b648u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 336));
    // 0x34b64c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x34b64cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b650: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x34b650u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x34b654: 0xc083788  jal         func_20DE20
    ctx->pc = 0x34B654u;
    SET_GPR_U32(ctx, 31, 0x34B65Cu);
    ctx->pc = 0x34B658u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B654u;
    // 0x34b658: 0x244700f8  addiu       $a3, $v0, 0xF8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 248));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DE20u, 0x34B654u, 0x34B65Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B65Cu;
label_34b65c:
    // 0x34b65c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34b65cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34b660: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x34b660u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34b664: 0x8c424070  lw          $v0, 0x4070($v0)
    ctx->pc = 0x34b664u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16496)));
    // 0x34b668: 0x240501c0  addiu       $a1, $zero, 0x1C0
    ctx->pc = 0x34b668u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 448));
    // 0x34b66c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x34b66cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b670: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x34b670u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x34b674: 0xc083788  jal         func_20DE20
    ctx->pc = 0x34B674u;
    SET_GPR_U32(ctx, 31, 0x34B67Cu);
    ctx->pc = 0x34B678u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B674u;
    // 0x34b678: 0x24470098  addiu       $a3, $v0, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DE20u, 0x34B674u, 0x34B67Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B67Cu;
label_34b67c:
    // 0x34b67c: 0x0  nop
    ctx->pc = 0x34b67cu;
    // NOP
label_34b680:
    // 0x34b680: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x34b680u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x34b684: 0x2a630014  slti        $v1, $s3, 0x14
    ctx->pc = 0x34b684u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x34b688: 0x26520118  addiu       $s2, $s2, 0x118
    ctx->pc = 0x34b688u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 280));
    // 0x34b68c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x34b68cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x34b690: 0x1460ffca  bnez        $v1, . + 4 + (-0x36 << 2)
    ctx->pc = 0x34B690u;
    {
        const bool branch_taken_0x34b690 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34B694u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B690u;
        // 0x34b694: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b690) {
            ctx->pc = 0x34B5BCu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34b5bc;
        }
    }
    ctx->pc = 0x34B698u;
    // 0x34b698: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x34b698u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34b69c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34b69cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34b6a0: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34b6a0u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34b6a4: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34b6a4u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34b6a8: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34b6a8u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b6ac: 0x3e00008  jr          $ra
    ctx->pc = 0x34B6ACu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B6B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B6ACu;
        // 0x34b6b0: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B6ACu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B6B4u;
    // 0x34b6b4: 0x0  nop
    ctx->pc = 0x34b6b4u;
    // NOP
    // 0x34b6b8: 0x0  nop
    ctx->pc = 0x34b6b8u;
    // NOP
    // 0x34b6bc: 0x0  nop
    ctx->pc = 0x34b6bcu;
    // NOP
    // 0x34b6c0: 0x27bdffb0  addiu       $sp, $sp, -0x50
    ctx->pc = 0x34b6c0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967216));
    // 0x34b6c4: 0x3c0201e0  lui         $v0, 0x1E0
    ctx->pc = 0x34b6c4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)480 << 16));
    // 0x34b6c8: 0xffbf0040  sd          $ra, 0x40($sp)
    ctx->pc = 0x34b6c8u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 64), GPR_U64(ctx, 31));
    // 0x34b6cc: 0x7fb30030  sq          $s3, 0x30($sp)
    ctx->pc = 0x34b6ccu;
    WRITE128(ADD32(GPR_U32(ctx, 29), 48), GPR_VEC(ctx, 19));
    // 0x34b6d0: 0x7fb20020  sq          $s2, 0x20($sp)
    ctx->pc = 0x34b6d0u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 32), GPR_VEC(ctx, 18));
    // 0x34b6d4: 0x7fb10010  sq          $s1, 0x10($sp)
    ctx->pc = 0x34b6d4u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 16), GPR_VEC(ctx, 17));
    // 0x34b6d8: 0x7fb00000  sq          $s0, 0x0($sp)
    ctx->pc = 0x34b6d8u;
    WRITE128(ADD32(GPR_U32(ctx, 29), 0), GPR_VEC(ctx, 16));
    // 0x34b6dc: 0xc082918  jal         func_20A460
    ctx->pc = 0x34B6DCu;
    SET_GPR_U32(ctx, 31, 0x34B6E4u);
    ctx->pc = 0x34B6E0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B6DCu;
    // 0x34b6e0: 0x9450be92  lhu         $s0, -0x416E($v0) (Delay Slot)
    SET_GPR_U32(ctx, 16, (uint16_t)READ16(ADD32(GPR_U32(ctx, 2), 4294950546)));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A460u, 0x34B6DCu, 0x34B6E4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B6E4u;
label_34b6e4:
    // 0x34b6e4: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x34b6e4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x34b6e8: 0xc082998  jal         func_20A660
    ctx->pc = 0x34B6E8u;
    SET_GPR_U32(ctx, 31, 0x34B6F0u);
    ctx->pc = 0x34B6ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B6E8u;
    // 0x34b6ec: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A660u, 0x34B6E8u, 0x34B6F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B6F0u;
label_34b6f0:
    // 0x34b6f0: 0x3c04003d  lui         $a0, 0x3D
    ctx->pc = 0x34b6f0u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)61 << 16));
    // 0x34b6f4: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x34b6f4u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x34b6f8: 0x24847ec0  addiu       $a0, $a0, 0x7EC0
    ctx->pc = 0x34b6f8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 32448));
    // 0x34b6fc: 0xc0838c4  jal         func_20E310
    ctx->pc = 0x34B6FCu;
    SET_GPR_U32(ctx, 31, 0x34B704u);
    ctx->pc = 0x34B700u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B6FCu;
    // 0x34b700: 0x24a58250  addiu       $a1, $a1, -0x7DB0 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E310u, 0x34B6FCu, 0x34B704u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B704u;
label_34b704:
    // 0x34b704: 0x3c05003d  lui         $a1, 0x3D
    ctx->pc = 0x34b704u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)61 << 16));
    // 0x34b708: 0x3c06003e  lui         $a2, 0x3E
    ctx->pc = 0x34b708u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)62 << 16));
    // 0x34b70c: 0x200202d  daddu       $a0, $s0, $zero
    ctx->pc = 0x34b70cu;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b710: 0x24a57ec0  addiu       $a1, $a1, 0x7EC0
    ctx->pc = 0x34b710u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 32448));
    // 0x34b714: 0xc083a44  jal         func_20E910
    ctx->pc = 0x34B714u;
    SET_GPR_U32(ctx, 31, 0x34B71Cu);
    ctx->pc = 0x34B718u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B714u;
    // 0x34b718: 0x24c68300  addiu       $a2, $a2, -0x7D00 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294935296));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E910u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E910u, 0x34B714u, 0x34B71Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B71Cu;
label_34b71c:
    // 0x34b71c: 0x3c07003d  lui         $a3, 0x3D
    ctx->pc = 0x34b71cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)61 << 16));
    // 0x34b720: 0x3c08003e  lui         $t0, 0x3E
    ctx->pc = 0x34b720u;
    SET_GPR_S32(ctx, 8, (int32_t)((uint32_t)62 << 16));
    // 0x34b724: 0x24040014  addiu       $a0, $zero, 0x14
    ctx->pc = 0x34b724u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 20));
    // 0x34b728: 0x282d  daddu       $a1, $zero, $zero
    ctx->pc = 0x34b728u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b72c: 0x24060010  addiu       $a2, $zero, 0x10
    ctx->pc = 0x34b72cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 16));
    // 0x34b730: 0x24e77ec0  addiu       $a3, $a3, 0x7EC0
    ctx->pc = 0x34b730u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 32448));
    // 0x34b734: 0xc0838dc  jal         func_20E370
    ctx->pc = 0x34B734u;
    SET_GPR_U32(ctx, 31, 0x34B73Cu);
    ctx->pc = 0x34B738u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B734u;
    // 0x34b738: 0x25088380  addiu       $t0, $t0, -0x7C80 (Delay Slot)
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4294935424));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E370u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E370u, 0x34B734u, 0x34B73Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B73Cu;
label_34b73c:
    // 0x34b73c: 0x982d  daddu       $s3, $zero, $zero
    ctx->pc = 0x34b73cu;
    SET_GPR_U64(ctx, 19, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b740: 0x902d  daddu       $s2, $zero, $zero
    ctx->pc = 0x34b740u;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b744: 0x882d  daddu       $s1, $zero, $zero
    ctx->pc = 0x34b744u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b748: 0x24100068  addiu       $s0, $zero, 0x68
    ctx->pc = 0x34b748u;
    SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 0), 104));
label_34b74c:
    // 0x34b74c: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34b74cu;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x34b750: 0x8c634070  lw          $v1, 0x4070($v1)
    ctx->pc = 0x34b750u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16496)));
    // 0x34b754: 0x722021  addu        $a0, $v1, $s2
    ctx->pc = 0x34b754u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 3), GPR_U32(ctx, 18)));
    // 0x34b758: 0x8c830040  lw          $v1, 0x40($a0)
    ctx->pc = 0x34b758u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 64)));
    // 0x34b75c: 0x10600034  beqz        $v1, . + 4 + (0x34 << 2)
    ctx->pc = 0x34B75Cu;
    {
        const bool branch_taken_0x34b75c = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b75c) {
            ctx->pc = 0x34B830u;
            goto label_34b830;
        }
    }
    ctx->pc = 0x34B764u;
    // 0x34b764: 0x8c820050  lw          $v0, 0x50($a0)
    ctx->pc = 0x34b764u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 80)));
    // 0x34b768: 0x10400009  beqz        $v0, . + 4 + (0x9 << 2)
    ctx->pc = 0x34B768u;
    {
        const bool branch_taken_0x34b768 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b768) {
            ctx->pc = 0x34B790u;
            goto label_34b790;
        }
    }
    ctx->pc = 0x34B770u;
    // 0x34b770: 0x3c06003d  lui         $a2, 0x3D
    ctx->pc = 0x34b770u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)61 << 16));
    // 0x34b774: 0x3c07003e  lui         $a3, 0x3E
    ctx->pc = 0x34b774u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)62 << 16));
    // 0x34b778: 0x202d  daddu       $a0, $zero, $zero
    ctx->pc = 0x34b778u;
    SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b77c: 0x220282d  daddu       $a1, $s1, $zero
    ctx->pc = 0x34b77cu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 17) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b780: 0x24c67ec0  addiu       $a2, $a2, 0x7EC0
    ctx->pc = 0x34b780u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 32448));
    // 0x34b784: 0xc083910  jal         func_20E440
    ctx->pc = 0x34B784u;
    SET_GPR_U32(ctx, 31, 0x34B78Cu);
    ctx->pc = 0x34B788u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B784u;
    // 0x34b788: 0x24e783b0  addiu       $a3, $a3, -0x7C50 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294935472));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E440u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E440u, 0x34B784u, 0x34B78Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B78Cu;
label_34b78c:
    // 0x34b78c: 0x0  nop
    ctx->pc = 0x34b78cu;
    // NOP
label_34b790:
    // 0x34b790: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34b790u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34b794: 0x8c424070  lw          $v0, 0x4070($v0)
    ctx->pc = 0x34b794u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16496)));
    // 0x34b798: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x34b798u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34b79c: 0x24050040  addiu       $a1, $zero, 0x40
    ctx->pc = 0x34b79cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 64));
    // 0x34b7a0: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x34b7a0u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b7a4: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x34b7a4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x34b7a8: 0xc083788  jal         func_20DE20
    ctx->pc = 0x34B7A8u;
    SET_GPR_U32(ctx, 31, 0x34B7B0u);
    ctx->pc = 0x34B7ACu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B7A8u;
    // 0x34b7ac: 0x24470078  addiu       $a3, $v0, 0x78 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 120));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DE20u, 0x34B7A8u, 0x34B7B0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B7B0u;
label_34b7b0:
    // 0x34b7b0: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34b7b0u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34b7b4: 0x24040080  addiu       $a0, $zero, 0x80
    ctx->pc = 0x34b7b4u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 128));
    // 0x34b7b8: 0x8c424070  lw          $v0, 0x4070($v0)
    ctx->pc = 0x34b7b8u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16496)));
    // 0x34b7bc: 0x200282d  daddu       $a1, $s0, $zero
    ctx->pc = 0x34b7bcu;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b7c0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x34b7c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x34b7c4: 0xc083768  jal         func_20DDA0
    ctx->pc = 0x34B7C4u;
    SET_GPR_U32(ctx, 31, 0x34B7CCu);
    ctx->pc = 0x34B7C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B7C4u;
    // 0x34b7c8: 0x24460058  addiu       $a2, $v0, 0x58 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 88));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DDA0u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DDA0u, 0x34B7C4u, 0x34B7CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B7CCu;
label_34b7cc:
    // 0x34b7cc: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34b7ccu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34b7d0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x34b7d0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x34b7d4: 0x8c424070  lw          $v0, 0x4070($v0)
    ctx->pc = 0x34b7d4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16496)));
    // 0x34b7d8: 0x24050110  addiu       $a1, $zero, 0x110
    ctx->pc = 0x34b7d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 272));
    // 0x34b7dc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x34b7dcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b7e0: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x34b7e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x34b7e4: 0xc083788  jal         func_20DE20
    ctx->pc = 0x34B7E4u;
    SET_GPR_U32(ctx, 31, 0x34B7ECu);
    ctx->pc = 0x34B7E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B7E4u;
    // 0x34b7e8: 0x244700b8  addiu       $a3, $v0, 0xB8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 184));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DE20u, 0x34B7E4u, 0x34B7ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B7ECu;
label_34b7ec:
    // 0x34b7ec: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34b7ecu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34b7f0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x34b7f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x34b7f4: 0x8c424070  lw          $v0, 0x4070($v0)
    ctx->pc = 0x34b7f4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16496)));
    // 0x34b7f8: 0x24050170  addiu       $a1, $zero, 0x170
    ctx->pc = 0x34b7f8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 368));
    // 0x34b7fc: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x34b7fcu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b800: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x34b800u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x34b804: 0xc083788  jal         func_20DE20
    ctx->pc = 0x34B804u;
    SET_GPR_U32(ctx, 31, 0x34B80Cu);
    ctx->pc = 0x34B808u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B804u;
    // 0x34b808: 0x244700d8  addiu       $a3, $v0, 0xD8 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 216));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DE20u, 0x34B804u, 0x34B80Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B80Cu;
label_34b80c:
    // 0x34b80c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34b80cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34b810: 0x24040006  addiu       $a0, $zero, 0x6
    ctx->pc = 0x34b810u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 6));
    // 0x34b814: 0x8c424070  lw          $v0, 0x4070($v0)
    ctx->pc = 0x34b814u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16496)));
    // 0x34b818: 0x240501e0  addiu       $a1, $zero, 0x1E0
    ctx->pc = 0x34b818u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 480));
    // 0x34b81c: 0x200302d  daddu       $a2, $s0, $zero
    ctx->pc = 0x34b81cu;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
    // 0x34b820: 0x521021  addu        $v0, $v0, $s2
    ctx->pc = 0x34b820u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 18)));
    // 0x34b824: 0xc083788  jal         func_20DE20
    ctx->pc = 0x34B824u;
    SET_GPR_U32(ctx, 31, 0x34B82Cu);
    ctx->pc = 0x34B828u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B824u;
    // 0x34b828: 0x24470098  addiu       $a3, $v0, 0x98 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 152));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DE20u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DE20u, 0x34B824u, 0x34B82Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B82Cu;
label_34b82c:
    // 0x34b82c: 0x0  nop
    ctx->pc = 0x34b82cu;
    // NOP
label_34b830:
    // 0x34b830: 0x26730001  addiu       $s3, $s3, 0x1
    ctx->pc = 0x34b830u;
    SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 19), 1));
    // 0x34b834: 0x2a630014  slti        $v1, $s3, 0x14
    ctx->pc = 0x34b834u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 19) < (int64_t)(int32_t)20) ? 1 : 0);
    // 0x34b838: 0x26520118  addiu       $s2, $s2, 0x118
    ctx->pc = 0x34b838u;
    SET_GPR_S32(ctx, 18, (int32_t)ADD32(GPR_U32(ctx, 18), 280));
    // 0x34b83c: 0x26310010  addiu       $s1, $s1, 0x10
    ctx->pc = 0x34b83cu;
    SET_GPR_S32(ctx, 17, (int32_t)ADD32(GPR_U32(ctx, 17), 16));
    // 0x34b840: 0x1460ffc2  bnez        $v1, . + 4 + (-0x3E << 2)
    ctx->pc = 0x34B840u;
    {
        const bool branch_taken_0x34b840 = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x34B844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B840u;
        // 0x34b844: 0x26100010  addiu       $s0, $s0, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 16, (int32_t)ADD32(GPR_U32(ctx, 16), 16));
        ctx->in_delay_slot = false;
        if (branch_taken_0x34b840) {
            ctx->pc = 0x34B74Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_34b74c;
        }
    }
    ctx->pc = 0x34B848u;
    // 0x34b848: 0xdfbf0040  ld          $ra, 0x40($sp)
    ctx->pc = 0x34b848u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 64)));
    // 0x34b84c: 0x7bb30030  lq          $s3, 0x30($sp)
    ctx->pc = 0x34b84cu;
    SET_GPR_VEC(ctx, 19, READ128(ADD32(GPR_U32(ctx, 29), 48)));
    // 0x34b850: 0x7bb20020  lq          $s2, 0x20($sp)
    ctx->pc = 0x34b850u;
    SET_GPR_VEC(ctx, 18, READ128(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x34b854: 0x7bb10010  lq          $s1, 0x10($sp)
    ctx->pc = 0x34b854u;
    SET_GPR_VEC(ctx, 17, READ128(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x34b858: 0x7bb00000  lq          $s0, 0x0($sp)
    ctx->pc = 0x34b858u;
    SET_GPR_VEC(ctx, 16, READ128(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x34b85c: 0x3e00008  jr          $ra
    ctx->pc = 0x34B85Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34B860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34B85Cu;
        // 0x34b860: 0x27bd0050  addiu       $sp, $sp, 0x50 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34B85Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34B864u;
    // 0x34b864: 0x0  nop
    ctx->pc = 0x34b864u;
    // NOP
    // 0x34b868: 0x0  nop
    ctx->pc = 0x34b868u;
    // NOP
    // 0x34b86c: 0x0  nop
    ctx->pc = 0x34b86cu;
    // NOP
    // 0x34b870: 0x27bdfff0  addiu       $sp, $sp, -0x10
    ctx->pc = 0x34b870u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967280));
    // 0x34b874: 0xffbf0000  sd          $ra, 0x0($sp)
    ctx->pc = 0x34b874u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 31));
    // 0x34b878: 0xc082918  jal         func_20A460
    ctx->pc = 0x34B878u;
    SET_GPR_U32(ctx, 31, 0x34B880u);
    ctx->pc = 0x20A460u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A460u, 0x34B878u, 0x34B880u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B880u;
label_34b880:
    // 0x34b880: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x34b880u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x34b884: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x34b884u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x34b888: 0x248483d0  addiu       $a0, $a0, -0x7C30
    ctx->pc = 0x34b888u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935504));
    // 0x34b88c: 0xc0838c4  jal         func_20E310
    ctx->pc = 0x34B88Cu;
    SET_GPR_U32(ctx, 31, 0x34B894u);
    ctx->pc = 0x34B890u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B88Cu;
    // 0x34b890: 0x24a584f0  addiu       $a1, $a1, -0x7B10 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294935792));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20E310u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20E310u, 0x34B88Cu, 0x34B894u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B894u;
label_34b894:
    // 0x34b894: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34b894u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x34b898: 0x8c634078  lw          $v1, 0x4078($v1)
    ctx->pc = 0x34b898u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16504)));
    // 0x34b89c: 0x8c630058  lw          $v1, 0x58($v1)
    ctx->pc = 0x34b89cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 88)));
    // 0x34b8a0: 0x1060004c  beqz        $v1, . + 4 + (0x4C << 2)
    ctx->pc = 0x34B8A0u;
    {
        const bool branch_taken_0x34b8a0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b8a0) {
            ctx->pc = 0x34B9D4u;
            goto label_34b9d4;
        }
    }
    ctx->pc = 0x34B8A8u;
    // 0x34b8a8: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x34b8a8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34b8ac: 0xc082998  jal         func_20A660
    ctx->pc = 0x34B8ACu;
    SET_GPR_U32(ctx, 31, 0x34B8B4u);
    ctx->pc = 0x34B8B0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B8ACu;
    // 0x34b8b0: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A660u, 0x34B8ACu, 0x34B8B4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B8B4u;
label_34b8b4:
    // 0x34b8b4: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34b8b4u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34b8b8: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x34b8b8u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x34b8bc: 0x8c424078  lw          $v0, 0x4078($v0)
    ctx->pc = 0x34b8bcu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16504)));
    // 0x34b8c0: 0x24050050  addiu       $a1, $zero, 0x50
    ctx->pc = 0x34b8c0u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 80));
    // 0x34b8c4: 0xc0836c0  jal         func_20DB00
    ctx->pc = 0x34B8C4u;
    SET_GPR_U32(ctx, 31, 0x34B8CCu);
    ctx->pc = 0x34B8C8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B8C4u;
    // 0x34b8c8: 0x24460070  addiu       $a2, $v0, 0x70 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 112));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DB00u, 0x34B8C4u, 0x34B8CCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B8CCu;
label_34b8cc:
    // 0x34b8cc: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x34b8ccu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34b8d0: 0xc082998  jal         func_20A660
    ctx->pc = 0x34B8D0u;
    SET_GPR_U32(ctx, 31, 0x34B8D8u);
    ctx->pc = 0x34B8D4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B8D0u;
    // 0x34b8d4: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A660u, 0x34B8D0u, 0x34B8D8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B8D8u;
label_34b8d8:
    // 0x34b8d8: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34b8d8u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34b8dc: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x34b8dcu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x34b8e0: 0x8c424078  lw          $v0, 0x4078($v0)
    ctx->pc = 0x34b8e0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16504)));
    // 0x34b8e4: 0x24050077  addiu       $a1, $zero, 0x77
    ctx->pc = 0x34b8e4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 119));
    // 0x34b8e8: 0xc0836c0  jal         func_20DB00
    ctx->pc = 0x34B8E8u;
    SET_GPR_U32(ctx, 31, 0x34B8F0u);
    ctx->pc = 0x34B8ECu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B8E8u;
    // 0x34b8ec: 0x24460090  addiu       $a2, $v0, 0x90 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 144));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DB00u, 0x34B8E8u, 0x34B8F0u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B8F0u;
label_34b8f0:
    // 0x34b8f0: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x34b8f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34b8f4: 0xc082998  jal         func_20A660
    ctx->pc = 0x34B8F4u;
    SET_GPR_U32(ctx, 31, 0x34B8FCu);
    ctx->pc = 0x34B8F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B8F4u;
    // 0x34b8f8: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A660u, 0x34B8F4u, 0x34B8FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B8FCu;
label_34b8fc:
    // 0x34b8fc: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34b8fcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34b900: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x34b900u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x34b904: 0x8c424078  lw          $v0, 0x4078($v0)
    ctx->pc = 0x34b904u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16504)));
    // 0x34b908: 0x2405009e  addiu       $a1, $zero, 0x9E
    ctx->pc = 0x34b908u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 158));
    // 0x34b90c: 0xc0836c0  jal         func_20DB00
    ctx->pc = 0x34B90Cu;
    SET_GPR_U32(ctx, 31, 0x34B914u);
    ctx->pc = 0x34B910u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B90Cu;
    // 0x34b910: 0x244600b0  addiu       $a2, $v0, 0xB0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 176));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DB00u, 0x34B90Cu, 0x34B914u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B914u;
label_34b914:
    // 0x34b914: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x34b914u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34b918: 0xc082998  jal         func_20A660
    ctx->pc = 0x34B918u;
    SET_GPR_U32(ctx, 31, 0x34B920u);
    ctx->pc = 0x34B91Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B918u;
    // 0x34b91c: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A660u, 0x34B918u, 0x34B920u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B920u;
label_34b920:
    // 0x34b920: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34b920u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34b924: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x34b924u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x34b928: 0x8c424078  lw          $v0, 0x4078($v0)
    ctx->pc = 0x34b928u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16504)));
    // 0x34b92c: 0x240500c5  addiu       $a1, $zero, 0xC5
    ctx->pc = 0x34b92cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 197));
    // 0x34b930: 0xc0836c0  jal         func_20DB00
    ctx->pc = 0x34B930u;
    SET_GPR_U32(ctx, 31, 0x34B938u);
    ctx->pc = 0x34B934u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B930u;
    // 0x34b934: 0x244600d0  addiu       $a2, $v0, 0xD0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 208));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DB00u, 0x34B930u, 0x34B938u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B938u;
label_34b938:
    // 0x34b938: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x34b938u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34b93c: 0xc082998  jal         func_20A660
    ctx->pc = 0x34B93Cu;
    SET_GPR_U32(ctx, 31, 0x34B944u);
    ctx->pc = 0x34B940u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B93Cu;
    // 0x34b940: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A660u, 0x34B93Cu, 0x34B944u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B944u;
label_34b944:
    // 0x34b944: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34b944u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34b948: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x34b948u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x34b94c: 0x8c424078  lw          $v0, 0x4078($v0)
    ctx->pc = 0x34b94cu;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16504)));
    // 0x34b950: 0x240500ec  addiu       $a1, $zero, 0xEC
    ctx->pc = 0x34b950u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 236));
    // 0x34b954: 0xc0836c0  jal         func_20DB00
    ctx->pc = 0x34B954u;
    SET_GPR_U32(ctx, 31, 0x34B95Cu);
    ctx->pc = 0x34B958u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B954u;
    // 0x34b958: 0x244600f0  addiu       $a2, $v0, 0xF0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 240));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DB00u, 0x34B954u, 0x34B95Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B95Cu;
label_34b95c:
    // 0x34b95c: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x34b95cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34b960: 0xc082998  jal         func_20A660
    ctx->pc = 0x34B960u;
    SET_GPR_U32(ctx, 31, 0x34B968u);
    ctx->pc = 0x34B964u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B960u;
    // 0x34b964: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A660u, 0x34B960u, 0x34B968u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B968u;
label_34b968:
    // 0x34b968: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34b968u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34b96c: 0x240400e0  addiu       $a0, $zero, 0xE0
    ctx->pc = 0x34b96cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x34b970: 0x8c424078  lw          $v0, 0x4078($v0)
    ctx->pc = 0x34b970u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16504)));
    // 0x34b974: 0x24050113  addiu       $a1, $zero, 0x113
    ctx->pc = 0x34b974u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 275));
    // 0x34b978: 0xc0836c0  jal         func_20DB00
    ctx->pc = 0x34B978u;
    SET_GPR_U32(ctx, 31, 0x34B980u);
    ctx->pc = 0x34B97Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B978u;
    // 0x34b97c: 0x24460110  addiu       $a2, $v0, 0x110 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DB00u, 0x34B978u, 0x34B980u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B980u;
label_34b980:
    // 0x34b980: 0x24040004  addiu       $a0, $zero, 0x4
    ctx->pc = 0x34b980u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 4));
    // 0x34b984: 0xc082998  jal         func_20A660
    ctx->pc = 0x34B984u;
    SET_GPR_U32(ctx, 31, 0x34B98Cu);
    ctx->pc = 0x34B988u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B984u;
    // 0x34b988: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A660u, 0x34B984u, 0x34B98Cu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B98Cu;
label_34b98c:
    // 0x34b98c: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34b98cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34b990: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x34b990u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x34b994: 0x8c424078  lw          $v0, 0x4078($v0)
    ctx->pc = 0x34b994u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16504)));
    // 0x34b998: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x34b998u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x34b99c: 0x24060161  addiu       $a2, $zero, 0x161
    ctx->pc = 0x34b99cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x34b9a0: 0xc08370c  jal         func_20DC30
    ctx->pc = 0x34B9A0u;
    SET_GPR_U32(ctx, 31, 0x34B9A8u);
    ctx->pc = 0x34B9A4u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B9A0u;
    // 0x34b9a4: 0x24470150  addiu       $a3, $v0, 0x150 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 336));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DC30u, 0x34B9A0u, 0x34B9A8u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B9A8u;
label_34b9a8:
    // 0x34b9a8: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x34b9a8u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x34b9ac: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x34b9acu;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x34b9b0: 0x248483d0  addiu       $a0, $a0, -0x7C30
    ctx->pc = 0x34b9b0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935504));
    // 0x34b9b4: 0xc0837e0  jal         func_20DF80
    ctx->pc = 0x34B9B4u;
    SET_GPR_U32(ctx, 31, 0x34B9BCu);
    ctx->pc = 0x34B9B8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B9B4u;
    // 0x34b9b8: 0x24a586e0  addiu       $a1, $a1, -0x7920 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936288));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DF80u, 0x34B9B4u, 0x34B9BCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B9BCu;
label_34b9bc:
    // 0x34b9bc: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34b9bcu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34b9c0: 0x240401a0  addiu       $a0, $zero, 0x1A0
    ctx->pc = 0x34b9c0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    // 0x34b9c4: 0x8c424078  lw          $v0, 0x4078($v0)
    ctx->pc = 0x34b9c4u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16504)));
    // 0x34b9c8: 0x24050161  addiu       $a1, $zero, 0x161
    ctx->pc = 0x34b9c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 353));
    // 0x34b9cc: 0xc0836c0  jal         func_20DB00
    ctx->pc = 0x34B9CCu;
    SET_GPR_U32(ctx, 31, 0x34B9D4u);
    ctx->pc = 0x34B9D0u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B9CCu;
    // 0x34b9d0: 0x24460170  addiu       $a2, $v0, 0x170 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 368));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DB00u, 0x34B9CCu, 0x34B9D4u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B9D4u;
label_34b9d4:
    // 0x34b9d4: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34b9d4u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x34b9d8: 0x8c644078  lw          $a0, 0x4078($v1)
    ctx->pc = 0x34b9d8u;
    SET_GPR_S32(ctx, 4, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16504)));
    // 0x34b9dc: 0x8c830068  lw          $v1, 0x68($a0)
    ctx->pc = 0x34b9dcu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 4), 104)));
    // 0x34b9e0: 0x10600011  beqz        $v1, . + 4 + (0x11 << 2)
    ctx->pc = 0x34B9E0u;
    {
        const bool branch_taken_0x34b9e0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34b9e0) {
            ctx->pc = 0x34BA28u;
            goto label_34ba28;
        }
    }
    ctx->pc = 0x34B9E8u;
    // 0x34b9e8: 0x24870190  addiu       $a3, $a0, 0x190
    ctx->pc = 0x34b9e8u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 4), 400));
    // 0x34b9ec: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x34b9ecu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x34b9f0: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x34b9f0u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x34b9f4: 0xc08370c  jal         func_20DC30
    ctx->pc = 0x34B9F4u;
    SET_GPR_U32(ctx, 31, 0x34B9FCu);
    ctx->pc = 0x34B9F8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34B9F4u;
    // 0x34b9f8: 0x2406013a  addiu       $a2, $zero, 0x13A (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 314));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DC30u, 0x34B9F4u, 0x34B9FCu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34B9FCu;
label_34b9fc:
    // 0x34b9fc: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x34b9fcu;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x34ba00: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x34ba00u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x34ba04: 0x248483d0  addiu       $a0, $a0, -0x7C30
    ctx->pc = 0x34ba04u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935504));
    // 0x34ba08: 0xc0837e0  jal         func_20DF80
    ctx->pc = 0x34BA08u;
    SET_GPR_U32(ctx, 31, 0x34BA10u);
    ctx->pc = 0x34BA0Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BA08u;
    // 0x34ba0c: 0x24a586d0  addiu       $a1, $a1, -0x7930 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936272));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DF80u, 0x34BA08u, 0x34BA10u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BA10u;
label_34ba10:
    // 0x34ba10: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34ba10u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34ba14: 0x240401a0  addiu       $a0, $zero, 0x1A0
    ctx->pc = 0x34ba14u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    // 0x34ba18: 0x8c424078  lw          $v0, 0x4078($v0)
    ctx->pc = 0x34ba18u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16504)));
    // 0x34ba1c: 0x2405013a  addiu       $a1, $zero, 0x13A
    ctx->pc = 0x34ba1cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 314));
    // 0x34ba20: 0xc0836c0  jal         func_20DB00
    ctx->pc = 0x34BA20u;
    SET_GPR_U32(ctx, 31, 0x34BA28u);
    ctx->pc = 0x34BA24u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BA20u;
    // 0x34ba24: 0x244601b0  addiu       $a2, $v0, 0x1B0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 432));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DB00u, 0x34BA20u, 0x34BA28u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BA28u;
label_34ba28:
    // 0x34ba28: 0x3c03003d  lui         $v1, 0x3D
    ctx->pc = 0x34ba28u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)61 << 16));
    // 0x34ba2c: 0x8c634078  lw          $v1, 0x4078($v1)
    ctx->pc = 0x34ba2cu;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 16504)));
    // 0x34ba30: 0x8c630060  lw          $v1, 0x60($v1)
    ctx->pc = 0x34ba30u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 3), 96)));
    // 0x34ba34: 0x50600017  beql        $v1, $zero, . + 4 + (0x17 << 2)
    ctx->pc = 0x34BA34u;
    {
        const bool branch_taken_0x34ba34 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x34ba34) {
            ctx->pc = 0x34BA38u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x34BA34u;
            // 0x34ba38: 0xdfbf0000  ld          $ra, 0x0($sp) (Delay Slot)
            SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x34BA94u;
            goto label_34ba94;
        }
    }
    ctx->pc = 0x34BA3Cu;
    // 0x34ba3c: 0x24040003  addiu       $a0, $zero, 0x3
    ctx->pc = 0x34ba3cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
    // 0x34ba40: 0xc082998  jal         func_20A660
    ctx->pc = 0x34BA40u;
    SET_GPR_U32(ctx, 31, 0x34BA48u);
    ctx->pc = 0x34BA44u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BA40u;
    // 0x34ba44: 0x282d  daddu       $a1, $zero, $zero (Delay Slot)
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20A660u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20A660u, 0x34BA40u, 0x34BA48u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BA48u;
label_34ba48:
    // 0x34ba48: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34ba48u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34ba4c: 0x24040005  addiu       $a0, $zero, 0x5
    ctx->pc = 0x34ba4cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
    // 0x34ba50: 0x8c424078  lw          $v0, 0x4078($v0)
    ctx->pc = 0x34ba50u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16504)));
    // 0x34ba54: 0x240500e0  addiu       $a1, $zero, 0xE0
    ctx->pc = 0x34ba54u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 224));
    // 0x34ba58: 0x24060188  addiu       $a2, $zero, 0x188
    ctx->pc = 0x34ba58u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 392));
    // 0x34ba5c: 0xc08370c  jal         func_20DC30
    ctx->pc = 0x34BA5Cu;
    SET_GPR_U32(ctx, 31, 0x34BA64u);
    ctx->pc = 0x34BA60u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BA5Cu;
    // 0x34ba60: 0x244701d0  addiu       $a3, $v0, 0x1D0 (Delay Slot)
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 2), 464));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DC30u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DC30u, 0x34BA5Cu, 0x34BA64u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BA64u;
label_34ba64:
    // 0x34ba64: 0x3c04003e  lui         $a0, 0x3E
    ctx->pc = 0x34ba64u;
    SET_GPR_S32(ctx, 4, (int32_t)((uint32_t)62 << 16));
    // 0x34ba68: 0x3c05003e  lui         $a1, 0x3E
    ctx->pc = 0x34ba68u;
    SET_GPR_S32(ctx, 5, (int32_t)((uint32_t)62 << 16));
    // 0x34ba6c: 0x248483d0  addiu       $a0, $a0, -0x7C30
    ctx->pc = 0x34ba6cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 4), 4294935504));
    // 0x34ba70: 0xc0837e0  jal         func_20DF80
    ctx->pc = 0x34BA70u;
    SET_GPR_U32(ctx, 31, 0x34BA78u);
    ctx->pc = 0x34BA74u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BA70u;
    // 0x34ba74: 0x24a586f0  addiu       $a1, $a1, -0x7910 (Delay Slot)
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294936304));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DF80u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DF80u, 0x34BA70u, 0x34BA78u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BA78u;
label_34ba78:
    // 0x34ba78: 0x3c02003d  lui         $v0, 0x3D
    ctx->pc = 0x34ba78u;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)61 << 16));
    // 0x34ba7c: 0x240401a0  addiu       $a0, $zero, 0x1A0
    ctx->pc = 0x34ba7cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 416));
    // 0x34ba80: 0x8c424078  lw          $v0, 0x4078($v0)
    ctx->pc = 0x34ba80u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 16504)));
    // 0x34ba84: 0x24050188  addiu       $a1, $zero, 0x188
    ctx->pc = 0x34ba84u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 392));
    // 0x34ba88: 0xc0836c0  jal         func_20DB00
    ctx->pc = 0x34BA88u;
    SET_GPR_U32(ctx, 31, 0x34BA90u);
    ctx->pc = 0x34BA8Cu;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x34BA88u;
    // 0x34ba8c: 0x244601f0  addiu       $a2, $v0, 0x1F0 (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 2), 496));
    ctx->in_delay_slot = false;
    ctx->pc = 0x20DB00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x20DB00u, 0x34BA88u, 0x34BA90u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x34BA90u;
label_34ba90:
    // 0x34ba90: 0xdfbf0000  ld          $ra, 0x0($sp)
    ctx->pc = 0x34ba90u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 0)));
label_34ba94:
    // 0x34ba94: 0x3e00008  jr          $ra
    ctx->pc = 0x34BA94u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x34BA98u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x34BA94u;
        // 0x34ba98: 0x27bd0010  addiu       $sp, $sp, 0x10 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 16));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x34BA94u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x34BA9Cu;
    // 0x34ba9c: 0x0  nop
    ctx->pc = 0x34ba9cu;
    // NOP
}
