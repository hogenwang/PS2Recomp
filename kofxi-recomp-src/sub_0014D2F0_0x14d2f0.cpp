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

// Function: sub_0014D2F0
// Address: 0x14d2f0 - 0x14d580
void sub_0014D2F0_0x14d2f0(uint8_t* rdram, R5900Context* ctx, PS2Runtime *runtime) {
#ifdef PS2_FUNCTION_LOG_TRACKER
    PS_LOG_ENTRY("sub_0014D2F0_0x14d2f0");
#endif

    switch (ctx->pc) {
        case 0x14d304u: goto label_14d304;
        case 0x14d330u: goto label_14d330;
        case 0x14d35cu: goto label_14d35c;
        case 0x14d388u: goto label_14d388;
        case 0x14d3b8u: goto label_14d3b8;
        case 0x14d3e4u: goto label_14d3e4;
        case 0x14d410u: goto label_14d410;
        case 0x14d43cu: goto label_14d43c;
        case 0x14d46cu: goto label_14d46c;
        default: break;
    }

    ctx->pc = 0x14d2f0u;

    // 0x14d2f0: 0x27bdff80  addiu       $sp, $sp, -0x80
    ctx->pc = 0x14d2f0u;
    SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 4294967168));
    // 0x14d2f4: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x14d2f4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x14d2f8: 0x24c6e3c0  addiu       $a2, $a2, -0x1C40
    ctx->pc = 0x14d2f8u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960064));
    // 0x14d2fc: 0x27a50070  addiu       $a1, $sp, 0x70
    ctx->pc = 0x14d2fcu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 112));
    // 0x14d300: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x14d300u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_14d304:
    // 0x14d304: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x14d304u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14d308: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14d308u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14d30c: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x14d30cu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x14d310: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x14d310u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x14d314: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14d314u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14d318: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14D318u;
    {
        const bool branch_taken_0x14d318 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x14d318) {
            ctx->pc = 0x14D304u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14d304;
        }
    }
    ctx->pc = 0x14D320u;
    // 0x14d320: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x14d320u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x14d324: 0x27a50060  addiu       $a1, $sp, 0x60
    ctx->pc = 0x14d324u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 96));
    // 0x14d328: 0x24c6e3d0  addiu       $a2, $a2, -0x1C30
    ctx->pc = 0x14d328u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960080));
    // 0x14d32c: 0x2403000d  addiu       $v1, $zero, 0xD
    ctx->pc = 0x14d32cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 13));
label_14d330:
    // 0x14d330: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x14d330u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14d334: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14d334u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14d338: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x14d338u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x14d33c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x14d33cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x14d340: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14d340u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14d344: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14D344u;
    {
        const bool branch_taken_0x14d344 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x14d344) {
            ctx->pc = 0x14D330u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14d330;
        }
    }
    ctx->pc = 0x14D34Cu;
    // 0x14d34c: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x14d34cu;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x14d350: 0x27a50058  addiu       $a1, $sp, 0x58
    ctx->pc = 0x14d350u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 88));
    // 0x14d354: 0x24c6e3e0  addiu       $a2, $a2, -0x1C20
    ctx->pc = 0x14d354u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960096));
    // 0x14d358: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x14d358u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_14d35c:
    // 0x14d35c: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x14d35cu;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14d360: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14d360u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14d364: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x14d364u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x14d368: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x14d368u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x14d36c: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14d36cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14d370: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14D370u;
    {
        const bool branch_taken_0x14d370 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x14d370) {
            ctx->pc = 0x14D35Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14d35c;
        }
    }
    ctx->pc = 0x14D378u;
    // 0x14d378: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x14d378u;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x14d37c: 0x27a60050  addiu       $a2, $sp, 0x50
    ctx->pc = 0x14d37cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 80));
    // 0x14d380: 0x24e7e3e8  addiu       $a3, $a3, -0x1C18
    ctx->pc = 0x14d380u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960104));
    // 0x14d384: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x14d384u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_14d388:
    // 0x14d388: 0x80e30000  lb          $v1, 0x0($a3)
    ctx->pc = 0x14d388u;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14d38c: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x14d38cu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x14d390: 0x80e20001  lb          $v0, 0x1($a3)
    ctx->pc = 0x14d390u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x14d394: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x14d394u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x14d398: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x14d398u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x14d39c: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x14d39cu;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x14d3a0: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x14D3A0u;
    {
        const bool branch_taken_0x14d3a0 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x14D3A4u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D3A0u;
        // 0x14d3a4: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d3a0) {
            ctx->pc = 0x14D388u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14d388;
        }
    }
    ctx->pc = 0x14D3A8u;
    // 0x14d3a8: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x14d3a8u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x14d3ac: 0x27a50000  addiu       $a1, $sp, 0x0
    ctx->pc = 0x14d3acu;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 0));
    // 0x14d3b0: 0x24c6e3f0  addiu       $a2, $a2, -0x1C10
    ctx->pc = 0x14d3b0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960112));
    // 0x14d3b4: 0x24030013  addiu       $v1, $zero, 0x13
    ctx->pc = 0x14d3b4u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 19));
