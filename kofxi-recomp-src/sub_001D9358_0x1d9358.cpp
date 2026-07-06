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

// Function: sub_001D9358
// Address: 0x1d9358 - 0x1d9898
void sub_001D9358_0x1d9358(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_001D9358_0x1d9358");
#endif

    switch (ctx->pc) {
        case 0x1d9610u: goto label_1d9610;
        case 0x1d97a8u: goto label_1d97a8;
        case 0x1d97e0u: goto label_1d97e0;
        case 0x1d97e4u: goto label_1d97e4;
        case 0x1d97ecu: goto label_1d97ec;
        case 0x1d9800u: goto label_1d9800;
        default: break;
    }

    ctx->pc = 0x1d9358u;

    // 0x1d9358: 0x27bdffd0  addiu       $sp, $sp, -0x30
    ctx->pc = 0x1d9358u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967248));
    // 0x1d935c: 0x2402fffc  addiu       $v0, $zero, -0x4
    ctx->pc = 0x1d935cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 4294967292));
    // 0x1d9360: 0xffb10008  sd          $s1, 0x8($sp)
    ctx->pc = 0x1d9360u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 8), GPR_U64(ctx, 17));
    // 0x1d9364: 0x80882d  daddu       $s1, $a0, $zero
    ctx->pc = 0x1d9364u;
    SET_GPR_U64(ctx, 17, (uint64_t)GPR_U64(ctx, 4) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9368: 0xffb20010  sd          $s2, 0x10($sp)
    ctx->pc = 0x1d9368u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 16), GPR_U64(ctx, 18));
    // 0x1d936c: 0xa0902d  daddu       $s2, $a1, $zero
    ctx->pc = 0x1d936cu;
    SET_GPR_U64(ctx, 18, (uint64_t)GPR_U64(ctx, 5) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9370: 0xffb00000  sd          $s0, 0x0($sp)
    ctx->pc = 0x1d9370u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 0), GPR_U64(ctx, 16));
    // 0x1d9374: 0x2224024  and         $t0, $s1, $v0
    ctx->pc = 0x1d9374u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 17) & GPR_U64(ctx, 2));
    // 0x1d9378: 0xffb30018  sd          $s3, 0x18($sp)
    ctx->pc = 0x1d9378u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 24), GPR_U64(ctx, 19));
    // 0x1d937c: 0x2281023  subu        $v0, $s1, $t0
    ctx->pc = 0x1d937cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 17), GPR_U32(ctx, 8)));
    // 0x1d9380: 0xffbf0020  sd          $ra, 0x20($sp)
    ctx->pc = 0x1d9380u;
    WRITE64(ADD32(GPR_U32(ctx, 29), 32), GPR_U64(ctx, 31));
    // 0x1d9384: 0x248c0  sll         $t1, $v0, 3
    ctx->pc = 0x1d9384u;
    SET_GPR_S32(ctx, 9, (int32_t)SLL32(GPR_U32(ctx, 2), 3));
    // 0x1d9388: 0x810a0000  lb          $t2, 0x0($t0)
    ctx->pc = 0x1d9388u;
    SET_GPR_S32(ctx, 10, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d938c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d938cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d9390: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d9390u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d9394: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d9394u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d9398: 0x91040000  lbu         $a0, 0x0($t0)
    ctx->pc = 0x1d9398u;
    SET_GPR_U32(ctx, 4, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d939c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d939cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d93a0: 0x91050000  lbu         $a1, 0x0($t0)
    ctx->pc = 0x1d93a0u;
    SET_GPR_U32(ctx, 5, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d93a4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d93a4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d93a8: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d93a8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d93ac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d93acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d93b0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d93b0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d93b4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d93b4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d93b8: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x1d93b8u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x1d93bc: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d93bcu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d93c0: 0x1435025  or          $t2, $t2, $v1
    ctx->pc = 0x1d93c0u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 3));
    // 0x1d93c4: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d93c4u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d93c8: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d93c8u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d93cc: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x1d93ccu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x1d93d0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d93d0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d93d4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d93d4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d93d8: 0x1445025  or          $t2, $t2, $a0
    ctx->pc = 0x1d93d8u;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 4));
    // 0x1d93dc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d93dcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d93e0: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d93e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d93e4: 0xa5200  sll         $t2, $t2, 8
    ctx->pc = 0x1d93e4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 8));
    // 0x1d93e8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d93e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d93ec: 0x1455025  or          $t2, $t2, $a1
    ctx->pc = 0x1d93ecu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 5));
    // 0x1d93f0: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d93f0u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d93f4: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d93f4u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d93f8: 0x11200007  beqz        $t1, . + 4 + (0x7 << 2)
    ctx->pc = 0x1D93F8u;
    {
        const bool branch_taken_0x1d93f8 = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D93FCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D93F8u;
        // 0x1d93fc: 0x12a5004  sllv        $t2, $t2, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 9) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d93f8) {
            ctx->pc = 0x1D9418u;
            goto label_1d9418;
        }
    }
    ctx->pc = 0x1D9400u;
    // 0x1d9400: 0x91023  negu        $v0, $t1
    ctx->pc = 0x1d9400u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 0), GPR_U32(ctx, 9)));
    // 0x1d9404: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d9404u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d9408: 0x1422825  or          $a1, $t2, $v0
    ctx->pc = 0x1d9408u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1d940c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D940Cu;
    {
        const bool branch_taken_0x1d940c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9410u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D940Cu;
        // 0x1d9410: 0x1275004  sllv        $t2, $a3, $t1 (Delay Slot)
        SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d940c) {
            ctx->pc = 0x1D9420u;
            goto label_1d9420;
        }
    }
    ctx->pc = 0x1D9414u;
    // 0x1d9414: 0x0  nop
    ctx->pc = 0x1d9414u;
    // NOP
