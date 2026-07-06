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

// Function: sub_001AD500
// Address: 0x1ad500 - 0x1ad600
void sub_001AD500_0x1ad500(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001AD500_0x1ad500");
#endif

    ctx->pc = 0x1ad500u;

    // 0x1ad500: 0x28a50010  slti        $a1, $a1, 0x10
    ctx->pc = 0x1ad500u;
    SET_GPR_U64(ctx, 5, ((int64_t)GPR_S64(ctx, 5) < (int64_t)(int32_t)16) ? 1 : 0);
    // 0x1ad504: 0x80602d  daddu       $t4, $a0, $zero
    ctx->pc = 0x1ad504u;
    SET_GPR_U64(ctx, 12, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1ad508: 0x8fad0008  lw          $t5, 0x8($sp)
    ctx->pc = 0x1ad508u;
    SET_GPR_S32(ctx, 13, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1ad50c: 0x14a0003a  bnez        $a1, . + 4 + (0x3A << 2)
    ctx->pc = 0x1AD50Cu;
    {
        const bool branch_taken_0x1ad50c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1AD510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD50Cu;
        // 0x1ad510: 0x2402ffff  addiu       $v0, $zero, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad50c) {
            ctx->pc = 0x1AD5F8u;
            goto label_1ad5f8;
        }
    }
    ctx->pc = 0x1AD514u;
    // 0x1ad514: 0x91830000  lbu         $v1, 0x0($t4)
    ctx->pc = 0x1ad514u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 0)));
    // 0x1ad518: 0x34058000  ori         $a1, $zero, 0x8000
    ctx->pc = 0x1ad518u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 0) | (uint64_t)(uint16_t)32768);
    // 0x1ad51c: 0x91840001  lbu         $a0, 0x1($t4)
    ctx->pc = 0x1ad51cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 1)));
    // 0x1ad520: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1ad520u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1ad524: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1ad524u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ad528: 0x14850033  bne         $a0, $a1, . + 4 + (0x33 << 2)
    ctx->pc = 0x1AD528u;
    {
        const bool branch_taken_0x1ad528 = (GPR_U64(ctx, 4) != GPR_U64(ctx, 5));
        ctx->pc = 0x1AD52Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD528u;
        // 0x1ad52c: 0x2402fffe  addiu       $v0, $zero, -0x2 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967294));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad528) {
            ctx->pc = 0x1AD5F8u;
            goto label_1ad5f8;
        }
    }
    ctx->pc = 0x1AD530u;
    // 0x1ad530: 0x91830002  lbu         $v1, 0x2($t4)
    ctx->pc = 0x1ad530u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 2)));
    // 0x1ad534: 0x91820003  lbu         $v0, 0x3($t4)
    ctx->pc = 0x1ad534u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 3)));
    // 0x1ad538: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1ad538u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1ad53c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ad53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ad540: 0x24420004  addiu       $v0, $v0, 0x4
    ctx->pc = 0x1ad540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4));
    // 0x1ad544: 0xa4c20000  sh          $v0, 0x0($a2)
    ctx->pc = 0x1ad544u;
    WRITE16(ADD32(GPR_U32(ctx, 6), 0), (uint16_t)GPR_U32(ctx, 2));
    // 0x1ad548: 0x91830004  lbu         $v1, 0x4($t4)
    ctx->pc = 0x1ad548u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 4)));
    // 0x1ad54c: 0xa0e30000  sb          $v1, 0x0($a3)
    ctx->pc = 0x1ad54cu;
    WRITE8(ADD32(GPR_U32(ctx, 7), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ad550: 0x91820005  lbu         $v0, 0x5($t4)
    ctx->pc = 0x1ad550u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 5)));
    // 0x1ad554: 0xa1220000  sb          $v0, 0x0($t1)
    ctx->pc = 0x1ad554u;
    WRITE8(ADD32(GPR_U32(ctx, 9), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x1ad558: 0x91830006  lbu         $v1, 0x6($t4)
    ctx->pc = 0x1ad558u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 6)));
    // 0x1ad55c: 0xa1030000  sb          $v1, 0x0($t0)
    ctx->pc = 0x1ad55cu;
    WRITE8(ADD32(GPR_U32(ctx, 8), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x1ad560: 0x91840007  lbu         $a0, 0x7($t4)
    ctx->pc = 0x1ad560u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 7)));
    // 0x1ad564: 0xa1440000  sb          $a0, 0x0($t2)
    ctx->pc = 0x1ad564u;
    WRITE8(ADD32(GPR_U32(ctx, 10), 0), (uint8_t)GPR_U32(ctx, 4));
    // 0x1ad568: 0x91820008  lbu         $v0, 0x8($t4)
    ctx->pc = 0x1ad568u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 8)));
    // 0x1ad56c: 0x9183000a  lbu         $v1, 0xA($t4)
    ctx->pc = 0x1ad56cu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 10)));
    // 0x1ad570: 0x91840009  lbu         $a0, 0x9($t4)
    ctx->pc = 0x1ad570u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 9)));
    // 0x1ad574: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1ad574u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1ad578: 0x9185000b  lbu         $a1, 0xB($t4)
    ctx->pc = 0x1ad578u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 11)));
    // 0x1ad57c: 0x31a00  sll         $v1, $v1, 8
    ctx->pc = 0x1ad57cu;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 8));
    // 0x1ad580: 0x42400  sll         $a0, $a0, 16
    ctx->pc = 0x1ad580u;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 16));
    // 0x1ad584: 0x641825  or          $v1, $v1, $a0
    ctx->pc = 0x1ad584u;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 3) | GPR_U64(ctx, 4));
    // 0x1ad588: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1ad588u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1ad58c: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1ad58cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1ad590: 0xad620000  sw          $v0, 0x0($t3)
    ctx->pc = 0x1ad590u;
    WRITE32(ADD32(GPR_U32(ctx, 11), 0), GPR_U32(ctx, 2));
    // 0x1ad594: 0x9183000d  lbu         $v1, 0xD($t4)
    ctx->pc = 0x1ad594u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 13)));
    // 0x1ad598: 0x9182000c  lbu         $v0, 0xC($t4)
    ctx->pc = 0x1ad598u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 12)));
    // 0x1ad59c: 0x9184000e  lbu         $a0, 0xE($t4)
    ctx->pc = 0x1ad59cu;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 14)));
    // 0x1ad5a0: 0x31c00  sll         $v1, $v1, 16
    ctx->pc = 0x1ad5a0u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 3), 16));
    // 0x1ad5a4: 0x9185000f  lbu         $a1, 0xF($t4)
    ctx->pc = 0x1ad5a4u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 12), 15)));
    // 0x1ad5a8: 0x21600  sll         $v0, $v0, 24
    ctx->pc = 0x1ad5a8u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 24));
    // 0x1ad5ac: 0x42200  sll         $a0, $a0, 8
    ctx->pc = 0x1ad5acu;
    SET_GPR_S32(ctx, 4, (int32_t)SLL32(GPR_U32(ctx, 4), 8));
    // 0x1ad5b0: 0x832025  or          $a0, $a0, $v1
    ctx->pc = 0x1ad5b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 4) | GPR_U64(ctx, 3));
    // 0x1ad5b4: 0x8fa30000  lw          $v1, 0x0($sp)
    ctx->pc = 0x1ad5b4u;
    SET_GPR_S32(ctx, 3, (int32_t)READ32(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1ad5b8: 0x451025  or          $v0, $v0, $a1
    ctx->pc = 0x1ad5b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 5));
    // 0x1ad5bc: 0x441025  or          $v0, $v0, $a0
    ctx->pc = 0x1ad5bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 4));
    // 0x1ad5c0: 0xac620000  sw          $v0, 0x0($v1)
    ctx->pc = 0x1ad5c0u;
    WRITE32(ADD32(GPR_U32(ctx, 3), 0), GPR_U32(ctx, 2));
    // 0x1ad5c4: 0x81080000  lb          $t0, 0x0($t0)
    ctx->pc = 0x1ad5c4u;
    SET_GPR_S32(ctx, 8, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1ad5c8: 0x55000003  bnel        $t0, $zero, . + 4 + (0x3 << 2)
    ctx->pc = 0x1AD5C8u;
    {
        const bool branch_taken_0x1ad5c8 = (GPR_U64(ctx, 8) != GPR_U64(ctx, 0));
        if (branch_taken_0x1ad5c8) {
            ctx->pc = 0x1AD5CCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD5C8u;
            // 0x1ad5cc: 0x81220000  lb          $v0, 0x0($t1) (Delay Slot)
            SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 9), 0)));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD5D8u;
            goto label_1ad5d8;
        }
    }
    ctx->pc = 0x1AD5D0u;
    // 0x1ad5d0: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x1AD5D0u;
    {
        const bool branch_taken_0x1ad5d0 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1AD5D4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1AD5D0u;
        // 0x1ad5d4: 0xada00000  sw          $zero, 0x0($t5) (Delay Slot)
        WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1ad5d0) {
            ctx->pc = 0x1AD5F4u;
            goto label_1ad5f4;
        }
    }
    ctx->pc = 0x1AD5D8u;