label_14d3b8:
    // 0x14d3b8: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x14d3b8u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14d3bc: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14d3bcu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14d3c0: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x14d3c0u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x14d3c4: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x14d3c4u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x14d3c8: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14d3c8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14d3cc: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14D3CCu;
    {
        const bool branch_taken_0x14d3cc = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x14d3cc) {
            ctx->pc = 0x14D3B8u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14d3b8;
        }
    }
    ctx->pc = 0x14D3D4u;
    // 0x14d3d4: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x14d3d4u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x14d3d8: 0x27a50040  addiu       $a1, $sp, 0x40
    ctx->pc = 0x14d3d8u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 64));
    // 0x14d3dc: 0x24c6e408  addiu       $a2, $a2, -0x1BF8
    ctx->pc = 0x14d3dcu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960136));
    // 0x14d3e0: 0x24030009  addiu       $v1, $zero, 0x9
    ctx->pc = 0x14d3e0u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 9));
label_14d3e4:
    // 0x14d3e4: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x14d3e4u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14d3e8: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14d3e8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14d3ec: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x14d3ecu;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x14d3f0: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x14d3f0u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x14d3f4: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14d3f4u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14d3f8: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14D3F8u;
    {
        const bool branch_taken_0x14d3f8 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x14d3f8) {
            ctx->pc = 0x14D3E4u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14d3e4;
        }
    }
    ctx->pc = 0x14D400u;
    // 0x14d400: 0x3c060036  lui         $a2, 0x36
    ctx->pc = 0x14d400u;
    SET_GPR_S32(ctx, 6, (int32_t)((uint32_t)54 << 16));
    // 0x14d404: 0x27a50038  addiu       $a1, $sp, 0x38
    ctx->pc = 0x14d404u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 29), 56));
    // 0x14d408: 0x24c6e418  addiu       $a2, $a2, -0x1BE8
    ctx->pc = 0x14d408u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 4294960152));
    // 0x14d40c: 0x24030007  addiu       $v1, $zero, 0x7
    ctx->pc = 0x14d40cu;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 0), 7));