label_1d9418:
    // 0x1d9418: 0x140282d  daddu       $a1, $t2, $zero
    ctx->pc = 0x1d9418u;
    SET_GPR_U64(ctx, 5, (uint64_t)GPR_U64(ctx, 10) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d941c: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x1d941cu;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
label_1d9420:
    // 0x1d9420: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d9420u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d9424: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d9424u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d9428: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d9428u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d942c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d942cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d9430: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d9430u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d9434: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d9434u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d9438: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d9438u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d943c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d943cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d9440: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d9440u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d9444: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d9444u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d9448: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d9448u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d944c: 0x24040101  addiu       $a0, $zero, 0x101
    ctx->pc = 0x1d944cu;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 257));
    // 0x1d9450: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d9450u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d9454: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d9454u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d9458: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d9458u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d945c: 0x14a40106  bne         $a1, $a0, . + 4 + (0x106 << 2)
    ctx->pc = 0x1D945Cu;
    {
        const bool branch_taken_0x1d945c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x1D9460u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D945Cu;
        // 0x1d9460: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d945c) {
            ctx->pc = 0x1D9878u;
            goto label_1d9878;
        }
    }
    ctx->pc = 0x1D9464u;
    // 0x1d9464: 0x2922001b  slti        $v0, $t1, 0x1B
    ctx->pc = 0x1d9464u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)27) ? 1 : 0);
    // 0x1d9468: 0x54400015  bnel        $v0, $zero, . + 4 + (0x15 << 2)
    ctx->pc = 0x1D9468u;
    {
        const bool branch_taken_0x1d9468 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9468) {
            ctx->pc = 0x1D946Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9468u;
            // 0x1d946c: 0x25290005  addiu       $t1, $t1, 0x5 (Delay Slot)
            SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D94C0u;
            goto label_1d94c0;
        }
    }
    ctx->pc = 0x1D9470u;
    // 0x1d9470: 0x2529ffe5  addiu       $t1, $t1, -0x1B
    ctx->pc = 0x1d9470u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967269));
    // 0x1d9474: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x1d9474u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9478: 0x1271804  sllv        $v1, $a3, $t1
    ctx->pc = 0x1d9478u;
    SET_GPR_S32(ctx, 3, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
    // 0x1d947c: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d947cu;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d9480: 0x39220000  xori        $v0, $t1, 0x0
    ctx->pc = 0x1d9480u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 9) ^ (uint64_t)(uint16_t)0);
    // 0x1d9484: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d9484u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d9488: 0x62500b  movn        $t2, $v1, $v0
    ctx->pc = 0x1d9488u;
    if (GPR_U64(ctx, 2) != 0) SET_GPR_VEC(ctx, 10, GPR_VEC(ctx, 3));
    // 0x1d948c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d948cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d9490: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d9490u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d9494: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d9494u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d9498: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d9498u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d949c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d949cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d94a0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d94a0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d94a4: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d94a4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d94a8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d94a8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d94ac: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d94acu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d94b0: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d94b0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d94b4: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d94b4u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d94b8: 0x10000002  b           . + 4 + (0x2 << 2)
    ctx->pc = 0x1D94B8u;
    {
        const bool branch_taken_0x1d94b8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D94BCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94B8u;
        // 0x1d94bc: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d94b8) {
            ctx->pc = 0x1D94C4u;
            goto label_1d94c4;
        }
    }
    ctx->pc = 0x1D94C0u;
label_1d94c0:
    // 0x1d94c0: 0xa5140  sll         $t2, $t2, 5
    ctx->pc = 0x1d94c0u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
label_1d94c4:
    // 0x1d94c4: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x1d94c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1d94c8: 0x15220013  bne         $t1, $v0, . + 4 + (0x13 << 2)
    ctx->pc = 0x1D94C8u;
    {
        const bool branch_taken_0x1d94c8 = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D94CCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D94C8u;
        // 0x1d94cc: 0xa2fc2  srl         $a1, $t2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d94c8) {
            ctx->pc = 0x1D9518u;
            goto label_1d9518;
        }
    }
    ctx->pc = 0x1D94D0u;
    // 0x1d94d0: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x1d94d0u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94d4: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d94d4u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d94d8: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d94d8u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d94dc: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d94dcu;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d94e0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d94e0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d94e4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d94e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d94e8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d94e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d94ec: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d94ecu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d94f0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d94f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d94f4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d94f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d94f8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d94f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d94fc: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d94fcu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d9500: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d9500u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d9504: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d9504u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d9508: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d9508u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d950c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D950Cu;
    {
        const bool branch_taken_0x1d950c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9510u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D950Cu;
        // 0x1d9510: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d950c) {
            ctx->pc = 0x1D9520u;
            goto label_1d9520;
        }
    }
    ctx->pc = 0x1D9514u;
    // 0x1d9514: 0x0  nop
    ctx->pc = 0x1d9514u;
    // NOP