label_1ad5d8:
    // 0x1ad5d8: 0x51000001  beql        $t0, $zero, . + 4 + (0x1 << 2)
    ctx->pc = 0x1AD5D8u;
    {
        const bool branch_taken_0x1ad5d8 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        if (branch_taken_0x1ad5d8) {
            ctx->pc = 0x1AD5DCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1AD5D8u;
            // 0x1ad5dc: 0x1cd  break       0, 7 (Delay Slot)
            runtime->handleBreak(rdram, ctx);
            ctx->in_delay_slot = false;
            ctx->pc = 0x1AD5E0u;
            goto label_1ad5e0;
        }
    }
    ctx->pc = 0x1AD5E0u;
label_1ad5e0:
    // 0x1ad5e0: 0x210c0  sll         $v0, $v0, 3
    ctx->pc = 0x1ad5e0u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1ad5e4: 0x2442fff0  addiu       $v0, $v0, -0x10
    ctx->pc = 0x1ad5e4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967280));
    // 0x1ad5e8: 0x48001a  div         $zero, $v0, $t0
    ctx->pc = 0x1ad5e8u;
    { int32_t divisor = GPR_S32(ctx, 8);    int32_t dividend = GPR_S32(ctx, 2);    if (divisor != 0) {        if (divisor == -1 && dividend == INT32_MIN) {            ctx->lo = (uint64_t)(int64_t)INT32_MIN; ctx->hi = 0;        } else {            ctx->lo = (uint64_t)(int64_t)(dividend / divisor);            ctx->hi = (uint64_t)(int64_t)(dividend % divisor);        }    } else {        ctx->lo = (dividend < 0) ? 1ull : 0xFFFFFFFFFFFFFFFFull; ctx->hi = (uint64_t)(int64_t)dividend;    } }
    // 0x1ad5ec: 0x1012  mflo        $v0
    ctx->pc = 0x1ad5ecu;
    SET_GPR_U64(ctx, 2, ctx->lo);
    // 0x1ad5f0: 0xada20000  sw          $v0, 0x0($t5)
    ctx->pc = 0x1ad5f0u;
    WRITE32(ADD32(GPR_U32(ctx, 13), 0), GPR_U32(ctx, 2));
label_1ad5f4:
    // 0x1ad5f4: 0x102d  daddu       $v0, $zero, $zero
    ctx->pc = 0x1ad5f4u;
    SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
label_1ad5f8:
    // 0x1ad5f8: 0x3e00008  jr          $ra
    ctx->pc = 0x1AD5F8u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1AD5F8u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1AD600u;
}