label_14d410:
    // 0x14d410: 0x80c20000  lb          $v0, 0x0($a2)
    ctx->pc = 0x14d410u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 6), 0)));
    // 0x14d414: 0x2463ffff  addiu       $v1, $v1, -0x1
    ctx->pc = 0x14d414u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294967295));
    // 0x14d418: 0xa0a20000  sb          $v0, 0x0($a1)
    ctx->pc = 0x14d418u;
    WRITE8(ADD32(GPR_U32(ctx, 5), 0), (uint8_t)GPR_U32(ctx, 2));
    // 0x14d41c: 0x24c60001  addiu       $a2, $a2, 0x1
    ctx->pc = 0x14d41cu;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 1));
    // 0x14d420: 0x24a50001  addiu       $a1, $a1, 0x1
    ctx->pc = 0x14d420u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 1));
    // 0x14d424: 0x1c60fffa  bgtz        $v1, . + 4 + (-0x6 << 2)
    ctx->pc = 0x14D424u;
    {
        const bool branch_taken_0x14d424 = (GPR_S32(ctx, 3) > 0);
        if (branch_taken_0x14d424) {
            ctx->pc = 0x14D410u;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14d410;
        }
    }
    ctx->pc = 0x14D42Cu;
    // 0x14d42c: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x14d42cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x14d430: 0x27a60028  addiu       $a2, $sp, 0x28
    ctx->pc = 0x14d430u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 40));
    // 0x14d434: 0x24e7e420  addiu       $a3, $a3, -0x1BE0
    ctx->pc = 0x14d434u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960160));
    // 0x14d438: 0x24050005  addiu       $a1, $zero, 0x5
    ctx->pc = 0x14d438u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 5));
label_14d43c:
    // 0x14d43c: 0x80e30000  lb          $v1, 0x0($a3)
    ctx->pc = 0x14d43cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14d440: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x14d440u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x14d444: 0x80e20001  lb          $v0, 0x1($a3)
    ctx->pc = 0x14d444u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x14d448: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x14d448u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x14d44c: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x14d44cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x14d450: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x14d450u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x14d454: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x14D454u;
    {
        const bool branch_taken_0x14d454 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x14D458u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D454u;
        // 0x14d458: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d454) {
            ctx->pc = 0x14D43Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14d43c;
        }
    }
    ctx->pc = 0x14D45Cu;
    // 0x14d45c: 0x3c070036  lui         $a3, 0x36
    ctx->pc = 0x14d45cu;
    SET_GPR_S32(ctx, 7, (int32_t)((uint32_t)54 << 16));
    // 0x14d460: 0x27a60020  addiu       $a2, $sp, 0x20
    ctx->pc = 0x14d460u;
    SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 29), 32));
    // 0x14d464: 0x24e7e430  addiu       $a3, $a3, -0x1BD0
    ctx->pc = 0x14d464u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 4294960176));
    // 0x14d468: 0x24050003  addiu       $a1, $zero, 0x3
    ctx->pc = 0x14d468u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 0), 3));