label_1d9518:
    // 0x1d9518: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d9518u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d951c: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x1d951cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_1d9520:
    // 0x1d9520: 0x14a000d5  bnez        $a1, . + 4 + (0xD5 << 2)
    ctx->pc = 0x1D9520u;
    {
        const bool branch_taken_0x1d9520 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9524u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9520u;
        // 0x1d9524: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9520) {
            ctx->pc = 0x1D9878u;
            goto label_1d9878;
        }
    }
    ctx->pc = 0x1D9528u;
    // 0x1d9528: 0x2402001f  addiu       $v0, $zero, 0x1F
    ctx->pc = 0x1d9528u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 31));
    // 0x1d952c: 0x15220012  bne         $t1, $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D952Cu;
    {
        const bool branch_taken_0x1d952c = (GPR_U64(ctx, 9) != GPR_U64(ctx, 2));
        ctx->pc = 0x1D9530u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D952Cu;
        // 0x1d9530: 0xa2fc2  srl         $a1, $t2, 31 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 31));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d952c) {
            ctx->pc = 0x1D9578u;
            goto label_1d9578;
        }
    }
    ctx->pc = 0x1D9534u;
    // 0x1d9534: 0xe0502d  daddu       $t2, $a3, $zero
    ctx->pc = 0x1d9534u;
    SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9538: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d9538u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d953c: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d953cu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d9540: 0x482d  daddu       $t1, $zero, $zero
    ctx->pc = 0x1d9540u;
    SET_GPR_U64(ctx, 9, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9544: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d9544u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d9548: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d9548u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d954c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d954cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d9550: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d9550u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d9554: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d9554u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d9558: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d9558u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d955c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d955cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d9560: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d9560u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d9564: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d9564u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d9568: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d9568u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d956c: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d956cu;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d9570: 0x10000003  b           . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9570u;
    {
        const bool branch_taken_0x1d9570 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9570u;
        // 0x1d9574: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9570) {
            ctx->pc = 0x1D9580u;
            goto label_1d9580;
        }
    }
    ctx->pc = 0x1D9578u;
label_1d9578:
    // 0x1d9578: 0x25290001  addiu       $t1, $t1, 0x1
    ctx->pc = 0x1d9578u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 1));
    // 0x1d957c: 0xa5040  sll         $t2, $t2, 1
    ctx->pc = 0x1d957cu;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 1));
label_1d9580:
    // 0x1d9580: 0x10a000bd  beqz        $a1, . + 4 + (0xBD << 2)
    ctx->pc = 0x1D9580u;
    {
        const bool branch_taken_0x1d9580 = (GPR_U64(ctx, 5) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9584u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9580u;
        // 0x1d9584: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9580) {
            ctx->pc = 0x1D9878u;
            goto label_1d9878;
        }
    }
    ctx->pc = 0x1D9588u;
    // 0x1d9588: 0x2922001c  slti        $v0, $t1, 0x1C
    ctx->pc = 0x1d9588u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x1d958c: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D958Cu;
    {
        const bool branch_taken_0x1d958c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9590u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D958Cu;
        // 0x1d9590: 0xa2ec2  srl         $a1, $t2, 27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d958c) {
            ctx->pc = 0x1D95A4u;
            goto label_1d95a4;
        }
    }
    ctx->pc = 0x1D9594u;
    // 0x1d9594: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x1d9594u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1d9598: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x1d9598u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1d959c: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d959cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d95a0: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1d95a0u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1d95a4:
    // 0x1d95a4: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1d95a4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d95a8: 0x14a300b3  bne         $a1, $v1, . + 4 + (0xB3 << 2)
    ctx->pc = 0x1D95A8u;
    {
        const bool branch_taken_0x1d95a8 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D95ACu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D95A8u;
        // 0x1d95ac: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d95a8) {
            ctx->pc = 0x1D9878u;
            goto label_1d9878;
        }
    }
    ctx->pc = 0x1D95B0u;
    // 0x1d95b0: 0x25290005  addiu       $t1, $t1, 0x5
    ctx->pc = 0x1d95b0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5));
    // 0x1d95b4: 0x29220020  slti        $v0, $t1, 0x20
    ctx->pc = 0x1d95b4u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d95b8: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D95B8u;
    {
        const bool branch_taken_0x1d95b8 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d95b8) {
            ctx->pc = 0x1D95BCu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D95B8u;
            // 0x1d95bc: 0xa5140  sll         $t2, $t2, 5 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 5));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9600u;
            goto label_1d9600;
        }
    }
    ctx->pc = 0x1D95C0u;
    // 0x1d95c0: 0x2529ffe0  addiu       $t1, $t1, -0x20
    ctx->pc = 0x1d95c0u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967264));
    // 0x1d95c4: 0x1275004  sllv        $t2, $a3, $t1
    ctx->pc = 0x1d95c4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
    // 0x1d95c8: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d95c8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d95cc: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d95ccu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d95d0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d95d0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d95d4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d95d4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d95d8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d95d8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d95dc: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d95dcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d95e0: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d95e0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d95e4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d95e4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d95e8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d95e8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d95ec: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d95ecu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d95f0: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d95f0u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d95f4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d95f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d95f8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d95f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d95fc: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d95fcu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1d9600:
    // 0x1d9600: 0x24c6ffff  addiu       $a2, $a2, -0x1
    ctx->pc = 0x1d9600u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
    // 0x1d9604: 0x240b0035  addiu       $t3, $zero, 0x35
    ctx->pc = 0x1d9604u;
    SET_GPR_S32(ctx, 11, (int32_t)ADD32(GPR_U32(ctx, 0), 53));
    // 0x1d9608: 0x24040008  addiu       $a0, $zero, 0x8
    ctx->pc = 0x1d9608u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 0), 8));
    // 0x1d960c: 0x29220016  slti        $v0, $t1, 0x16
    ctx->pc = 0x1d960cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)22) ? 1 : 0);
label_1d9610:
    // 0x1d9610: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D9610u;
    {
        const bool branch_taken_0x1d9610 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9614u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9610u;
        // 0x1d9614: 0xa2d42  srl         $a1, $t2, 21 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 21));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9610) {
            ctx->pc = 0x1D9624u;
            goto label_1d9624;
        }
    }
    ctx->pc = 0x1D9618u;
    // 0x1d9618: 0x1691023  subu        $v0, $t3, $t1
    ctx->pc = 0x1d9618u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 11), GPR_U32(ctx, 9)));
    // 0x1d961c: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d961cu;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d9620: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1d9620u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1d9624:
    // 0x1d9624: 0x14a4001a  bne         $a1, $a0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D9624u;
    {
        const bool branch_taken_0x1d9624 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 4));
        ctx->pc = 0x1D9628u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9624u;
        // 0x1d9628: 0x24c3ffff  addiu       $v1, $a2, -0x1 (Delay Slot)
        SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9624) {
            ctx->pc = 0x1D9690u;
            goto label_1d9690;
        }
    }
    ctx->pc = 0x1D962Cu;
    // 0x1d962c: 0x2529000b  addiu       $t1, $t1, 0xB
    ctx->pc = 0x1d962cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 11));
    // 0x1d9630: 0x29220020  slti        $v0, $t1, 0x20
    ctx->pc = 0x1d9630u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d9634: 0x54400011  bnel        $v0, $zero, . + 4 + (0x11 << 2)
    ctx->pc = 0x1D9634u;
    {
        const bool branch_taken_0x1d9634 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        if (branch_taken_0x1d9634) {
            ctx->pc = 0x1D9638u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D9634u;
            // 0x1d9638: 0xa52c0  sll         $t2, $t2, 11 (Delay Slot)
            SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), 11));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D967Cu;
            goto label_1d967c;
        }
    }
    ctx->pc = 0x1D963Cu;
    // 0x1d963c: 0x2529ffe0  addiu       $t1, $t1, -0x20
    ctx->pc = 0x1d963cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967264));
    // 0x1d9640: 0x1275004  sllv        $t2, $a3, $t1
    ctx->pc = 0x1d9640u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
    // 0x1d9644: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d9644u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d9648: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d9648u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d964c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d964cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d9650: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d9650u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d9654: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d9654u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d9658: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d9658u;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d965c: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d965cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d9660: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d9660u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d9664: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d9664u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d9668: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d9668u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d966c: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d966cu;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d9670: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d9670u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d9674: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d9674u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d9678: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d9678u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
label_1d967c:
    // 0x1d967c: 0x24c6ffdf  addiu       $a2, $a2, -0x21
    ctx->pc = 0x1d967cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967263));
    // 0x1d9680: 0x28c20022  slti        $v0, $a2, 0x22
    ctx->pc = 0x1d9680u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 6) < (int64_t)(int32_t)34) ? 1 : 0);
    // 0x1d9684: 0x1040ffe2  beqz        $v0, . + 4 + (-0x1E << 2)
    ctx->pc = 0x1D9684u;
    {
        const bool branch_taken_0x1d9684 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9688u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9684u;
        // 0x1d9688: 0x29220016  slti        $v0, $t1, 0x16 (Delay Slot)
        SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)22) ? 1 : 0);
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9684) {
            ctx->pc = 0x1D9610u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d9610;
        }
    }
    ctx->pc = 0x1D968Cu;
    // 0x1d968c: 0x24c3ffff  addiu       $v1, $a2, -0x1
    ctx->pc = 0x1d968cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 6), 4294967295));
label_1d9690:
    // 0x1d9690: 0x2c630021  sltiu       $v1, $v1, 0x21
    ctx->pc = 0x1d9690u;
    SET_GPR_U64(ctx, 3, ((uint64_t)GPR_U64(ctx, 3) < (uint64_t)(int64_t)(int32_t)33) ? 1 : 0);
    // 0x1d9694: 0x10600078  beqz        $v1, . + 4 + (0x78 << 2)
    ctx->pc = 0x1D9694u;
    {
        const bool branch_taken_0x1d9694 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9698u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9694u;
        // 0x1d9698: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9694) {
            ctx->pc = 0x1D9878u;
            goto label_1d9878;
        }
    }
    ctx->pc = 0x1D969Cu;
    // 0x1d969c: 0x61040  sll         $v0, $a2, 1
    ctx->pc = 0x1d969cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 6), 1));
    // 0x1d96a0: 0x24030020  addiu       $v1, $zero, 0x20
    ctx->pc = 0x1d96a0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 32));
    // 0x1d96a4: 0x3c06003f  lui         $a2, 0x3F
    ctx->pc = 0x1d96a4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)63 << 16));
    // 0x1d96a8: 0xc23021  addu        $a2, $a2, $v0
    ctx->pc = 0x1d96a8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), GPR_U32(ctx, 2)));
    // 0x1d96ac: 0x84c6c218  lh          $a2, -0x3DE8($a2)
    ctx->pc = 0x1d96acu;
    SET_GPR_S32(ctx, 6, (int16_t)READ16(ADD32(GPR_U32(ctx, 6), 4294951448)));
    // 0x1d96b0: 0x30c400ff  andi        $a0, $a2, 0xFF
    ctx->pc = 0x1d96b0u;
    SET_GPR_U64(ctx, 4, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)255);
    // 0x1d96b4: 0x641823  subu        $v1, $v1, $a0
    ctx->pc = 0x1d96b4u;
    SET_GPR_S32(ctx, 3, (int32_t)SUB32(GPR_U32(ctx, 3), GPR_U32(ctx, 4)));
    // 0x1d96b8: 0x123102a  slt         $v0, $t1, $v1
    ctx->pc = 0x1d96b8u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)GPR_S64(ctx, 3)) ? 1 : 0);
    // 0x1d96bc: 0x1440001a  bnez        $v0, . + 4 + (0x1A << 2)
    ctx->pc = 0x1D96BCu;
    {
        const bool branch_taken_0x1d96bc = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D96C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D96BCu;
        // 0x1d96c0: 0x6a2806  srlv        $a1, $t2, $v1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d96bc) {
            ctx->pc = 0x1D9728u;
            goto label_1d9728;
        }
    }
    ctx->pc = 0x1D96C4u;
    // 0x1d96c4: 0x1241021  addu        $v0, $t1, $a0
    ctx->pc = 0x1d96c4u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
    // 0x1d96c8: 0x2449ffe0  addiu       $t1, $v0, -0x20
    ctx->pc = 0x1d96c8u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967264));
    // 0x1d96cc: 0x51200006  beql        $t1, $zero, . + 4 + (0x6 << 2)
    ctx->pc = 0x1D96CCu;
    {
        const bool branch_taken_0x1d96cc = (GPR_U64(ctx, 9) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d96cc) {
            ctx->pc = 0x1D96D0u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D96CCu;
            // 0x1d96d0: 0xe0502d  daddu       $t2, $a3, $zero (Delay Slot)
            SET_GPR_U64(ctx, 10, (uint64_t)GPR_U64(ctx, 7) + (uint64_t)GPR_U64(ctx, 0));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D96E8u;
            goto label_1d96e8;
        }
    }
    ctx->pc = 0x1D96D4u;
    // 0x1d96d4: 0x891023  subu        $v0, $a0, $t1
    ctx->pc = 0x1d96d4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 9)));
    // 0x1d96d8: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d96d8u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d96dc: 0x1425025  or          $t2, $t2, $v0
    ctx->pc = 0x1d96dcu;
    SET_GPR_U64(ctx, 10, GPR_U64(ctx, 10) | GPR_U64(ctx, 2));
    // 0x1d96e0: 0x6a2806  srlv        $a1, $t2, $v1
    ctx->pc = 0x1d96e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), GPR_U32(ctx, 3) & 0x1F));
    // 0x1d96e4: 0x1275004  sllv        $t2, $a3, $t1
    ctx->pc = 0x1d96e4u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 7), GPR_U32(ctx, 9) & 0x1F));