label_14d46c:
    // 0x14d46c: 0x80e30000  lb          $v1, 0x0($a3)
    ctx->pc = 0x14d46cu;
    SET_GPR_S32(ctx, 3, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 0)));
    // 0x14d470: 0x24a5ffff  addiu       $a1, $a1, -0x1
    ctx->pc = 0x14d470u;
    SET_GPR_S32(ctx, 5, (int32_t)ADD32(GPR_U32(ctx, 5), 4294967295));
    // 0x14d474: 0x80e20001  lb          $v0, 0x1($a3)
    ctx->pc = 0x14d474u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 7), 1)));
    // 0x14d478: 0xa0c30000  sb          $v1, 0x0($a2)
    ctx->pc = 0x14d478u;
    WRITE8(ADD32(GPR_U32(ctx, 6), 0), (uint8_t)GPR_U32(ctx, 3));
    // 0x14d47c: 0xa0c20001  sb          $v0, 0x1($a2)
    ctx->pc = 0x14d47cu;
    WRITE8(ADD32(GPR_U32(ctx, 6), 1), (uint8_t)GPR_U32(ctx, 2));
    // 0x14d480: 0x24e70002  addiu       $a3, $a3, 0x2
    ctx->pc = 0x14d480u;
    SET_GPR_S32(ctx, 7, (int32_t)ADD32(GPR_U32(ctx, 7), 2));
    // 0x14d484: 0x1ca0fff9  bgtz        $a1, . + 4 + (-0x7 << 2)
    ctx->pc = 0x14D484u;
    {
        const bool branch_taken_0x14d484 = (GPR_S32(ctx, 5) > 0);
        ctx->pc = 0x14D488u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D484u;
        // 0x14d488: 0x24c60002  addiu       $a2, $a2, 0x2 (Delay Slot)
        SET_GPR_S32(ctx, 6, (int32_t)ADD32(GPR_U32(ctx, 6), 2));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d484) {
            ctx->pc = 0x14D46Cu;
            if (runtime->shouldPreemptGuestExecution()) {
                return;
            }
            goto label_14d46c;
        }
    }
    ctx->pc = 0x14D48Cu;
    // 0x14d48c: 0x3c020093  lui         $v0, 0x93
    ctx->pc = 0x14d48cu;
    SET_GPR_S32(ctx, 2, (int32_t)((uint32_t)147 << 16));
    // 0x14d490: 0x8042f340  lb          $v0, -0xCC0($v0)
    ctx->pc = 0x14d490u;
    SET_GPR_S32(ctx, 2, (int8_t)READ8(ADD32(GPR_U32(ctx, 2), 4294964032)));
    // 0x14d494: 0x2c41000b  sltiu       $at, $v0, 0xB
    ctx->pc = 0x14d494u;
    SET_GPR_U64(ctx, 1, ((uint64_t)GPR_U64(ctx, 2) < (uint64_t)(int64_t)(int32_t)11) ? 1 : 0);
    // 0x14d498: 0x50200031  beql        $at, $zero, . + 4 + (0x31 << 2)
    ctx->pc = 0x14D498u;
    {
        const bool branch_taken_0x14d498 = (GPR_U64(ctx, 1) == GPR_U64(ctx, 0));
        if (branch_taken_0x14d498) {
            ctx->pc = 0x14D49Cu;
            ctx->in_delay_slot = true;
            ctx->branch_pc = 0x14D498u;
            // 0x14d49c: 0x3082ffff  andi        $v0, $a0, 0xFFFF (Delay Slot)
            SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
            ctx->in_delay_slot = false;
            ctx->pc = 0x14D560u;
            goto label_14d560;
        }
    }
    ctx->pc = 0x14D4A0u;
    // 0x14d4a0: 0x3c03003e  lui         $v1, 0x3E
    ctx->pc = 0x14d4a0u;
    SET_GPR_S32(ctx, 3, (int32_t)((uint32_t)62 << 16));
    // 0x14d4a4: 0x21080  sll         $v0, $v0, 2
    ctx->pc = 0x14d4a4u;
    SET_GPR_S32(ctx, 2, (int32_t)SLL32(GPR_U32(ctx, 2), 2));
    // 0x14d4a8: 0x2463cf60  addiu       $v1, $v1, -0x30A0
    ctx->pc = 0x14d4a8u;
    SET_GPR_S32(ctx, 3, (int32_t)ADD32(GPR_U32(ctx, 3), 4294954848));
    // 0x14d4ac: 0x431021  addu        $v0, $v0, $v1
    ctx->pc = 0x14d4acu;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 3)));
    // 0x14d4b0: 0x8c420000  lw          $v0, 0x0($v0)
    ctx->pc = 0x14d4b0u;
    SET_GPR_S32(ctx, 2, (int32_t)READ32(ADD32(GPR_U32(ctx, 2), 0)));
    // 0x14d4b4: 0x400008  jr          $v0
    ctx->pc = 0x14D4B4u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 2);
        ctx->pc = jumpTarget;
        switch (jumpTarget) {
            case 0x14D4BCu: goto label_14d4bc;
            case 0x14D4CCu: goto label_14d4cc;
            case 0x14D4DCu: goto label_14d4dc;
            case 0x14D4ECu: goto label_14d4ec;
            case 0x14D4FCu: goto label_14d4fc;
            case 0x14D50Cu: goto label_14d50c;
            case 0x14D51Cu: goto label_14d51c;
            case 0x14D52Cu: goto label_14d52c;
            case 0x14D53Cu: goto label_14d53c;
            case 0x14D54Cu: goto label_14d54c;
            default: break;
        }
        if (!runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D4B4u, 0x0u, PS2Runtime::GuestBranchKind::IndirectJump, "JR")) {
            return;
        }
    }
    ctx->pc = 0x14D4BCu;