label_1d96e8:
    // 0x1d96e8: 0x81070000  lb          $a3, 0x0($t0)
    ctx->pc = 0x1d96e8u;
    SET_GPR_S32(ctx, 7, (int8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d96ec: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d96ecu;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d96f0: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d96f0u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d96f4: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d96f4u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d96f8: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d96f8u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d96fc: 0x91030000  lbu         $v1, 0x0($t0)
    ctx->pc = 0x1d96fcu;
    SET_GPR_U32(ctx, 3, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d9700: 0xe23825  or          $a3, $a3, $v0
    ctx->pc = 0x1d9700u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
    // 0x1d9704: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d9704u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d9708: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d9708u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d970c: 0x91020000  lbu         $v0, 0x0($t0)
    ctx->pc = 0x1d970cu;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 8), 0)));
    // 0x1d9710: 0xe33825  or          $a3, $a3, $v1
    ctx->pc = 0x1d9710u;
    SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 3));
    // 0x1d9714: 0x25080001  addiu       $t0, $t0, 0x1
    ctx->pc = 0x1d9714u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 1));
    // 0x1d9718: 0x73a00  sll         $a3, $a3, 8
    ctx->pc = 0x1d9718u;
    SET_GPR_S32(ctx, 7, (int32_t)SLL32(GPR_U32(ctx, 7), 8));
    // 0x1d971c: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x1D971Cu;
    {
        const bool branch_taken_0x1d971c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9720u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D971Cu;
        // 0x1d9720: 0xe23825  or          $a3, $a3, $v0 (Delay Slot)
        SET_GPR_U64(ctx, 7, GPR_U64(ctx, 7) | GPR_U64(ctx, 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d971c) {
            ctx->pc = 0x1D9730u;
            goto label_1d9730;
        }
    }
    ctx->pc = 0x1D9724u;
    // 0x1d9724: 0x0  nop
    ctx->pc = 0x1d9724u;
    // NOP
label_1d9728:
    // 0x1d9728: 0x8a5004  sllv        $t2, $t2, $a0
    ctx->pc = 0x1d9728u;
    SET_GPR_S32(ctx, 10, (int32_t)SLL32(GPR_U32(ctx, 10), GPR_U32(ctx, 4) & 0x1F));
    // 0x1d972c: 0x1244821  addu        $t1, $t1, $a0
    ctx->pc = 0x1d972cu;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), GPR_U32(ctx, 4)));
label_1d9730:
    // 0x1d9730: 0x61a03  sra         $v1, $a2, 8
    ctx->pc = 0x1d9730u;
    SET_GPR_S32(ctx, 3, SRA32(GPR_S32(ctx, 6), 8));
    // 0x1d9734: 0x14a30050  bne         $a1, $v1, . + 4 + (0x50 << 2)
    ctx->pc = 0x1D9734u;
    {
        const bool branch_taken_0x1d9734 = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D9738u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9734u;
        // 0x1d9738: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9734) {
            ctx->pc = 0x1D9878u;
            goto label_1d9878;
        }
    }
    ctx->pc = 0x1D973Cu;
    // 0x1d973c: 0x2922001c  slti        $v0, $t1, 0x1C
    ctx->pc = 0x1d973cu;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)28) ? 1 : 0);
    // 0x1d9740: 0x14400005  bnez        $v0, . + 4 + (0x5 << 2)
    ctx->pc = 0x1D9740u;
    {
        const bool branch_taken_0x1d9740 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9744u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9740u;
        // 0x1d9744: 0xa2ec2  srl         $a1, $t2, 27 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SRL32(GPR_U32(ctx, 10), 27));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9740) {
            ctx->pc = 0x1D9758u;
            goto label_1d9758;
        }
    }
    ctx->pc = 0x1D9748u;
    // 0x1d9748: 0x2402003b  addiu       $v0, $zero, 0x3B
    ctx->pc = 0x1d9748u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 59));
    // 0x1d974c: 0x491023  subu        $v0, $v0, $t1
    ctx->pc = 0x1d974cu;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 2), GPR_U32(ctx, 9)));
    // 0x1d9750: 0x471006  srlv        $v0, $a3, $v0
    ctx->pc = 0x1d9750u;
    SET_GPR_S32(ctx, 2, (int32_t)SRL32(GPR_U32(ctx, 7), GPR_U32(ctx, 2) & 0x1F));
    // 0x1d9754: 0xa22825  or          $a1, $a1, $v0
    ctx->pc = 0x1d9754u;
    SET_GPR_U64(ctx, 5, GPR_U64(ctx, 5) | GPR_U64(ctx, 2));
label_1d9758:
    // 0x1d9758: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x1d9758u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
    // 0x1d975c: 0x14a30046  bne         $a1, $v1, . + 4 + (0x46 << 2)
    ctx->pc = 0x1D975Cu;
    {
        const bool branch_taken_0x1d975c = (GPR_U64(ctx, 5) != GPR_U64(ctx, 3));
        ctx->pc = 0x1D9760u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D975Cu;
        // 0x1d9760: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d975c) {
            ctx->pc = 0x1D9878u;
            goto label_1d9878;
        }
    }
    ctx->pc = 0x1D9764u;
    // 0x1d9764: 0x25290005  addiu       $t1, $t1, 0x5
    ctx->pc = 0x1d9764u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 5));
    // 0x1d9768: 0x29220020  slti        $v0, $t1, 0x20
    ctx->pc = 0x1d9768u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 9) < (int64_t)(int32_t)32) ? 1 : 0);
    // 0x1d976c: 0x14400004  bnez        $v0, . + 4 + (0x4 << 2)
    ctx->pc = 0x1D976Cu;
    {
        const bool branch_taken_0x1d976c = (GPR_U64(ctx, 2) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9770u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D976Cu;
        // 0x1d9770: 0x25220007  addiu       $v0, $t1, 0x7 (Delay Slot)
        SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d976c) {
            ctx->pc = 0x1D9780u;
            goto label_1d9780;
        }
    }
    ctx->pc = 0x1D9774u;
    // 0x1d9774: 0x2529ffe0  addiu       $t1, $t1, -0x20
    ctx->pc = 0x1d9774u;
    SET_GPR_S32(ctx, 9, (int32_t)ADD32(GPR_U32(ctx, 9), 4294967264));
    // 0x1d9778: 0x25080004  addiu       $t0, $t0, 0x4
    ctx->pc = 0x1d9778u;
    SET_GPR_S32(ctx, 8, (int32_t)ADD32(GPR_U32(ctx, 8), 4));
    // 0x1d977c: 0x25220007  addiu       $v0, $t1, 0x7
    ctx->pc = 0x1d977cu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 9), 7));
label_1d9780:
    // 0x1d9780: 0x210c3  sra         $v0, $v0, 3
    ctx->pc = 0x1d9780u;
    SET_GPR_S32(ctx, 2, SRA32(GPR_S32(ctx, 2), 3));
    // 0x1d9784: 0x1021021  addu        $v0, $t0, $v0
    ctx->pc = 0x1d9784u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 8), GPR_U32(ctx, 2)));
    // 0x1d9788: 0x2444fff8  addiu       $a0, $v0, -0x8
    ctx->pc = 0x1d9788u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 2), 4294967288));
    // 0x1d978c: 0x912823  subu        $a1, $a0, $s1
    ctx->pc = 0x1d978cu;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 4), GPR_U32(ctx, 17)));
    // 0x1d9790: 0x245102a  slt         $v0, $s2, $a1
    ctx->pc = 0x1d9790u;
    SET_GPR_U64(ctx, 2, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1d9794: 0x10400012  beqz        $v0, . + 4 + (0x12 << 2)
    ctx->pc = 0x1D9794u;
    {
        const bool branch_taken_0x1d9794 = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9798u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9794u;
        // 0x1d9798: 0x24130003  addiu       $s3, $zero, 0x3 (Delay Slot)
        SET_GPR_S32(ctx, 19, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9794) {
            ctx->pc = 0x1D97E0u;
            goto label_1d97e0;
        }
    }
    ctx->pc = 0x1D979Cu;
    // 0x1d979c: 0x10000036  b           . + 4 + (0x36 << 2)
    ctx->pc = 0x1D979Cu;
    {
        const bool branch_taken_0x1d979c = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D97A0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D979Cu;
        // 0x1d97a0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d979c) {
            ctx->pc = 0x1D9878u;
            goto label_1d9878;
        }
    }
    ctx->pc = 0x1D97A4u;
    // 0x1d97a4: 0x0  nop
    ctx->pc = 0x1d97a4u;
    // NOP
label_1d97a8:
    // 0x1d97a8: 0x30c20008  andi        $v0, $a2, 0x8
    ctx->pc = 0x1d97a8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)8);
    // 0x1d97ac: 0x10400032  beqz        $v0, . + 4 + (0x32 << 2)
    ctx->pc = 0x1D97ACu;
    {
        const bool branch_taken_0x1d97ac = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D97B0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D97ACu;
        // 0x1d97b0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d97ac) {
            ctx->pc = 0x1D9878u;
            goto label_1d9878;
        }
    }
    ctx->pc = 0x1D97B4u;
    // 0x1d97b4: 0x92020007  lbu         $v0, 0x7($s0)
    ctx->pc = 0x1d97b4u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 7)));
    // 0x1d97b8: 0x30420040  andi        $v0, $v0, 0x40
    ctx->pc = 0x1d97b8u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)64);
    // 0x1d97bc: 0x1040002e  beqz        $v0, . + 4 + (0x2E << 2)
    ctx->pc = 0x1D97BCu;
    {
        const bool branch_taken_0x1d97bc = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D97C0u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D97BCu;
        // 0x1d97c0: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d97bc) {
            ctx->pc = 0x1D9878u;
            goto label_1d9878;
        }
    }
    ctx->pc = 0x1D97C4u;
    // 0x1d97c4: 0x2111023  subu        $v0, $s0, $s1
    ctx->pc = 0x1d97c4u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1d97c8: 0x24450007  addiu       $a1, $v0, 0x7
    ctx->pc = 0x1d97c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 7));
    // 0x1d97cc: 0x245182a  slt         $v1, $s2, $a1
    ctx->pc = 0x1d97ccu;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1d97d0: 0x50600029  beql        $v1, $zero, . + 4 + (0x29 << 2)
    ctx->pc = 0x1D97D0u;
    {
        const bool branch_taken_0x1d97d0 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        if (branch_taken_0x1d97d0) {
            ctx->pc = 0x1D97D4u;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x1D97D0u;
            // 0x1d97d4: 0x24020001  addiu       $v0, $zero, 0x1 (Delay Slot)
            SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
            ctx->in_delay_slot = false;
            ctx->pc = 0x1D9878u;
            goto label_1d9878;
        }
    }
    ctx->pc = 0x1D97D8u;
    // 0x1d97d8: 0x10000027  b           . + 4 + (0x27 << 2)
    ctx->pc = 0x1D97D8u;
    {
        const bool branch_taken_0x1d97d8 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D97DCu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D97D8u;
        // 0x1d97dc: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d97d8) {
            ctx->pc = 0x1D9878u;
            goto label_1d9878;
        }
    }
    ctx->pc = 0x1D97E0u;