label_14d4bc:
    // 0x14d4bc: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x14d4bcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x14d4c0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x14d4c0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x14d4c4: 0x10000028  b           . + 4 + (0x28 << 2)
    ctx->pc = 0x14D4C4u;
    {
        const bool branch_taken_0x14d4c4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D4C8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D4C4u;
        // 0x14d4c8: 0x90420070  lbu         $v0, 0x70($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 112)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d4c4) {
            ctx->pc = 0x14D568u;
            goto label_14d568;
        }
    }
    ctx->pc = 0x14D4CCu;
label_14d4cc:
    // 0x14d4cc: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x14d4ccu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x14d4d0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x14d4d0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x14d4d4: 0x10000024  b           . + 4 + (0x24 << 2)
    ctx->pc = 0x14D4D4u;
    {
        const bool branch_taken_0x14d4d4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D4D8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D4D4u;
        // 0x14d4d8: 0x90420060  lbu         $v0, 0x60($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 96)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d4d4) {
            ctx->pc = 0x14D568u;
            goto label_14d568;
        }
    }
    ctx->pc = 0x14D4DCu;
label_14d4dc:
    // 0x14d4dc: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x14d4dcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x14d4e0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x14d4e0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x14d4e4: 0x10000020  b           . + 4 + (0x20 << 2)
    ctx->pc = 0x14D4E4u;
    {
        const bool branch_taken_0x14d4e4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D4E8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D4E4u;
        // 0x14d4e8: 0x90420058  lbu         $v0, 0x58($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 88)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d4e4) {
            ctx->pc = 0x14D568u;
            goto label_14d568;
        }
    }
    ctx->pc = 0x14D4ECu;
label_14d4ec:
    // 0x14d4ec: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x14d4ecu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x14d4f0: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x14d4f0u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x14d4f4: 0x1000001c  b           . + 4 + (0x1C << 2)
    ctx->pc = 0x14D4F4u;
    {
        const bool branch_taken_0x14d4f4 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D4F8u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D4F4u;
        // 0x14d4f8: 0x90420050  lbu         $v0, 0x50($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 80)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d4f4) {
            ctx->pc = 0x14D568u;
            goto label_14d568;
        }
    }
    ctx->pc = 0x14D4FCu;
label_14d4fc:
    // 0x14d4fc: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x14d4fcu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x14d500: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x14d500u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x14d504: 0x10000018  b           . + 4 + (0x18 << 2)
    ctx->pc = 0x14D504u;
    {
        const bool branch_taken_0x14d504 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D508u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D504u;
        // 0x14d508: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d504) {
            ctx->pc = 0x14D568u;
            goto label_14d568;
        }
    }
    ctx->pc = 0x14D50Cu;
label_14d50c:
    // 0x14d50c: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x14d50cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x14d510: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x14d510u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x14d514: 0x10000014  b           . + 4 + (0x14 << 2)
    ctx->pc = 0x14D514u;
    {
        const bool branch_taken_0x14d514 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D518u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D514u;
        // 0x14d518: 0x90420040  lbu         $v0, 0x40($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 64)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d514) {
            ctx->pc = 0x14D568u;
            goto label_14d568;
        }
    }
    ctx->pc = 0x14D51Cu;
label_14d51c:
    // 0x14d51c: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x14d51cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x14d520: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x14d520u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x14d524: 0x10000010  b           . + 4 + (0x10 << 2)
    ctx->pc = 0x14D524u;
    {
        const bool branch_taken_0x14d524 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D528u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D524u;
        // 0x14d528: 0x90420038  lbu         $v0, 0x38($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 56)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d524) {
            ctx->pc = 0x14D568u;
            goto label_14d568;
        }
    }
    ctx->pc = 0x14D52Cu;