label_1d97e0:
    // 0x1d97e0: 0x2452823  subu        $a1, $s2, $a1
    ctx->pc = 0x1d97e0u;
    SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
label_1d97e4:
    // 0x1d97e4: 0xc076326  jal         func_1D8C98
    ctx->pc = 0x1D97E4u;
    SET_GPR_U32(ctx, 31, 0x1D97ECu);
    ctx->pc = 0x1D97E8u;
    ctx->in_delay_slot = true;
    ctx->branch_pc = 0x1D97E4u;
    // 0x1d97e8: 0x240600cc  addiu       $a2, $zero, 0xCC (Delay Slot)
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 0), 204));
    ctx->in_delay_slot = false;
    ctx->pc = 0x1D8C98u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8C98u, 0x1D97E4u, 0x1D97ECu, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D97ECu;
label_1d97ec:
    // 0x1d97ec: 0x40802d  daddu       $s0, $v0, $zero
    ctx->pc = 0x1d97ecu;
    SET_GPR_U64(ctx, 16, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d97f0: 0x12000021  beqz        $s0, . + 4 + (0x21 << 2)
    ctx->pc = 0x1D97F0u;
    {
        const bool branch_taken_0x1d97f0 = (GPR_U64(ctx, 16) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D97F4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D97F0u;
        // 0x1d97f4: 0x200202d  daddu       $a0, $s0, $zero (Delay Slot)
        SET_GPR_U64(ctx, 4, (uint64_t)GPR_U64(ctx, 16) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d97f0) {
            ctx->pc = 0x1D9878u;
            goto label_1d9878;
        }
    }
    ctx->pc = 0x1D97F8u;
    // 0x1d97f8: 0xc0762c0  jal         func_1D8B00
    ctx->pc = 0x1D97F8u;
    SET_GPR_U32(ctx, 31, 0x1D9800u);
    ctx->pc = 0x1D8B00u;
    if (!runtime->dispatchGuestBranch(rdram, ctx, 0x1D8B00u, 0x1D97F8u, 0x1D9800u, PS2Runtime::GuestBranchKind::DirectCall, "JAL")) {
        return;
    }
    ctx->pc = 0x1D9800u;
label_1d9800:
    // 0x1d9800: 0x26040001  addiu       $a0, $s0, 0x1
    ctx->pc = 0x1d9800u;
    SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
    // 0x1d9804: 0x40302d  daddu       $a2, $v0, $zero
    ctx->pc = 0x1d9804u;
    SET_GPR_U64(ctx, 6, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9808: 0x2111023  subu        $v0, $s0, $s1
    ctx->pc = 0x1d9808u;
    SET_GPR_S32(ctx, 2, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
    // 0x1d980c: 0x30c30004  andi        $v1, $a2, 0x4
    ctx->pc = 0x1d980cu;
    SET_GPR_U64(ctx, 3, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)4);
    // 0x1d9810: 0x30c80040  andi        $t0, $a2, 0x40
    ctx->pc = 0x1d9810u;
    SET_GPR_U64(ctx, 8, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)64);
    // 0x1d9814: 0x40382d  daddu       $a3, $v0, $zero
    ctx->pc = 0x1d9814u;
    SET_GPR_U64(ctx, 7, (uint64_t)GPR_U64(ctx, 2) + (uint64_t)GPR_U64(ctx, 0));
    // 0x1d9818: 0x1060000b  beqz        $v1, . + 4 + (0xB << 2)
    ctx->pc = 0x1D9818u;
    {
        const bool branch_taken_0x1d9818 = (GPR_U64(ctx, 3) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D981Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9818u;
        // 0x1d981c: 0x24450001  addiu       $a1, $v0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 2), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9818) {
            ctx->pc = 0x1D9848u;
            goto label_1d9848;
        }
    }
    ctx->pc = 0x1D9820u;
    // 0x1d9820: 0x92020005  lbu         $v0, 0x5($s0)
    ctx->pc = 0x1d9820u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 16), 5)));
    // 0x1d9824: 0x82030006  lb          $v1, 0x6($s0)
    ctx->pc = 0x1d9824u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 16), 6)));
    // 0x1d9828: 0x30420003  andi        $v0, $v0, 0x3
    ctx->pc = 0x1d9828u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)3);
    // 0x1d982c: 0x21040  sll         $v0, $v0, 1
    ctx->pc = 0x1d982cu;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 1));
    // 0x1d9830: 0x31fc2  srl         $v1, $v1, 31
    ctx->pc = 0x1d9830u;
    SET_GPR_S32(ctx, 3, (int32_t)SRL32(GPR_U32(ctx, 3), 31));
    // 0x1d9834: 0x431025  or          $v0, $v0, $v1
    ctx->pc = 0x1d9834u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) | GPR_U64(ctx, 3));
    // 0x1d9838: 0x1453000f  bne         $v0, $s3, . + 4 + (0xF << 2)
    ctx->pc = 0x1D9838u;
    {
        const bool branch_taken_0x1d9838 = (GPR_U64(ctx, 2) != GPR_U64(ctx, 19));
        ctx->pc = 0x1D983Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9838u;
        // 0x1d983c: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9838) {
            ctx->pc = 0x1D9878u;
            goto label_1d9878;
        }
    }
    ctx->pc = 0x1D9840u;
    // 0x1d9840: 0x1000ffe8  b           . + 4 + (-0x18 << 2)
    ctx->pc = 0x1D9840u;
    {
        const bool branch_taken_0x1d9840 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9844u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9840u;
        // 0x1d9844: 0x2452823  subu        $a1, $s2, $a1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)SUB32(GPR_U32(ctx, 18), GPR_U32(ctx, 5)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9840) {
            ctx->pc = 0x1D97E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d97e4;
        }
    }
    ctx->pc = 0x1D9848u;
label_1d9848:
    // 0x1d9848: 0x11000003  beqz        $t0, . + 4 + (0x3 << 2)
    ctx->pc = 0x1D9848u;
    {
        const bool branch_taken_0x1d9848 = (GPR_U64(ctx, 8) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D984Cu;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9848u;
        // 0x1d984c: 0x24e50001  addiu       $a1, $a3, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 7), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9848) {
            ctx->pc = 0x1D9858u;
            goto label_1d9858;
        }
    }
    ctx->pc = 0x1D9850u;
    // 0x1d9850: 0x1000ffe3  b           . + 4 + (-0x1D << 2)
    ctx->pc = 0x1D9850u;
    {
        const bool branch_taken_0x1d9850 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9854u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D9850u;
        // 0x1d9854: 0x26040001  addiu       $a0, $s0, 0x1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)ADD32(GPR_U32(ctx, 16), 1));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d9850) {
            ctx->pc = 0x1D97E0u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d97e0;
        }
    }
    ctx->pc = 0x1D9858u;
label_1d9858:
    // 0x1d9858: 0x30c20080  andi        $v0, $a2, 0x80
    ctx->pc = 0x1d9858u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 6) & (uint64_t)(uint16_t)128);
    // 0x1d985c: 0x1040ffd2  beqz        $v0, . + 4 + (-0x2E << 2)
    ctx->pc = 0x1D985Cu;
    {
        const bool branch_taken_0x1d985c = (GPR_U64(ctx, 2) == GPR_U64(ctx, 0));
        ctx->pc = 0x1D9860u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D985Cu;
        // 0x1d9860: 0x2112023  subu        $a0, $s0, $s1 (Delay Slot)
        SET_GPR_S32(ctx, 4, (int32_t)SUB32(GPR_U32(ctx, 16), GPR_U32(ctx, 17)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d985c) {
            ctx->pc = 0x1D97A8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_1d97a8;
        }
    }
    ctx->pc = 0x1D9864u;
    // 0x1d9864: 0x24850004  addiu       $a1, $a0, 0x4
    ctx->pc = 0x1d9864u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 4), 4));
    // 0x1d9868: 0x245182a  slt         $v1, $s2, $a1
    ctx->pc = 0x1d9868u;
    SET_GPR_U64(ctx, 3, ((int64_t)GPR_S64(ctx, 18) < (int64_t)GPR_S64(ctx, 5)) ? 1 : 0);
    // 0x1d986c: 0x14600002  bnez        $v1, . + 4 + (0x2 << 2)
    ctx->pc = 0x1D986Cu;
    {
        const bool branch_taken_0x1d986c = (GPR_U64(ctx, 3) != GPR_U64(ctx, 0));
        ctx->pc = 0x1D9870u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D986Cu;
        // 0x1d9870: 0x102d  daddu       $v0, $zero, $zero (Delay Slot)
        SET_GPR_U64(ctx, 2, (uint64_t)GPR_U64(ctx, 0) + (uint64_t)GPR_U64(ctx, 0));
        ctx->in_delay_slot = false;
        if (branch_taken_0x1d986c) {
            ctx->pc = 0x1D9878u;
            goto label_1d9878;
        }
    }
    ctx->pc = 0x1D9874u;
    // 0x1d9874: 0x24020001  addiu       $v0, $zero, 0x1
    ctx->pc = 0x1d9874u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 0), 1));
label_1d9878:
    // 0x1d9878: 0xdfb00000  ld          $s0, 0x0($sp)
    ctx->pc = 0x1d9878u;
    SET_GPR_U64(ctx, 16, READ64(ADD32(GPR_U32(ctx, 29), 0)));
    // 0x1d987c: 0xdfb10008  ld          $s1, 0x8($sp)
    ctx->pc = 0x1d987cu;
    SET_GPR_U64(ctx, 17, READ64(ADD32(GPR_U32(ctx, 29), 8)));
    // 0x1d9880: 0xdfb20010  ld          $s2, 0x10($sp)
    ctx->pc = 0x1d9880u;
    SET_GPR_U64(ctx, 18, READ64(ADD32(GPR_U32(ctx, 29), 16)));
    // 0x1d9884: 0xdfb30018  ld          $s3, 0x18($sp)
    ctx->pc = 0x1d9884u;
    SET_GPR_U64(ctx, 19, READ64(ADD32(GPR_U32(ctx, 29), 24)));
    // 0x1d9888: 0xdfbf0020  ld          $ra, 0x20($sp)
    ctx->pc = 0x1d9888u;
    SET_GPR_U64(ctx, 31, READ64(ADD32(GPR_U32(ctx, 29), 32)));
    // 0x1d988c: 0x3e00008  jr          $ra
    ctx->pc = 0x1D988Cu;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x1D9890u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x1D988Cu;
        // 0x1d9890: 0x27bd0030  addiu       $sp, $sp, 0x30 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 48));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x1D988Cu, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x1D9894u;
    // 0x1d9894: 0x0  nop
    ctx->pc = 0x1d9894u;
    // NOP
}