label_14d52c:
    // 0x14d52c: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x14d52cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x14d530: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x14d530u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x14d534: 0x1000000c  b           . + 4 + (0xC << 2)
    ctx->pc = 0x14D534u;
    {
        const bool branch_taken_0x14d534 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D538u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D534u;
        // 0x14d538: 0x90420028  lbu         $v0, 0x28($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 40)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d534) {
            ctx->pc = 0x14D568u;
            goto label_14d568;
        }
    }
    ctx->pc = 0x14D53Cu;
label_14d53c:
    // 0x14d53c: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x14d53cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x14d540: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x14d540u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x14d544: 0x10000008  b           . + 4 + (0x8 << 2)
    ctx->pc = 0x14D544u;
    {
        const bool branch_taken_0x14d544 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D548u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D544u;
        // 0x14d548: 0x90420020  lbu         $v0, 0x20($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 32)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d544) {
            ctx->pc = 0x14D568u;
            goto label_14d568;
        }
    }
    ctx->pc = 0x14D54Cu;
label_14d54c:
    // 0x14d54c: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x14d54cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
    // 0x14d550: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x14d550u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x14d554: 0x10000004  b           . + 4 + (0x4 << 2)
    ctx->pc = 0x14D554u;
    {
        const bool branch_taken_0x14d554 = (GPR_U64(ctx, 0) == GPR_U64(ctx, 0));
        ctx->pc = 0x14D558u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D554u;
        // 0x14d558: 0x90420000  lbu         $v0, 0x0($v0) (Delay Slot)
        SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 0)));
        ctx->in_delay_slot = false;
        if (branch_taken_0x14d554) {
            ctx->pc = 0x14D568u;
            goto label_14d568;
        }
    }
    ctx->pc = 0x14D55Cu;
    // 0x14d55c: 0x3082ffff  andi        $v0, $a0, 0xFFFF
    ctx->pc = 0x14d55cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 4) & (uint64_t)(uint16_t)65535);
label_14d560:
    // 0x14d560: 0x5d1021  addu        $v0, $v0, $sp
    ctx->pc = 0x14d560u;
    SET_GPR_S32(ctx, 2, (int32_t)ADD32(GPR_U32(ctx, 2), GPR_U32(ctx, 29)));
    // 0x14d564: 0x90420070  lbu         $v0, 0x70($v0)
    ctx->pc = 0x14d564u;
    SET_GPR_U32(ctx, 2, (uint8_t)READ8(ADD32(GPR_U32(ctx, 2), 112)));
label_14d568:
    // 0x14d568: 0x304200ff  andi        $v0, $v0, 0xFF
    ctx->pc = 0x14d568u;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)255);
    // 0x14d56c: 0x30420001  andi        $v0, $v0, 0x1
    ctx->pc = 0x14d56cu;
    SET_GPR_U64(ctx, 2, GPR_U64(ctx, 2) & (uint64_t)(uint16_t)1);
    // 0x14d570: 0x3e00008  jr          $ra
    ctx->pc = 0x14D570u;
    {
        const uint32_t jumpTarget = GPR_U32(ctx, 31);
        ctx->pc = 0x14D574u;
        ctx->in_delay_slot = true;
        ctx->branch_pc = 0x14D570u;
        // 0x14d574: 0x27bd0080  addiu       $sp, $sp, 0x80 (Delay Slot)
        SET_GPR_S32(ctx, 29, (int32_t)ADD32(GPR_U32(ctx, 29), 128));
        ctx->in_delay_slot = false;
        ctx->pc = jumpTarget;
        #if defined(PS2X_STRICT_RETURN_DIAGNOSTICS) && PS2X_STRICT_RETURN_DIAGNOSTICS
        (void)runtime->dispatchGuestBranch(rdram, ctx, jumpTarget, 0x14D570u, 0u, PS2Runtime::GuestBranchKind::Return, "JR $ra");
        return;
        #else
        ctx->pc = jumpTarget;
        return;
        #endif
    }
    ctx->pc = 0x14D578u;
    // 0x14d578: 0x0  nop
    ctx->pc = 0x14d578u;
    // NOP
    // 0x14d57c: 0x0  nop
    ctx->pc = 0x14d57cu;
    // NOP
}
